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

__int64 gfxa_TaskCharaDiffusion_Impl_Impl(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v6;
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
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int* v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int* v32;
  int v33;
  int v34;
  struct {
    __int64 (**v36)();
    __int64 v37;
    char gap16_[16];
    __int64 (***v38)();
  } v36_;
  struct {
    _QWORD v39[2];
    __int64 v40;
    __int64 v41;
  } v39_;

  *a1 = a2;
  GameRoutine_604020(a1 + 1);
  a1[16] = -1;
  GameRoutine_604020(a1 + 17);
  a1[32] = -1;
  a1[75] = 0;
  a1[76] = 0;
  a1[77] = 0;
  a1[78] = 0;
  memset(a1 + 33, 0, 276);
  a1[68] = 0;
  a1[69] = 0;
  a1[70] = 0;
  a1[71] = 0;
  a1[72] = 0;
  a1[73] = 0;
  *((_DWORD*)a1 + 148) = 0;
  v39_.v40 = 0;
  v39_.v41 = 0;
  v36_.v36 = GameData_1fc5aa0;
  v36_.v38 = &v36_.v36;
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  GameRoutine_5fc230((__int64)v39_.v39);
  if (v36_.v38 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v36_.v38)[6])(v36_.v38,
                                                             v39_.v39);
  }
  v6 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 1),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v39_.v39);
  a1[16] = GameRoutine_615760(*(_QWORD*)(*v6 + 552), (__int64)(a1 + 1));
  if (v36_.v38 == &v36_.v36) {
    v7 = 4;
  }
  else {
    if (v36_.v38 == nullptr) {
      goto LABEL_8;
    }
    v7 = 5;
  }
  ((__int64 (*)(__int64))(*v36_.v38)[v7])((__int64)v36_.v38);
LABEL_8:
  v39_.v40 = 0;
  v39_.v41 = 0;
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  v36_.v36 = GameData_1fc5b20;
  v36_.v38 = &v36_.v36;
  GameRoutine_5fc230((__int64)v39_.v39);
  if (v36_.v38 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v36_.v38)[6])(v36_.v38,
                                                             v39_.v39);
  }
  GameRoutine_604060((__int64)(a1 + 17), (__int64*)(*v6 + 568),
                     (__int64)v39_.v39);
  a1[32] = GameRoutine_615760(*(_QWORD*)(*v6 + 552), (__int64)(a1 + 17));
  if (v36_.v38 == &v36_.v36) {
    v8 = 4;
    goto LABEL_14;
  }
  if (v36_.v38 != nullptr) {
    v8 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v36_.v38)[v8])((__int64)v36_.v38);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v36_.v36), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v9 = v36_.v36;
  v10 = v36_.v37;
  v11 = a1[34];
  v36_.v36 = nullptr;
  v36_.v37 = 0;
  a1[33] = v9;
  a1[34] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v36_.v37;
  if (v36_.v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_ad5000((_QWORD*)a1[33], (__int64)"phase", 5u, 0);
  GameRoutine_ad5280((__int64*)a1[33]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v36_.v36), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v13 = v36_.v36;
  v14 = v36_.v37;
  v15 = a1[36];
  v36_.v36 = nullptr;
  v36_.v37 = 0;
  a1[35] = v13;
  a1[36] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v36_.v37;
  if (v36_.v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  GameRoutine_ad5000((_QWORD*)a1[35], (__int64)"phase", 5u, 1);
  GameRoutine_ad5280((__int64*)a1[35]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v36_.v36), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v17 = v36_.v36;
  v18 = v36_.v37;
  v19 = a1[38];
  v36_.v36 = nullptr;
  v36_.v37 = 0;
  a1[37] = v17;
  a1[38] = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v36_.v37;
  if (v36_.v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  GameRoutine_ad5000((_QWORD*)a1[37], (__int64)"phase", 5u, 2);
  GameRoutine_ad5280((__int64*)a1[37]);
  gfx_shader_Archive_CreateShader(
      (void*)(&v36_.v36), *(__int64**)(*a1 + 13408LL),
      (__int64)"ImageProcessing", 0xFu, (__int64)"CharaDiffusion", 0xEu);
  v21 = v36_.v36;
  v22 = v36_.v37;
  v23 = a1[40];
  v36_.v36 = nullptr;
  v36_.v37 = 0;
  a1[39] = v21;
  a1[40] = v22;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = v36_.v37;
  if (v36_.v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  GameRoutine_ad5000((_QWORD*)a1[39], (__int64)"phase", 5u, 3);
  GameRoutine_ad5280((__int64*)a1[39]);
  DecalObject_a91100(a1 + 65, *(_QWORD*)(*a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552LL) + 16LL), 24);
  v25 = a1[65];
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 56LL))(v25);
  v27 = (int*)(*a1 + 13304LL);
  if (*(_BYTE*)(*a1 + 16700LL) != 0) {
    v27 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  }
  v28 = *v27;
  v29 = v27[1];
  *(_DWORD*)(v26 + 8) = 1112014848;
  *(_DWORD*)(v26 + 20) = 0;
  *(float*)v26 =
      0x1.0000000000000p+0f / (float)((float)v28 * 0x1.0000000000000p-1f);
  *(float*)(v26 + 4) =
      0x1.0000000000000p+0f / (float)((float)v29 * 0x1.0000000000000p-1f);
  (*(void (**)(__int64))(*(_QWORD*)v25 + 64LL))(v25);
  v30 = a1[66];
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 56LL))(v30);
  v32 = (int*)(*a1 + 13304LL);
  if (*(_BYTE*)(*a1 + 16700LL) != 0) {
    v32 = (int*)(*(_QWORD*)(*a1 + 16672LL) + 24LL);
  }
  v33 = *v32;
  v34 = v32[1];
  *(_DWORD*)(v31 + 8) = 1112014848;
  *(_DWORD*)(v31 + 20) = 0;
  *(float*)v31 =
      0x1.0000000000000p+0f / (float)((float)v33 * 0x1.0000000000000p-1f);
  *(float*)(v31 + 4) =
      0x1.0000000000000p+0f / (float)((float)v34 * 0x1.0000000000000p-1f);
  (*(void (**)(__int64))(*(_QWORD*)v30 + 64LL))(v30);
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
