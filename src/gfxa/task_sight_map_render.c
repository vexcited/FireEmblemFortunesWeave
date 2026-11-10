#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, __int64, __int64,
                                                   unsigned __int64, __int64,
                                                   __int64, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 DeviceChild_53d60(_QWORD, _QWORD);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_ad5000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e870[6];
extern _UNKNOWN** GameData_212e8b8;
extern __int64 (*GameData_1fc7710[])();
extern __int64 (*GameData_1fc7790[])();
extern __int64 (*GameData_1fc7810[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
_QWORD* gfxa_TaskSightMapRender_Impl_Impl(__int64* a1, __int64 a2);
__int64 TaskSightMapRender_b73720(__int64 a1, _QWORD* a2, __int64 a3,
                                  _QWORD* a4, unsigned int* a5);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a82f50;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a83010;
extern __int128 GameData_1a832a0;
extern __int128 GameData_1a83410;
extern __int128 GameData_1a83420;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
__int64 TaskSightMapRender_b73380(__int64 a1, __int64 a2);

_QWORD* gfxa_TaskSightMapRender_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
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
  long double v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* result;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int16 v66;
  char v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;

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
  a1[9] = 0;
  v3 = a1 + 9;
  GameRoutine_604020(a1 + 16);
  a1[31] = -1;
  GameRoutine_604020(a1 + 32);
  a1[47] = -1;
  GameRoutine_604020(a1 + 48);
  a1[63] = -1;
  a1[64] = 0;
  a1[65] = 0;
  a1[66] = 0;
  a1[67] = 0;
  a1[68] = 0;
  a1[69] = 0;
  a1[71] = 0;
  v73 = 0;
  v74 = 0;
  v71 = 0;
  v72 = 0;
  *((_WORD*)a1 + 280) = 1;
  v68 = &v63;
  *((_DWORD*)a1 + 144) = -1;
  v63 = (__int64)GameData_1fc7710;
  GameRoutine_5fc230(&v71);
  if (v68 != nullptr) {
    (*(void (**)(__int64*, __int64*))(*v68 + 48))(v68, &v71);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 16, *game_g_frame_clock_ptr[0] + 568, &v71);
  a1[31] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 16);
  if (v68 == &v63) {
    v5 = 32;
  }
  else {
    if (v68 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v68 + v5))((__int64)v68);
LABEL_8:
  v73 = 0;
  v74 = 0;
  v71 = 0;
  v72 = 0;
  v63 = (__int64)GameData_1fc7790;
  v68 = &v63;
  GameRoutine_5fc230(&v71);
  if (v68 != nullptr) {
    (*(void (**)(__int64*, __int64*))(*v68 + 48))(v68, &v71);
  }
  GameRoutine_604060(a1 + 32, *v4 + 568, &v71);
  a1[47] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 32);
  if (v68 == &v63) {
    v6 = 32;
  }
  else {
    if (v68 == nullptr) {
      goto LABEL_15;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v68 + v6))((__int64)v68);
