#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskSSAO_b79df0(_QWORD* a1);
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
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e900;
extern __int64 (*GameData_1fc7ba0[])();
extern __int64 (*GameData_1fc7c20[])();
extern __int64 (*GameData_2177ce0)(__int64);
extern __int64 (*GameData_2177ce8)(__int64);
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskSSAO_Impl_Impl(_QWORD* a1, __int64 a2);
__int64 TaskSSAO_b7a910(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4);

__int64 gfxa_TaskSSAO_Impl_Impl(_QWORD* a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 (**v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 (**v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 result;
  __int64 v34;
  struct {
    __int64 (**v35)();
    __int64 v36;
    char gap16_[16];
    __int64 (***v37)();
  } v35_;
  struct {
    _QWORD v38[2];
    __int64 v39;
    __int64 v40;
  } v38_;

  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[12] = 0;
  *((_DWORD*)a1 + 26) = 0;
  *((_DWORD*)a1 + 40) = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[11] = 0;
  v3 = a1 + 11;
  a1[18] = 0;
  v4 = a1 + 18;
  GameRoutine_604020(a1 + 25);
  a1[40] = -1;
  GameRoutine_604020(a1 + 41);
  v5 = *a1;
  a1[56] = -1;
  gfx_shader_Archive_CreateShader((void*)(&v35_.v35), *(__int64**)(v5 + 13408),
                                  (__int64)"Lighting", 8u, (__int64)"HBAO", 4u);
  v6 = v35_.v35;
  v7 = v35_.v36;
  v8 = a1[2];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[1] = v6;
  a1[2] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = GameRoutine_ad5000((_QWORD*)a1[1], (__int64)"pass", 4u, 0);
  GameRoutine_ad5280(v10);
  gfx_shader_Archive_CreateShader((void*)(&v35_.v35),
                                  *(__int64**)(*a1 + 13408LL),
                                  (__int64)"Lighting", 8u, (__int64)"HBAO", 4u);
  v11 = v35_.v35;
  v12 = v35_.v36;
  v13 = a1[4];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[3] = v11;
  a1[4] = v12;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = GameRoutine_ad5000((_QWORD*)a1[3], (__int64)"pass", 4u, 1);
  GameRoutine_ad5280(v15);
  gfx_shader_Archive_CreateShader((void*)(&v35_.v35),
                                  *(__int64**)(*a1 + 13408LL),
                                  (__int64)"Lighting", 8u, (__int64)"HBAO", 4u);
  v16 = v35_.v35;
  v17 = v35_.v36;
  v18 = a1[6];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[5] = v16;
  a1[6] = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = GameRoutine_ad5000((_QWORD*)a1[5], (__int64)"pass", 4u, 2);
  GameRoutine_ad5280(v20);
  gfx_shader_Archive_CreateShader(
      (void*)(&v35_.v35), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"HBAO_Deinterleave", 0x11u);
  v21 = v35_.v35;
  v22 = v35_.v36;
  v23 = a1[8];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[7] = v21;
  a1[8] = v22;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = GameRoutine_ad5000((_QWORD*)a1[7], (__int64)"deinterleave_pass", 0x11u,
                           0);
  GameRoutine_ad5280(v25);
  gfx_shader_Archive_CreateShader(
      (void*)(&v35_.v35), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"HBAO_Deinterleave", 0x11u);
  v26 = v35_.v35;
  v27 = v35_.v36;
  v28 = a1[10];
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  a1[9] = v26;
  a1[10] = v27;
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  v29 = v35_.v36;
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  v30 = GameRoutine_ad5000((_QWORD*)a1[9], (__int64)"deinterleave_pass", 0x11u,
                           1);
  GameRoutine_ad5280(v30);
  DecalObject_a91100(v3, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 740);
  DecalObject_a91100(v4, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 40);
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38[0] = 0;
  v38_.v38[1] = 0;
  v35_.v35 = GameData_1fc7ba0;
  v35_.v37 = &v35_.v35;
  GameRoutine_5fc230((__int64)v38_.v38);
  if (v35_.v37 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v37)[6])(v35_.v37,
                                                             v38_.v38);
  }
  v31 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 25),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v38_.v38);
  a1[40] = GameRoutine_615760(*(_QWORD*)(*v31 + 552), (__int64)(a1 + 25));
  if (v35_.v37 == &v35_.v35) {
    v32 = 4;
  }
  else {
    if (v35_.v37 == nullptr) {
      goto LABEL_38;
    }
    v32 = 5;
  }
  ((__int64 (*)(__int64))(*v35_.v37)[v32])((__int64)v35_.v37);
