#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskContactShadow_18e3ac0(_QWORD* a1);
void gfxa_TaskContactShadow_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskContactShadow_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);
_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameHr_ad5280(_QWORD*);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 game_615760(__int64, __int64);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN** GameData_212e490[11];
extern _UNKNOWN** GameData_212e498[10];
extern _UNKNOWN** GameData_212e4a0[9];
extern _UNKNOWN** GameData_212e4a8[8];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e848[11];
extern _UNKNOWN** GameData_212e880[4];
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_212e890[2];
extern _UNKNOWN** GameData_212e898;
extern __int64 (*GameData_2109d48[])();
extern __int64 (*GameData_2109dc8[])();
extern int GameData_21fdeb8;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskContactShadow_Impl_Impl(_QWORD* a1, __int64 a2);
__int64 TaskContactShadow_18e3c20(__int64* a1, _QWORD* a2, _QWORD* a3,
                                  _QWORD* a4, __int64 a5);

__int64 gfxa_TaskContactShadow_Impl_Impl(_QWORD* a1, __int64 a2)
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
  __int64* v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 (**v25)();
    __int64 v26;
    char gap16_[16];
    __int64 (***v27)();
  } v25_;
  struct {
    _QWORD v28[2];
    __int64 v29;
    __int64 v30;
  } v28_;

  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[10] = 0;
  *((_DWORD*)a1 + 22) = 0;
  *((_DWORD*)a1 + 32) = 1;
  a1[9] = 0;
  v3 = a1 + 9;
  GameRoutine_604020(a1 + 26);
  a1[41] = -1;
  GameRoutine_604020(a1 + 42);
  v4 = *a1;
  a1[57] = -1;
  gfx_shader_Archive_CreateShader((void*)(&v25_.v25), *(__int64**)(v4 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"ContactShadow", 0xDu);
  v5 = v25_.v25;
  v6 = v25_.v26;
  v7 = a1[2];
  v25_.v25 = nullptr;
  v25_.v26 = 0;
  a1[1] = v5;
  a1[2] = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  GameHr_ad5280((_QWORD*)a1[1]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v25_.v25), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"ContactShadow", 0xDu);
  v9 = v25_.v25;
  v10 = v25_.v26;
  v11 = a1[4];
  v25_.v25 = nullptr;
  v25_.v26 = 0;
  a1[3] = v9;
  a1[4] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v12 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  GameRoutine_ad5000((_QWORD*)a1[3], (__int64)"experimental", 0xCu, 1);
  GameHr_ad5280((_QWORD*)a1[3]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v25_.v25), *(__int64**)(*a1 + 13408LL), (__int64)"Lighting", 8u,
      (__int64)"ContactShadow", 0xDu);
  v13 = v25_.v25;
  v14 = v25_.v26;
  v15 = a1[6];
  v25_.v25 = nullptr;
  v25_.v26 = 0;
  a1[5] = v13;
  a1[6] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  GameRoutine_ad5000((_QWORD*)a1[5], (__int64)"grass_caster_disabled", 0x15u,
                     1);
  GameHr_ad5280((_QWORD*)a1[5]);
  gfx_shader_Archive_CreateShader((void*)(&v25_.v25),
                                  *(__int64**)(*a1 + 13408LL),
                                  (__int64)"filter", 6u, (__int64)"copy", 4u);
  v17 = v25_.v25;
  v18 = v25_.v26;
  v19 = a1[8];
  v25_.v25 = nullptr;
  v25_.v26 = 0;
  a1[7] = v17;
  a1[8] = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  v20 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  GameHr_ad5280((_QWORD*)a1[7]);
  DecalObject_a91100(v3, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 80);
  v28_.v29 = 0;
  v28_.v30 = 0;
  v28_.v28[0] = 0;
  v28_.v28[1] = 0;
  v25_.v25 = GameData_2109d48;
  v25_.v27 = &v25_.v25;
  GameRoutine_5fc230((__int64)v28_.v28);
  if (v25_.v27 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v25_.v27)[6])(v25_.v27,
                                                             v28_.v28);
  }
  v21 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 26),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v28_.v28);
  a1[41] = game_615760(*(_QWORD*)(*v21 + 552), (__int64)(a1 + 26));
  if (v25_.v27 == &v25_.v25) {
    v22 = 4;
  }
  else {
    if (v25_.v27 == nullptr) {
      goto LABEL_32;
    }
    v22 = 5;
  }
  ((__int64 (*)(__int64))(*v25_.v27)[v22])((__int64)v25_.v27);
LABEL_32:
  v28_.v29 = 0;
  v28_.v30 = 0;
  v28_.v28[0] = 0;
  v28_.v28[1] = 0;
  v25_.v25 = GameData_2109dc8;
  v25_.v27 = &v25_.v25;
  GameRoutine_5fc230((__int64)v28_.v28);
  if (v25_.v27 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v25_.v27)[6])(v25_.v27,
                                                             v28_.v28);
  }
  GameRoutine_604060((__int64)(a1 + 42), (__int64*)(*v21 + 568),
                     (__int64)v28_.v28);
  a1[57] = game_615760(*(_QWORD*)(*v21 + 552), (__int64)(a1 + 42));
  if (v25_.v27 == &v25_.v25) {
    v23 = 4;
    goto LABEL_38;
  }
  if (v25_.v27 != nullptr) {
    v23 = 5;
  LABEL_38:
    ((__int64 (*)(__int64))(*v25_.v27)[v23])((__int64)v25_.v27);
  }
  (*(void (**)(_QWORD*))GameData_212e490[0])(a1 + 17);
  (*(void (**)(_QWORD*, _QWORD))GameData_212e880[0])(a1 + 17, 0);
  (*(void (**)(_QWORD*))GameData_212e4a0[0])(a1 + 25);
  (*(void (**)(_QWORD*, _QWORD, _QWORD))GameData_212e4a8[0])(a1 + 25, 0, 0);
  (*(void (**)(__int64))GameData_212e498[0])((__int64)a1 + 204);
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, __int64,
                         _QWORD))GameData_212e848[0])((__int64)a1 + 204, 0, 0,
                                                      0, 1, 0);
}