LABEL_15:
  v73 = 0;
  v74 = 0;
  v71 = 0;
  v72 = 0;
  v63 = (__int64)GameData_1fc7810;
  v68 = &v63;
  GameRoutine_5fc230(&v71);
  if (v68 != nullptr) {
    (*(void (**)(__int64*, __int64*))(*v68 + 48))(v68, &v71);
  }
  GameRoutine_604060(a1 + 48, *v4 + 568, &v71);
  a1[63] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 48);
  if (v68 == &v63) {
    v7 = 32;
    goto LABEL_21;
  }
  if (v68 != nullptr) {
    v7 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v68 + v7))((__int64)v68);
  }
  DecalObject_a91100(v3, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 120);
  gfx_shader_Archive_CreateShader((void*)(&v63), *(_QWORD*)(*a1 + 13408),
                                  (__int64)"filter", 6u,
                                  (__int64)"SightMapFilter", 0xEu);
  v8 = v63;
  v9 = v64;
  v10 = a1[2];
  v63 = 0;
  v64 = 0;
  a1[1] = v8;
  a1[2] = v9;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v64;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = GameRoutine_ad5000(a1[1], "pass", 4, 0);
  GameRoutine_ad5280(v12);
  gfx_shader_Archive_CreateShader((void*)(&v63), *(_QWORD*)(*a1 + 13408),
                                  (__int64)"filter", 6u,
                                  (__int64)"SightMapFilter", 0xEu);
  v13 = v63;
  v14 = v64;
  v15 = a1[4];
  v63 = 0;
  v64 = 0;
  a1[3] = v13;
  a1[4] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v64;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = GameRoutine_ad5000(a1[3], "pass", 4, 1);
  GameRoutine_ad5280(v17);
  gfx_shader_Archive_CreateShader((void*)(&v63), *(_QWORD*)(*a1 + 13408),
                                  (__int64)"filter", 6u,
                                  (__int64)"SightMapFilter", 0xEu);
  v18 = v63;
  v19 = v64;
  v20 = a1[6];
  v63 = 0;
  v64 = 0;
  a1[5] = v18;
  a1[6] = v19;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = v64;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  v22 = GameRoutine_ad5000(a1[5], "pass", 4, 2);
  GameRoutine_ad5280(v22);
  gfx_shader_Archive_CreateShader((void*)(&v63), *(_QWORD*)(*a1 + 13408),
                                  (__int64)"filter", 6u,
                                  (__int64)"SightMapFilter", 0xEu);
  v23 = v63;
  v24 = v64;
  v25 = a1[8];
  v63 = 0;
  v64 = 0;
  a1[7] = v23;
  a1[8] = v24;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = v64;
  if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = GameRoutine_ad5000(a1[7], "pass", 4, 3);
  GameRoutine_ad5280(v27);
  v67 = 0;
  v63 = 0x2000000020LL;
  v64 = 0x100000001LL;
  v66 = 1;
  v65 = 0x100000000LL;
  v28 = *(_QWORD*)(*a1 + 552);
  v68 = *(__int64**)(*a1 + 360);
  v69 = *(_QWORD*)(v28 + 16);
  v29 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       144, 16, 0);
  DeviceChild_53d60(v30, &v63);
  v31 = a1[64];
  a1[64] = v30;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v32 = fw_memory_HeapManager_Allocate(*v29, 144, 16, 0);
  DeviceChild_53d60(v32, &v63);
  v33 = a1[65];
  a1[65] = v32;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  v34 = fw_memory_HeapManager_Allocate(*v29, 144, 16, 0);
  DeviceChild_53d60(v34, &v63);
  v35 = a1[67];
  a1[67] = v34;
  if (v35 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
  }
  v36 = fw_memory_HeapManager_Allocate(*v29, 144, 16, 0);
  DeviceChild_53d60(v36, &v63);
  v37 = a1[66];
  a1[66] = v36;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  v38 = *v29;
  v63 = 0x4000000040LL;
  v39 = fw_memory_HeapManager_Allocate(v38, 144, 16, 0);
  DeviceChild_53d60(v39, &v63);
  v40 = a1[68];
  a1[68] = v39;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  v41 = *a1;
  v42 = *v29;
  LODWORD(v71) = 0;
  v43 = *(_QWORD*)(v41 + 312);
  v72 = 1024;
  v73 = v43;
  v44 = (__int64*)fw_memory_HeapManager_Allocate(v42, 24, 16, 0);
  v46 = (__int64*)a1[69];
  *v44 = 0;
  v44[1] = 0;
  v44[2] = 0;
  a1[69] = (__int64)v44;
  if (v46 != nullptr) {
    v47 = v46[1];
    v46[1] = 0;
    if (v47 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
    }
    v48 = *v46;
    *v46 = 0;
    if (v48 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
    }
    v49 = 128;
    if (*(_QWORD*)(*v29 + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*v29 + v49, v45);
    v50 = (__int64*)a1[69];
  }
  else {
    v50 = v44;
  }
  GameRoutine_53bd0((void*)(&v70), &v71);
  v51 = v70;
  v70 = 0;
  v52 = *v50;
  *v50 = v51;
  if (v52 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 8LL))(v52);
    v53 = v70;
    v70 = 0;
    if (v53 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
    }
  }
  GameRoutine_53bd0((void*)(&v70), &v71);
  v54 = v70;
  v55 = v50[1];
  v70 = 0;
  v50[1] = v54;
  if (v55 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 8LL))(v55);
    v56 = v70;
    v70 = 0;
    if (v56 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 8LL))(v56);
    }
  }
  v57 = *(_QWORD*)(a1[69] + 8LL * *(int*)(a1[69] + 16));
  v58 = (*(__int64 (**)(__int64))(*(_QWORD*)v57 + 56LL))(v57);
  memset(v58, 0, 1024, v59, v60, v61);
  (*(void (**)(__int64))(*(_QWORD*)v57 + 64LL))(v57);
  result = X8CALL_X0(
      _QWORD*,
      GameRoutine_b34420((void*)((__int64)&v63), *(_QWORD*)(*a1 + 13424),
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"Cmn_Btl_SightMapNoise", 21, 0));
  a1[71] = v63;
  *((_DWORD*)a1 + 144) = v64;
  return result;
}

