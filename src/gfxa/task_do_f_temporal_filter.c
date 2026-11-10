#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskDoFTemporalFilter_b7d840(_QWORD* a1);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
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
extern _UNKNOWN** GameData_212e870[6];
extern __int64 (*GameData_1fc7e20[])();
extern __int64 (*GameData_1fc7ea0[])();
extern __int64 (*GameData_2178500)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, _QWORD, _QWORD, _QWORD);
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskDoFTemporalFilter_Impl_Impl(__int64* a1, __int64 a2);
__int64 TaskDoFTemporalFilter_b7d920(__int64 a1, _QWORD* a2, _QWORD* a3,
                                     __int64* a4, float* a5);

__int64 gfxa_TaskDoFTemporalFilter_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64 (***v20)();
  __int64 v21;
  __int64 v22;
  __int64 result;
  struct {
    __int64 (**v24)();
    __int64 v25;
    int v26;
    _BYTE v27[7];
    char gap27_[5];
    __int64 (***v28)();
    __int64 v29;
  } v24_;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
  } v30_;

  *a1 = a2;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  *((_DWORD*)a1 + 12) = 0;
  a1[1] = 0;
  v3 = a1 + 1;
  a1[4] = 0;
  v4 = a1 + 4;
  GameRoutine_604020(a1 + 11);
  a1[26] = -1;
  GameRoutine_604020(a1 + 27);
  a1[42] = -1;
  v30_.v32 = 0;
  v30_.v33 = 0;
  v30_.v30 = 0;
  v30_.v31 = 0;
  *((_BYTE*)a1 + 344) = 1;
  v24_.v28 = &v24_.v24;
  v24_.v24 = GameData_1fc7e20;
  GameRoutine_5fc230((__int64)&v30_.v30);
  if (v24_.v28 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v24_.v28)[6])(v24_.v28,
                                                              &v30_.v30);
  }
  v5 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 11),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v30_.v30);
  a1[26] = GameRoutine_615760(*(_QWORD*)(*v5 + 552), (__int64)(a1 + 11));
  if (v24_.v28 == &v24_.v24) {
    v6 = 4;
  }
  else {
    if (v24_.v28 == nullptr) {
      goto LABEL_8;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v24_.v28)[v6])((__int64)v24_.v28);
LABEL_8:
  v30_.v32 = 0;
  v30_.v33 = 0;
  v30_.v30 = 0;
  v30_.v31 = 0;
  v24_.v24 = GameData_1fc7ea0;
  v24_.v28 = &v24_.v24;
  GameRoutine_5fc230((__int64)&v30_.v30);
  if (v24_.v28 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v24_.v28)[6])(v24_.v28,
                                                              &v30_.v30);
  }
  GameRoutine_604060((__int64)(a1 + 27), (__int64*)(*v5 + 568),
                     (__int64)&v30_.v30);
  a1[42] = GameRoutine_615760(*(_QWORD*)(*v5 + 552), (__int64)(a1 + 27));
  if (v24_.v28 == &v24_.v24) {
    v7 = 4;
    goto LABEL_14;
  }
  if (v24_.v28 != nullptr) {
    v7 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v24_.v28)[v7])((__int64)v24_.v28);
  }
  DecalObject_a91100(v4, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 48);
  v8 = a1[4];
  v9 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
  v10 = a1[5];
  v11 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10);
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  gfx_shader_Archive_CreateShader((void*)(&v24_.v24), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"DoFTemporalFilter", 0x11u);
  v12 = v24_.v24;
  v13 = v24_.v25;
  v14 = a1[3];
  v24_.v24 = nullptr;
  v24_.v25 = 0;
  a1[2] = (__int64)v12;
  a1[3] = v13;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = v24_.v25;
  if (v24_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  GameRoutine_ad5280((__int64*)a1[2]);
  v16 = *a1;
  if ((*(_BYTE*)(*a1 + 16700) & 1) != 0) {
    v17 = *(_QWORD*)(v16 + 16672);
    v18 = *(_DWORD*)(v17 + 24);
    v19 = *(_DWORD*)(v17 + 28);
  }
  else {
    v18 = *(_DWORD*)(v16 + 13304);
    v19 = *(_DWORD*)(v16 + 13308);
  }
  v24_.v24 = (__int64 (**)(void))__PAIR64__(v19, v18);
  *(_DWORD*)&v24_.v27[3] = 0;
  v24_.v25 = 0x100000001LL;
  v24_.v26 = 0;
  *(_DWORD*)v24_.v27 = 10;
  v20 = *(__int64 (****)())(v16 + 360);
  v21 = *(_QWORD*)(v16 + 552);
  v24_.v27[4] = 1;
  v24_.v28 = v20;
  v24_.v29 = *(_QWORD*)(v21 + 16);
  GameRoutine_53c20((void*)(&v30_.v30), (__int64)&v24_.v24);
  v22 = v30_.v30;
  result = *v3;
  v30_.v30 = 0;
  *v3 = v22;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v30_.v30;
    v30_.v30 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)a1 + 344) = 1;
  return result;
}