LABEL_38:
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38[0] = 0;
  v38_.v38[1] = 0;
  v35_.v35 = GameData_1fc7c20;
  v35_.v37 = &v35_.v35;
  GameRoutine_5fc230((__int64)v38_.v38);
  if (v35_.v37 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v37)[6])(v35_.v37,
                                                             v38_.v38);
  }
  GameRoutine_604060((__int64)(a1 + 41), (__int64*)(*v31 + 568),
                     (__int64)v38_.v38);
  a1[56] = GameRoutine_615760(*(_QWORD*)(*v31 + 552), (__int64)(a1 + 41));
  result = (__int64)v35_.v37;
  if (v35_.v37 == &v35_.v35) {
    v34 = 4;
  }
  else {
    if (v35_.v37 == nullptr) {
      return result;
    }
    v34 = 5;
  }
  return ((__int64 (*)(__int64))(*v35_.v37)[v34])((__int64)v35_.v37);
}

__int64 TaskSSAO_b79df0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 25, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 41, *v2 + 568);
  GameRoutine_604050(a1 + 41);
  GameRoutine_604050(a1 + 25);
  v3 = a1[19];
  a1[19] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[18];
  a1[18] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[12];
  a1[12] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[11];
  a1[11] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[10];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[8];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[6];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v10 = a1[4];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
    v11 = a1[2];
    if (v11 == 0) {
      return result;
    }
  }
  else {
    v11 = a1[2];
    if (v11 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak(v11);
  }
  return result;
}

__int64 TaskSSAO_b7a910(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _UNKNOWN** v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  void (**v39)(__int64, __int64);
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;

  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = GameData_2177ce0(v9);
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = GameData_2177ce8(v12);
  v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = GameData_2177ce0(v15);
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 32LL))(v17),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = GameData_2177ce8(v18);
  gxc_NvnStateCache_Reset(a4[1]),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v20, GameData_21fdeb8[0]),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v20, GameData_21fdee0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v20, GameData_21fdf08),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v20, GameData_21fdf14),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = *a4;
  v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 24) + 16LL))(
      *(_QWORD*)(a2 + 24)),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = v22 + 16LL * *(int*)(v22 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v21 + 224LL))(v21, 2, 0, *(_QWORD*)(v23 + 24),
                              *(_QWORD*)(v23 + 32)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = a1 + 16LL * *(int*)(a1 + 104);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 1, *(_QWORD*)(v24 + 112),
                              *(_QWORD*)(v24 + 120)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = a1 + 16LL * *(int*)(a1 + 160);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 2, *(_QWORD*)(v25 + 168),
                              *(_QWORD*)(v25 + 176)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = *a4;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = GameData_212e900;
  ((void (*)(__int64, _QWORD, _QWORD, _QWORD, _QWORD,
             _QWORD))*GameData_212e900)(v26 + 8, 0, 0, 0, 0, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 48LL))(v29),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v28 + 256LL))(
      v28, 2, 0, v30),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *(_QWORD*)(a1 + 56);
  v32 = *(_QWORD*)(a1 + 64);
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v31 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v32),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v33 = *a4;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = *(_QWORD*)(a1 + 8);
  v35 = *(_QWORD*)(a1 + 16);
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v34 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*v27)(v33 + 8, 0,
                                                                    0, 0, 0, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v16, v19),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = *a4;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 48LL))(v37),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v36 + 256LL))(
      v36, 2, 0, v38),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 12, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v35),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v39 = (void (**)(__int64, __int64))GameData_212e738,
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 32LL))(v40),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v41, v42),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = *(_QWORD*)(a1 + 72);
  v44 = *(_QWORD*)(a1 + 80);
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                              memory_order_relaxed);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v43 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v44),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v10, v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v45 = *a4;
  v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 32LL))(v46),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49 = v48;
  (*v39)(v45 + 8, 50);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v47, v49),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = *(_QWORD*)(a1 + 24);
  v50 = *(_QWORD*)(a1 + 32);
  if (v50 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                              memory_order_relaxed);
  }
  v52 = *a4;
  v53 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 40LL))(v53),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v52 + 248LL))(v52, 2, 1, v54, v55, *(unsigned int*)(a1 + 320)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(v51 + 144)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v50),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v56 = *a4;
  v57 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = (*(__int64 (**)(__int64))(*(_QWORD*)v57 + 32LL))(v57),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60 = v59;
  (*v39)(v56 + 8, 50);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v58, v60),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *a4;
  v62 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 40LL))(v62),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v61 + 248LL))(v61, 2, 1, v63, v64, *(unsigned int*)(a1 + 320)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 40) + 144LL)),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return gxc_NvnStateCache_ClearCommandList(a4[1]);
}

#pragma GCC visibility pop