__int64 TaskSightMapRender_b73380(__int64 a1, __int64 a2)
{
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  int8x16_t v22;
  int8x16_t v23;
  __int64 v24;
  int v25;
  bool v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  unsigned __int32 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  _QWORD v51[8];
  float32x4x4_t v52;

  v4 = vaddq_f32(*(float32x4_t*)(a2 + 48),
                 COERCE_AS(float32x4_t, GameData_1a832a0));
  v5 = vsubq_f32(v4, vaddq_f32(v4, COERCE_AS(float32x4_t, GameData_1a82fa0)));
  v6 = vnegq_f32(v4);
  v7 = vmulq_f32(v5, v5);
  LANES128(v7).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
          .n64_u64[0];
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  v8 = vrsqrteq_f32(v7);
  v9 = vmulq_f32(v8, vrsqrtsq_f32(v8, vmulq_f32(v7, v8)));
  v10 = vbicq_s8(
      vmulq_f32(v5, vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v7, v9)))),
      vceqzq_f32(v7));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v14 = vmlsq_f32(vmulq_f32(v11, v12), v9, v13);
  v15 = vmulq_f32(v14, v14);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  v16 = vrsqrteq_f32(v15);
  v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v15, v16)));
  v18 = vbicq_s8(
      vmulq_f32(v14, vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v15, v17)))),
      vceqzq_f32(v15));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v7).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v20 = vmlsq_f32(vmulq_f32(v9, v19), v7, v12);
  v21 = vmulq_f32(v18, v6);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  v22 = vmulq_f32(v20, v6);
  v23 = vmulq_f32(v10, v6);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  v52.val[0] = vmlaq_n_f32(
      vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83010),
                              LANES128(v18).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83410),
                  LANES128(v20).n128_f32[0]),
      COERCE_AS(float32x4_t, GameData_1a83420), LANES128(v10).n128_f32[0]);
  v52.val[1] = vmlaq_lane_f32(
      vmlaq_lane_f32(
          vmulq_lane_f32(COERCE_AS(float32x4_t, GameData_1a83010),
                         COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83410),
          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83420),
      COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]), 1);
  v52.val[2] = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmulq_laneq_f32(COERCE_AS(float32x4_t, GameData_1a83010), v18, 2),
          COERCE_AS(float32x4_t, GameData_1a83410), v20, 2),
      COERCE_AS(float32x4_t, GameData_1a83420), v10, 2);
  v52.val[3] = vaddq_f32(
      vmlaq_lane_f32(
          vmlaq_lane_f32(
              vmulq_lane_f32(
                  COERCE_AS(float32x4_t, GameData_1a83010),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])),
                  1),
              COERCE_AS(float32x4_t, GameData_1a83410),
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])),
              1),
          COERCE_AS(float32x4_t, GameData_1a83420),
          vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])),
          1),
      COERCE_AS(float32x4_t, GameData_1a82f50));
  vst4q_f32((float*)v51, v52);
  v24 = *(_QWORD*)(a1 + 552);
  v25 = *(_DWORD*)(v24 + 16);
  v26 = v25 < -1;
  v27 = ((_BYTE)v25 + 1) & 1;
  if (v26) {
    v27 = -v27;
  }
  *(_DWORD*)(v24 + 16) = v27;
  v28 = *(_QWORD*)(*(_QWORD*)(a1 + 552) +
                   8LL * *(int*)(*(_QWORD*)(a1 + 552) + 16LL));
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 56LL))(v28);
  memcpy(v29, a2 + 100, 1024);
  (*(void (**)(__int64))(*(_QWORD*)v28 + 64LL))(v28);
  v30 = *(_DWORD*)(a1 + 88);
  v26 = v30 < -1;
  v31 = ((_BYTE)v30 + 1) & 1;
  if (v26) {
    v31 = -v31;
  }
  *(_DWORD*)(a1 + 88) = v31;
  v32 = *(_QWORD*)(a1 + 8LL * v31 + 72);
  v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 56LL))(v32);
  v34 = v51[1];
  v36 = *(_DWORD*)(a2 + 88);
  v35 = *(_DWORD*)(a2 + 92);
  v37 = v33;
  v38 = *(_DWORD*)(a2 + 84);
  *(_QWORD*)v33 = v51[0];
  *(_QWORD*)(v33 + 8) = v34;
  v39 = v51[2];
  v40 = v51[3];
  *(_DWORD*)(v33 + 64) = v35;
  *(_DWORD*)(v33 + 68) = v35;
  *(_DWORD*)(v33 + 72) = v38;
  *(_DWORD*)(v33 + 76) = v36;
  *(_QWORD*)(v33 + 16) = v39;
  *(_QWORD*)(v33 + 24) = v40;
  v41 = v51[7];
  *(_QWORD*)(v33 + 48) = v51[6];
  *(_QWORD*)(v33 + 56) = v41;
  v42 = v51[5];
  *(_QWORD*)(v33 + 32) = v51[4];
  *(_QWORD*)(v33 + 40) = v42;
  v43 = *(int8x16_t*)(a2 + 64);
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)a1 + 13240LL) - 3) <= 3) {
    v44 = vmulq_f32(v43, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v44).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    v45 = vmulq_f32(v43, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v45).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
            .n64_u64[0];
    v43 = vmulq_f32(v43, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v43).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_u64[0];
    v46 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_u32[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v43).n128_u32[2] = v46;
  }
  v47 = *(_DWORD*)(a2 + 80);
  *(_QWORD*)(v33 + 80) = LANES128(v43).n128_u64[0];
  *(_DWORD*)(v33 + 88) = LANES128(v43).n128_u32[2];
  *(_DWORD*)(v33 + 92) = v47;
  *(_DWORD*)(v33 + 96) = *(_DWORD*)(a2 + 96);
  *(_DWORD*)(v33 + 100) = *(_DWORD*)(a2 + 1124);
  *(_DWORD*)(v33 + 104) = *(_DWORD*)(a2 + 1128);
  *(_DWORD*)(v33 + 108) = *(_DWORD*)(a2 + 1148);
  v48 = *(_QWORD*)(*(_QWORD*)a1 + 256LL);
  v49 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16LL))(
      *(_QWORD*)(a2 + 8));
  (*(void (**)(__int64))(*(_QWORD*)v49 + 40LL))(v49);
  *(_QWORD*)(v37 + 112) =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(v48 + 8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 64LL))(v32);
}