__int64 TaskDoFTemporalFilter_b7d840(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 11, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 27, *v2 + 568);
  GameRoutine_604050(a1 + 27);
  GameRoutine_604050(a1 + 11);
  v3 = a1[5];
  a1[5] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[4];
  a1[4] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[3];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 TaskDoFTemporalFilter_b7d920(__int64 a1, _QWORD* a2, _QWORD* a3,
                                     __int64* a4, float* a5)
{

#pragma clang fp contract(off)
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned int v31;
  _UNKNOWN** v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned int v37;
  __int64 (*v38)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, _QWORD*,
                 _QWORD);
  __int64 result;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  unsigned int v65;
  struct {
    _QWORD v66[2];
    __int64 v67;
  } v66_;
  struct {
    __int64 v68;
    __int64 v69;
    __int64 v70;
  } v68_;

  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *(_DWORD*)(a1 + 48);
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  *(_DWORD*)(a1 + 48) = v12;
  v13 = *(_QWORD*)(a1 + 8LL * v12 + 32);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = a5[5];
  v16 = (float)*(int*)a5;
  v17 = (float)*((int*)a5 + 1);
  v18 = a5[2] / v16;
  v19 = a5[3] / v17;
  v20 = a5[4] / v16;
  *(float*)(v14 + 8) = v16;
  *(float*)(v14 + 12) = v17;
  *(float*)(v14 + 16) = v18;
  *(float*)(v14 + 20) = v19;
  *(float*)(v14 + 24) = v20;
  *(float*)(v14 + 28) = v15 / v17;
  *(float*)v14 = 0x1.0000000000000p+0f / v16;
  *(float*)(v14 + 4) = 0x1.0000000000000p+0f / v17;
  *(float*)(v14 + 32) = a5[8];
  *(float*)(v14 + 36) = a5[9];
  *(float*)(v14 + 40) = a5[6];
  *(float*)(v14 + 44) = a5[7];
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*((_BYTE*)a5 + 40) == 1) {
    v21 = *a4;
    v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8)),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v21 + 96LL))(v21, v22,
                                                                    v23),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *(unsigned int*)a5,
                               *((unsigned int*)a5 + 1)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *(unsigned int*)a5,
                               *((unsigned int*)a5 + 1)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v24 = *a4;
    v68_.v68 = 0;
    v68_.v69 = 0;
    (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v24 + 144LL))(v24, 0,
                                                                     &v68_.v68),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v25 = *a4;
  if ((*(_BYTE*)(a1 + 344) & 1) != 0) {
    v26 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 32LL))(v26),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 32LL))(v28),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v30 = *(_DWORD*)a5;
    v31 = *((_DWORD*)a5 + 1);
    LODWORD(v68_.v69) = 0;
    HIDWORD(v68_.v69) = v30;
    v68_.v70 = v31 | 0x100000000LL;
    v66_.v66[0] = 0;
    v66_.v66[1] = v68_.v69;
    v66_.v67 = v68_.v70;
    v68_.v68 = 0;
    v32 = GameData_212e870[0];
    (*(void (**)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, _QWORD*,
                 _QWORD))GameData_212e870[0])(v25 + 8, v27, 0, &v68_.v68, v29,
                                              0, v66_.v66, 0),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 32LL))(v33),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v35 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8)),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = *(_DWORD*)a5;
    v37 = *((_DWORD*)a5 + 1);
    LODWORD(v68_.v69) = 0;
    HIDWORD(v68_.v69) = v36;
    v68_.v70 = v37 | 0x100000000LL;
    v66_.v66[0] = 0;
    v66_.v66[1] = v68_.v69;
    v38 = (__int64 (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD,
                       _QWORD*, _QWORD))*v32,
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v66_.v67 = v68_.v70;
    v68_.v68 = 0;
    result = v38(v25 + 8, v34, 0, &v68_.v68, v35, 0, v66_.v66, 0),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(a1 + 344) = 0;
  }
  else {
    ((void (*)(__int64, __int64))*GameData_212e738)(v25 + 8, 49),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_Reset(a4[1]),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_SetCommandList(a4[1], *a4),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v40 = a4[1];
    gxc_NvnStateCache_BindDepthStencilState(v40, GameData_21fdeb8[0]),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindBlendState(v40, GameData_21fdee0),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindPolygonState(v40, GameData_21fdf08),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindMultisampleState(v40, GameData_21fdf14),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_ClearCommandList(a4[1]),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 32LL))(v41),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v42,
                                                                    v43),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *(unsigned int*)a5,
                               *((unsigned int*)a5 + 1)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *(unsigned int*)a5,
                               *((unsigned int*)a5 + 1)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 144LL)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v44 = a1 + 16LL * *(int*)(a1 + 48);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *(_QWORD*)(v44 + 56),
                                *(_QWORD*)(v44 + 64)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v45 = *a4;
    v46 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 40LL))(v46),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v45 + 248LL))(v45, 3, 0, v47, v48,
                                *(unsigned int*)(a1 + 208)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v49 = *a4;
    v50 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 40LL))(
        *(_QWORD*)(a1 + 8)),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v49 + 248LL))(v49, 3, 1, v50, v51,
                                *(unsigned int*)(a1 + 208)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v52 = *a4;
    v53 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 40LL))(v53),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v52 + 248LL))(v52, 3, 2, v54, v55,
                                *(unsigned int*)(a1 + 336)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v56 = *a4;
    v57 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v58 = (*(__int64 (**)(__int64))(*(_QWORD*)v57 + 40LL))(v57),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v56 + 248LL))(v56, 3, 3, v58, v59,
                                *(unsigned int*)(a1 + 336)),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v60 = *a4;
    v61 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v62 = (*(__int64 (**)(__int64))(*(_QWORD*)v61 + 32LL))(v61),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v63 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8)),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v48 = COERCE_AS(__typeof__(v48),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v64 = *(_DWORD*)a5;
    v65 = *((_DWORD*)a5 + 1);
    LODWORD(v68_.v69) = 0;
    HIDWORD(v68_.v69) = v64;
    v68_.v70 = v65 | 0x100000000LL;
    v66_.v66[0] = 0;
    v66_.v66[1] = v68_.v69;
    v66_.v67 = v68_.v70;
    v68_.v68 = 0;
    return ((__int64 (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD,
                         _QWORD*, _QWORD))GameData_2178500)(
        v60 + 8, v62, 0, &v68_.v68, v63, 0, v66_.v66, 0);
  }
  return result;
}

#pragma GCC visibility pop
