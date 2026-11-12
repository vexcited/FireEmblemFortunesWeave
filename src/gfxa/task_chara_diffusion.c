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
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc5aa0[])();
extern __int64 (*GameData_1fc5b20[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskCharaDiffusion_Impl_Impl(_QWORD* a1, __int64 a2);
__int64 TaskCharaDiffusion_b51900(__int64 a1, _QWORD* a2, _QWORD* a3,
                                  __int64* a4);
__int64 GameHr_ad5280(_QWORD*);
__int64 game_615760(__int64, __int64);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 gfxa_TaskCharaDiffusion_Impl_Impl(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (**v18)();
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  int v30;
  int v31;
  struct {
    __int64 (**v33)();
    __int64 v34;
    char gap16_[16];
    __int64 (***v35)();
  } v33_;
  struct {
    _QWORD v36[2];
    __int64 v37;
    __int64 v38;
  } v36_;

  *a1 = a2;
  GameRoutine_604020(a1 + 1);
  a1[16] = -1;
  GameRoutine_604020(a1 + 17);
  a1[32] = -1;
  a1[75] = 0;
  a1[76] = 0;
  a1[77] = 0;
  a1[78] = 0;
  memset_alt1((__int64)(a1 + 33), 0, 0x114u);
  a1[68] = 0;
  a1[69] = 0;
  a1[70] = 0;
  a1[71] = 0;
  a1[72] = 0;
  a1[73] = 0;
  *((_DWORD*)a1 + 148) = 0;
  v36_.v37 = 0;
  v36_.v38 = 0;
  v33_.v33 = GameData_1fc5aa0;
  v33_.v35 = &v33_.v33;
  v36_.v36[0] = 0;
  v36_.v36[1] = 0;
  GameRoutine_5fc230((__int64)v36_.v36);
  if (v33_.v35 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v33_.v35)[6])(v33_.v35,
                                                             v36_.v36);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 1),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v36_.v36);
  a1[16] = game_615760(*(_QWORD*)(*v3 + 552), (__int64)(a1 + 1));
  if (v33_.v35 == &v33_.v33) {
    v4 = 4;
  }
  else {
    if (v33_.v35 == nullptr) {
      goto LABEL_8;
    }
    v4 = 5;
  }
  ((__int64 (*)(__int64))(*v33_.v35)[v4])((__int64)v33_.v35);
LABEL_8:
  v36_.v37 = 0;
  v36_.v38 = 0;
  v36_.v36[0] = 0;
  v36_.v36[1] = 0;
  v33_.v33 = GameData_1fc5b20;
  v33_.v35 = &v33_.v33;
  GameRoutine_5fc230((__int64)v36_.v36);
  if (v33_.v35 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v33_.v35)[6])(v33_.v35,
                                                             v36_.v36);
  }
  GameRoutine_604060((__int64)(a1 + 17), (__int64*)(*v3 + 568),
                     (__int64)v36_.v36);
  a1[32] = game_615760(*(_QWORD*)(*v3 + 552), (__int64)(a1 + 17));
  if (v33_.v35 == &v33_.v33) {
    v5 = 4;
    goto LABEL_14;
  }
  if (v33_.v35 != nullptr) {
    v5 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v33_.v35)[v5])((__int64)v33_.v35);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v6 = v33_.v33;
  v7 = v33_.v34;
  v8 = a1[34];
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  a1[33] = v6;
  a1[34] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  GameRoutine_ad5000((_QWORD*)a1[33], (__int64)"phase", 5u, 0);
  GameHr_ad5280((_QWORD*)a1[33]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v10 = v33_.v33;
  v11 = v33_.v34;
  v12 = a1[36];
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  a1[35] = v10;
  a1[36] = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  GameRoutine_ad5000((_QWORD*)a1[35], (__int64)"phase", 5u, 1);
  GameHr_ad5280((_QWORD*)a1[35]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v14 = v33_.v33;
  v15 = v33_.v34;
  v16 = a1[38];
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  a1[37] = v14;
  a1[38] = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  v17 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  GameRoutine_ad5000((_QWORD*)a1[37], (__int64)"phase", 5u, 2);
  GameHr_ad5280((_QWORD*)a1[37]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v33_.v33), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v18 = v33_.v33;
  v19 = v33_.v34;
  v20 = a1[40];
  v33_.v33 = nullptr;
  v33_.v34 = 0;
  a1[39] = v18;
  a1[40] = v19;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  v21 = v33_.v34;
  if (v33_.v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v21);
  }
  GameRoutine_ad5000((_QWORD*)a1[39], (__int64)"phase", 5u, 3);
  GameHr_ad5280((_QWORD*)a1[39]);
  DecalObject_a91100(a1 + 65, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 24);
  v22 = a1[65];
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 56LL))(v22);
  v24 = (int*)(*a1 + 13304LL);
  if (*(_BYTE*)(*a1 + 16700LL) != 0) {
    v24 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  }
  v25 = *v24;
  v26 = v24[1];
  *(_DWORD*)(v23 + 8) = 1112014848;
  *(_DWORD*)(v23 + 20) = 0;
  *(float*)v23 =
      0x1.0000000000000p+0f / (float)((float)v25 * 0x1.0000000000000p-1f);
  *(float*)(v23 + 4) =
      0x1.0000000000000p+0f / (float)((float)v26 * 0x1.0000000000000p-1f);
  (*(void (**)(__int64))(*(_QWORD*)v22 + 64LL))(v22);
  v27 = a1[66];
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 56LL))(v27);
  v29 = (int*)(*a1 + 13304LL);
  if (*(_BYTE*)(*a1 + 16700LL) != 0) {
    v29 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  }
  v30 = *v29;
  v31 = v29[1];
  *(_DWORD*)(v28 + 8) = 1112014848;
  *(_DWORD*)(v28 + 20) = 0;
  *(float*)v28 =
      0x1.0000000000000p+0f / (float)((float)v30 * 0x1.0000000000000p-1f);
  *(float*)(v28 + 4) =
      0x1.0000000000000p+0f / (float)((float)v31 * 0x1.0000000000000p-1f);
  (*(void (**)(__int64))(*(_QWORD*)v27 + 64LL))(v27);
  return DecalObject_a91100(a1 + 72, *(_QWORD*)(*a1 + 312LL),
                            *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 24);
}