__int64 TaskContactShadow_18e3ac0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 26, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 42, *v2 + 568);
  GameRoutine_604050(a1 + 42);
  GameRoutine_604050(a1 + 26);
  v3 = a1[10];
  a1[10] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  result = a1[9];
  a1[9] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v5 = a1[8];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[4];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 TaskContactShadow_18e3c20(__int64* a1, _QWORD* a2, _QWORD* a3,
                                  _QWORD* a4, __int64 a5)
{

#pragma clang fp contract(off)
  int v5;
  __int64 v6;
  bool v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  int v19;
  int v20;
  float v21;
  float v22;
  int v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 (**v27)(__int64);
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *((_DWORD*)a1 + 22);
  v6 = *a1;
  v12 = v5 < -1;
  v13 = ((_BYTE)v5 + 1) & 1;
  if (v12) {
    v13 = -v13;
  }
  *((_DWORD*)a1 + 22) = v13;
  v14 = a1[v13 + 9];
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v15;
  v17 = (float)*(int*)(a5 + 12);
  v18 = (float)*(int*)(a5 + 16);
  *(float*)v15 = v17;
  *(float*)(v15 + 4) = v18;
  *(float*)(v15 + 8) = 0x1.0000000000000p+0f / v17;
  *(float*)(v15 + 12) = 0x1.0000000000000p+0f / v18;
  v19 = *(_DWORD*)(a5 + 32);
  v20 = *(_DWORD*)(a5 + 24);
  v21 = *(float*)(a5 + 28) / 0x1.9000000000000p+6f;
  *(float*)(v15 + 16) = (float)*(int*)(a5 + 20);
  *(_DWORD*)(v15 + 20) = v20;
  *(float*)(v15 + 24) = v21;
  *(_DWORD*)(v15 + 28) = v19;
  v22 = *(float*)(a5 + 40);
  v23 = *(_DWORD*)(a5 + 48);
  v24 = *(float*)(a5 + 44) - v22;
  *(_DWORD*)(v15 + 32) = *(_DWORD*)(a5 + 36);
  *(float*)(v15 + 36) = -v22;
  if (v24 < 0x1.0000000000000p-23f) {
    v24 = 0x1.0000000000000p-23f;
  }
  *(float*)(v15 + 40) = 0x1.0000000000000p+0f / v24;
  *(_DWORD*)(v15 + 44) = v23;
  v25 = *(float*)(a5 + 56);
  *(_QWORD*)(v15 + 52) = 0;
  *(_DWORD*)(v15 + 60) = 0;
  *(float*)(v15 + 48) = v25 * 0x1.1df46a0000000p-6f;
  v26 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v26 + 40LL))(v26),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (__int64 (**)(__int64))GameData_212e4d8[0],
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v16 +
             64) =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v6 + 256) + 8LL),
             v34 = COERCE_AS(__typeof__(v34),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v28 + 40LL))(v28),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v16 + 72) = (*v27)(*(_QWORD*)(v6 + 256) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 64LL))(v14),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v29, GameData_21fdeb8),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v29, GameData_21fdf08),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v29, GameData_21fdf14),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *a4;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64*))GameData_212e888[0])(v30 + 8, a1 + 17),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))GameData_212e890[0])(v30 + 8,
                                                      (__int64)a1 + 204),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64*))*GameData_212e898)(v30 + 8, a1 + 25),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *a4;
  v32 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 32LL))(v32),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v31 + 96LL))(v31, v33,
                                                                  v34),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 12), *(unsigned int*)(a5 + 16)),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 12), *(unsigned int*)(a5 + 16)),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = *a4;
  v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = v36 + 16LL * *(int*)(v36 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v35 + 224LL))(v35, 2, 0, *(_QWORD*)(v37 + 24),
                              *(_QWORD*)(v37 + 32)),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = *a4;
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = v39 + 16LL * *(int*)(v39 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v38 + 224LL))(v38, 2, 1, *(_QWORD*)(v40 + 24),
                              *(_QWORD*)(v40 + 32)),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = *a4;
  v42 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = v42 + 16LL * *(int*)(v42 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v41 + 224LL))(v41, 2, 2, *(_QWORD*)(v43 + 24),
                              *(_QWORD*)(v43 + 32)),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = &a1[2 * *((int*)a1 + 22)];
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 3, v44[12], v44[13]),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a5 + 52) != 0) {
    v45 = (__int64)(a1 + 5);
  }
  else {
    v45 = (__int64)&a1[2 * *(int*)(a5 + 60) + 1];
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)v45 + 144LL)),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return gxc_NvnStateCache_ClearCommandList(a4[1]);
}

void gfxa_TaskContactShadow_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskContactShadow_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

#pragma GCC visibility pop