__int64 TaskSightMapRender_b73720(__int64 a1, _QWORD* a2, __int64 a3,
                                  _QWORD* a4, unsigned int* a5)
{
  __int64 v8;
  unsigned int (**v9)(__int64);
  _UNKNOWN** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (**v15)(__int64);
  int v16;
  unsigned int (*v17)(__int64);
  int v18;
  unsigned int (*v19)(__int64);
  unsigned int v20;
  void (*v21)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, _QWORD*,
              _QWORD);
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _UNKNOWN** v27;
  __int64 v28;
  void (**v29)(__int64, __int64);
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 (**v34)(void);
  __int64 (**v35)(__int64);
  int v36;
  __int64 (*v37)(__int64);
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  _QWORD** v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 (*v58)(void);
  __int64 v59;
  int v60;
  __int64 (*v61)(__int64);
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned int v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned int v100;
  _QWORD* v101;
  __int64 v104;
  struct {
    _QWORD v106[2];
    __int64 v107;
  } v106_;
  struct {
    __int64 v108;
    __int64 v109;
    __int64 v110;
  } v108_;

  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v8, GameData_21fdeb8[0]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v8, GameData_21fdee0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v8, GameData_21fdf08),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v8, GameData_21fdf14),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (unsigned int (**)(__int64))GameData_212e780,
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = GameData_212e870[0];
  if (*((_BYTE*)a2 + 1152) == 1) {
    v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 528) + 40LL))(
        *(_QWORD*)(a1 + 528)),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 520) + 40LL))(
        *(_QWORD*)(a1 + 520)),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LODWORD(v108_.v109) = 0;
    v108_.v108 = 0;
    v13 = *a4;
    v14 = v12;
    v15 = (__int64 (**)(__int64))GameData_212e778[0],
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = (*(__int64 (**)(__int64))GameData_212e778[0])(v11),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = *v9;
    HIDWORD(v108_.v109) = v16;
    v108_.v110 = v17(v11) | 0x100000000LL,
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v106_.v106[0] = 0;
    v106_.v106[1] = v108_.v109;
    v106_.v107 = v108_.v110;
    v18 = (*v15)(v14);
    v19 = *v9;
    HIDWORD(v106_.v106[1]) = v18;
    v20 = v19(v14),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v21 = (void (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD,
                    _QWORD*, _QWORD))*v10,
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LODWORD(v106_.v107) = v20;
    v21(v13 + 8, v11, 0, &v108_.v108, v14, 0, v106_.v106, 0),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v22 = *a4;
  v23 = *(_QWORD*)(*(_QWORD*)(a1 + 552) +
                   8LL * *(int*)(*(_QWORD*)(a1 + 552) + 16LL));
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *(_QWORD*)(a1 + 512);
  v108_.v110 = 0x100000020LL;
  v108_.v108 = 0;
  v108_.v109 = 0x2000000000LL;
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = GameData_212e8b8;
  ((void (*)(__int64, __int64, __int64, _QWORD, __int64*,
             _QWORD))*GameData_212e8b8)(v22 + 8, v24, v26, 0, &v108_.v108, 0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 560) == 1) {
    v28 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 520) + 40LL))(
        *(_QWORD*)(a1 + 520)),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ((void (*)(__int64, __int64, __int64, _QWORD, __int64*, _QWORD))*v27)(
        v22 + 8, v24, v28, 0, &v108_.v108, 0),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(a1 + 560) = 0;
  }
  v29 = (void (**)(__int64, __int64))GameData_212e738,
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 16),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 520) + 40LL))(
      *(_QWORD*)(a1 + 520)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 536) + 40LL))(
      *(_QWORD*)(a1 + 536)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v104 = v22;
  LODWORD(v108_.v109) = 0;
  v32 = *a4;
  v33 = v31;
  v108_.v108 = 0;
  v34 = (__int64 (**)(void))GameData_212e778[0],
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HIDWORD(v108_.v109) = (*(__int64 (**)(__int64))GameData_212e778[0])(v30),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = (__int64 (**)(__int64))GameData_212e780,
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v108_.v110 =
      ((unsigned int (*)(__int64))*GameData_212e780)(v30) | 0x100000000LL,
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v106_.v106[0] = v108_.v108;
  v106_.v106[1] = v108_.v109;
  v106_.v107 = v108_.v110;
  v36 = ((__int64 (*)(__int64))*v34)(v33),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = *v35;
  HIDWORD(v106_.v106[1]) = v36;
  LODWORD(v106_.v107) = v37(v33),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, _QWORD*,
               _QWORD))GameData_212e870[0])(v32 + 8, v30, 0, &v108_.v108, v33,
                                            0, v106_.v106, 0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v29)(*a4 + 8LL, 16);
  if (*((_BYTE*)a2 + 1144) != 0) {
    v38 = (_QWORD*)(a1 + 528);
  }
  else {
    v38 = (_QWORD*)(a1 + 520);
  }
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v38 + 32LL))(*v38),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v39, v40),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 520) + 32LL))(
      *(_QWORD*)(a1 + 520)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = ((__int64 (*)(__int64))*v34)(v41),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 520) + 32LL))(
      *(_QWORD*)(a1 + 520)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = (*v35)(v43);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v42, v44),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v42, v44),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v45 = *a4;
  v46 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 512) + 40LL))(
      *(_QWORD*)(a1 + 512)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v45 + 248LL))(v45, 3, 0, v46, v47, *(unsigned int*)(a1 + 504)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = *a4;
  v49 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 536) + 40LL))(
      *(_QWORD*)(a1 + 536)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v48 + 248LL))(v48, 3, 1, v49, v50, *(unsigned int*)(a1 + 504)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = a1 + 96;
  v52 = (_QWORD*)(a1 + 96 + 16LL * *(int*)(a1 + 88));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *v52, v52[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53 = 8;
  if (*((_BYTE*)a2 + 1144) != 0) {
    v53 = 24;
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + v53) + 144LL)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*((_BYTE*)a2 + 1144) != 0) {
    v54 = (_QWORD**)(a1 + 528);
  }
  else {
    v54 = (_QWORD**)(a1 + 520);
  }
  v55 = *v54;
  v56 = 40;
  if (*((_BYTE*)a2 + 1144) != 0) {
    v56 = 32;
  }
  v57 = (*(__int64 (**)(__int64))(*v55 + v56))((__int64)v55),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = *v34;
  v59 = v57;
  LODWORD(v108_.v109) = 0;
  v108_.v108 = 0;
  v60 = v58(),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *v35;
  HIDWORD(v108_.v109) = v60;
  v108_.v110 = (unsigned int)v61(v59) | 0x100000000LL,
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v62 = *(_QWORD*)(a1 + 544);
  v106_.v106[0] = v108_.v108;
  v106_.v106[1] = v108_.v109;
  v106_.v107 = v108_.v110;
  v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 40LL))(v62),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HIDWORD(v106_.v106[1]) = ((__int64 (*)(__int64))*v34)(v63),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v64 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 544) + 40LL))(
      *(_QWORD*)(a1 + 544)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v106_.v107) = (*v35)(v64);
  v65 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 544) + 40LL))(
      *(_QWORD*)(a1 + 544)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, _QWORD*,
               _QWORD))GameData_212e870[0])(v104 + 8, v59, 0, &v108_.v108, v65,
                                            0, v106_.v106, 0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v29)(*a4 + 8LL, 49);
  v66 = (_QWORD*)a3;
  v67 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16LL))(
      *(_QWORD*)(a3 + 8)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v68 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 32LL))(v67),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v68, v69),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v70 = a5;
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *v70, v70[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v71 = *a4;
  v108_.v108 = 0;
  v108_.v109 = 0;
  (*(void (**)(__int64, _QWORD, __int64*))(*(_QWORD*)v71 + 144LL))(v71, 0,
                                                                   &v108_.v108),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v72 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v73 = (*(__int64 (**)(__int64))(*(_QWORD*)v72 + 40LL))(v72),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 3, 0, v73, v74, *(unsigned int*)(a1 + 504)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v75 = *a4;
  v76 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 544) + 40LL))(
      *(_QWORD*)(a1 + 544)),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v75 + 248LL))(v75, 3, 2, v76, v77, *(unsigned int*)(a1 + 376)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 3, 4, *(_QWORD*)(a1 + 568),
                              *(_QWORD*)(a1 + 576), *(unsigned int*)(a1 + 248)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v78 = *a4;
  v79 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v80 = v79 + 16LL * *(int*)(v79 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v78 + 224LL))(v78, 3, 0, *(_QWORD*)(v80 + 24),
                              *(_QWORD*)(v80 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v81 = *a4;
  v82 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v83 = v82 + 16LL * *(int*)(v82 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v81 + 224LL))(v81, 3, 1, *(_QWORD*)(v83 + 24),
                              *(_QWORD*)(v83 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v84 = (_QWORD*)(v51 + 16LL * *(int*)(a1 + 88));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *v84, v84[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 40) + 144LL)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v29)(*a4 + 8LL, 49);
  v85 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v66 + 16LL))(*v66),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v86 = (*(__int64 (**)(__int64))(*(_QWORD*)v85 + 32LL))(v85),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v86, v87),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *v70, v70[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *v70, v70[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v88 = *a4;
  v89 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v90 = (*(__int64 (**)(__int64))(*(_QWORD*)v89 + 40LL))(v89),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v88 + 248LL))(v88, 3, 0, v90, v91, *(unsigned int*)(a1 + 248)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = *a4;
  v93 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v66[1] + 16LL))(v66[1]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v94 = (*(__int64 (**)(__int64))(*(_QWORD*)v93 + 40LL))(v93),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v87 = COERCE_AS(__typeof__(v87),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v95 = COERCE_AS(__typeof__(v95),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v92 + 248LL))(v92, 3, 1, v94, v95, *(unsigned int*)(a1 + 248)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v96 = a2[2];
  if (v96 != 0) {
    v97 = *a4;
    v98 = (*(__int64 (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v99 = (*(__int64 (**)(__int64))(*(_QWORD*)v98 + 40LL))(v98),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v50 = COERCE_AS(__typeof__(v50),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v87 = COERCE_AS(__typeof__(v87),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v95 = COERCE_AS(__typeof__(v95),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v97 + 248LL))(v97, 3, 3, v99, v100,
                                *(unsigned int*)(a1 + 504)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v50 = COERCE_AS(__typeof__(v50),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v87 = COERCE_AS(__typeof__(v87),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v95 = COERCE_AS(__typeof__(v95),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v101 = (_QWORD*)(v51 + 16LL * *(int*)(a1 + 88));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *v101, v101[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 56) + 144LL)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v50 = COERCE_AS(__typeof__(v50),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v87 = COERCE_AS(__typeof__(v87),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v95 = COERCE_AS(__typeof__(v95),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