__int64 TaskCharaDiffusion_b51900(__int64 a1, _QWORD* a2, _QWORD* a3,
                                  __int64* a4)
{
  void (**v8)(__int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  _QWORD v58[2];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (void (**)(__int64, __int64))GameData_212e738,
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[1] = v10;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (__int64*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v11 = (__int64*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v12 = *v11;
  v13 = HIDWORD(*v11);
  v14 = (int)*v11 / 2;
  v15 = (int)HIDWORD(*v11) / 2;
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v14, v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v14, v15),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *a4;
  v58[0] = 0;
  v58[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v16 + 144LL))(v16, 0, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = a1 + 16LL * *(int*)(a1 + 536);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v17 + 544),
                              *(_QWORD*)(v17 + 552)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = a1 + 16LL * *(int*)(a1 + 592);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 1, *(_QWORD*)(v18 + 600),
                              *(_QWORD*)(v18 + 608)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = *a4;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v19 + 248LL))(v19, 3, 0, v21, v22, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = *a4;
  v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v23 + 248LL))(v23, 3, 2, v25, v26, *(unsigned int*)(a1 + 256)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = *a4;
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 40LL))(v28),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v27 + 248LL))(v27, 3, 3, v29, v30, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v31, GameData_21fdeb8[0]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v31, GameData_21fdee0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v31, GameData_21fdf08),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v31, GameData_21fdf14),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 264) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v8)(*a4 + 8, 49);
  v32 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 32LL))(v32),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[1] = v33;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = *a4;
  v58[0] = 0;
  v58[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v34 + 144LL))(v34, 0, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = *a4;
  v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 40LL))(v36),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v35 + 248LL))(v35, 3, 0, v37, v38, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 280) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v8)(*a4 + 8, 49);
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 32LL))(v39),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[1] = v40;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = *a4;
  v58[0] = 0;
  v58[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v41 + 144LL))(v41, 0, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = *a4;
  v43 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 40LL))(v43),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v42 + 248LL))(v42, 3, 0, v44, v45, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 296) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v8)(*a4 + 8, 49);
  v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 32LL))(v46),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58[1] = v47;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)*a4 + 120LL))(*a4, 1, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)v12, (unsigned int)v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)v12, (unsigned int)v13),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = *a4;
  v58[0] = 0;
  v58[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v48 + 144LL))(v48, 0, v58),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49 = *a4;
  v50 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 40LL))(v50),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v49 + 248LL))(v49, 3, 0, v51, v52, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53 = *a4;
  v54 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v55 = (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 40LL))(v54),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v53 + 248LL))(v53, 3, 1, v55, v56, *(unsigned int*)(a1 + 128)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 312) + 144LL)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
