#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212e3b0[2];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e4e0;
extern __int64 (*gfx_render_BillboardModel_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* game_g_frame_clock_ptr[3];
__int64
BillboardModel_Destructor_alt1(__int64 a1) __asm__("BillboardModel_Destructor");
__int64 BillboardModel_Unknown11(__int64 a1, __int64* a2);
__int64 BillboardModel_Unknown12(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned int a5, unsigned int a6);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_a67640(_QWORD, _QWORD);
__int64 GameRoutine_a677e0(_QWORD, _QWORD);
__int64 GameRoutine_a67980(_QWORD, _QWORD);
__int64 GameRoutine_adc200(__int64, __int64, __int64, __int64, unsigned __int64,
                           __int64, unsigned __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fd17c0[])();
extern __int64 (*GameData_1fd1810[])();
extern __int64 fw_memory_g_heap_manager;
__int64 gfx_render_BillboardModel_BillboardModel(__int64 a1, __int64 a2,
                                                 unsigned __int64 a3,
                                                 __int64 a4,
                                                 unsigned __int64 a5,
                                                 __int64* a6);
void gfx_render_BillboardModel_BillboardModel_lambda0_Invoke(__int64 a1,
                                                             _WORD* a2);
__int64 Material_add560(__int64 result);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
__int64 BillboardModel_Unknown2(__int64 a1);
_QWORD* GameRoutine_604020_alt1(_QWORD* result) __asm__("GameRoutine_604020");
__int64* GameRoutine_a67640_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_a67640");
__int64* GameRoutine_a677e0_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_a677e0");
__int64* GameRoutine_a67980_alt1(_QWORD*,
                                 const char*) __asm__("GameRoutine_a67980");
__int64 GameRoutine_5fc230_alt1(__int64 result) __asm__("GameRoutine_5fc230");
__int64 GameRoutine_604060_alt1(__int64, __int64*,
                                __int64) __asm__("GameRoutine_604060");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_615760(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 GameRoutine_6040f0_alt1(__int64) __asm__("GameRoutine_6040f0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void BillboardModel_Destructor(__int64 a1);

__int64 gfx_render_BillboardModel_BillboardModel(__int64 a1, __int64 a2,
                                                 unsigned __int64 a3,
                                                 __int64 a4,
                                                 unsigned __int64 a5,
                                                 __int64* a6)
{
  __int64* v6;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  struct {
    __int64 v32[4];
    __int64* v33;
  } v32_;
  struct {
    __int64 v34;
    unsigned __int64 v35;
    __int64 v36;
    __int64 v37;
  } v34_;

  *(_QWORD*)(a1 + 128) = 0;
  v6 = (__int64*)(a1 + 128);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 36) = 0;
  *(_BYTE*)(a1 + 32) = 1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 216) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)a1 = gfx_render_BillboardModel_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  GameRoutine_604020_alt1((_QWORD*)(a1 + 248));
  v6[30] = -1;
  v14 = *a6;
  v13 = a6[1];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 112) = v14;
  *(_QWORD*)(a1 + 120) = v13;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = game_g_frame_clock_ptr[0];
  v34_.v34 = a4;
  v34_.v35 = a5;
  v32_.v32[0] = a2;
  v32_.v32[1] = a3;
  v17 = *game_g_frame_clock_ptr[0];
  v18 = GameRoutine_a67640_alt1(*(_QWORD**)(*game_g_frame_clock_ptr[0] + 13416),
                                v32_.v32);
  if (v18 != nullptr &&
      (v19 = v18,
       (v20 = GameRoutine_a677e0_alt1(v18 + 5, &v34_.v34)) != nullptr) &&
      (v21 = (__int64)(v20 + 5),
       (v22 = GameRoutine_a67980_alt1(v19 + 10, (const char*)(v20[5] + 32))) !=
           nullptr)) {
    v23 = v22;
    v24 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       440, 16, 0);
    v25 = v34_.v34;
    v26 = v34_.v35;
    v27 = v24 + 3;
    v28 = v24;
    v24[1] = 0;
    v24[2] = 0;
    *v24 = GameData_1fd17c0;
    GameRoutine_adc200((__int64)(v24 + 3), (__int64)(v23 + 5), 0, a2, a3, v25,
                       v26, v21);
  }
  else {
    v27 = nullptr;
    v28 = nullptr;
  }
  v29 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 184) = v27;
  *(_QWORD*)(a1 + 192) = v28;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak_alt1(v29);
  }
  DecalObject_a91100(v6, *(_QWORD*)(v17 + 312),
                     *(_QWORD*)(*(_QWORD*)(v17 + 552) + 16LL), 48);
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v34 = 0;
  v34_.v35 = 0;
  v32_.v32[0] = (__int64)GameData_1fd1810;
  v32_.v33 = v32_.v32;
  GameRoutine_5fc230_alt1((__int64)&v34_.v34);
  if (v32_.v33 != nullptr) {
    (*(void (**)(__int64*, __int64*))(*v32_.v33 + 48))(v32_.v33, &v34_.v34);
  }
  GameRoutine_604060_alt1((__int64)(v6 + 15), (__int64*)(*v16 + 568),
                          (__int64)&v34_.v34);
  *(_QWORD*)(a1 + 368) =
      game_615760(*(_QWORD*)(*v16 + 552), (__int64)(v6 + 15));
  result = (__int64)v32_.v33;
  if (v32_.v33 == v32_.v32) {
    v31 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      return result;
    }
    v31 = 40;
  }
  return (*(__int64 (**)(__int64*))(*v32_.v33 + v31))(v32_.v33);
}

void BillboardModel_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = gfx_render_BillboardModel_vtable;
  GameRoutine_6040f0_alt1(a1 + 248);
  GameRoutine_604050(a1 + 248);
  v2 = *(_QWORD*)(a1 + 192);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 136) = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 120);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v6 != 0) {
    *(_QWORD*)(a1 + 88) = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
}

__int64 BillboardModel_Unknown2(__int64 a1)
{
  int v1;
  bool v3;
  int v4;
  __int64 v5;
  int32x4_t* v6;
  __int64 v7;
  int32x4_t v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int8x16_t v29;
  int8x16_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  unsigned __int64 v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  float32x4_t v46;
  int32x4_t v47;
  float32x4_t v48;
  int32x4_t v49;
  float32x4_t v50;
  int32x4_t v51;
  float32x4_t v52;
  int32x4_t v53;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v1 = *(_DWORD*)(a1 + 144);
  v3 = v1 < -1;
  v4 = ((_BYTE)v1 + 1) & 1;
  if (v3) {
    v4 = -v4;
  }
  *(_DWORD*)(a1 + 144) = v4;
  v5 = *(_QWORD*)(a1 + 8LL * v4 + 128);
  v6 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v7 = *(_QWORD*)(a1 + 120);
  v8 = *(int32x4_t*)GameData_212c2a0;
  v9 = *((int32x4_t*)GameData_212c2a0 + 1);
  v11 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v10 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
  if (v7 != 0) {
    v46 = *(float32x4_t*)GameData_212c2a0;
    v48 = *((float32x4_t*)GameData_212c2a0 + 1);
    v50 = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    v52 =
        *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
    v12 = std___1___shared_weak_count_lock(v7),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v12 != 0) {
      v13 = v12;
      v14 = *(_QWORD*)(a1 + 112);
      if (v14 != 0) {
        *(long double*)&v15 =
            ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v14 + 16LL))(v14),
               v16 = COERCE_AS(__typeof__(v16),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
               v18 = COERCE_AS(__typeof__(v18),
                               PSEUDO_REGISTER(__n128, "v2", "=w"));
        LANES128(v17).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v17).n128_i8[8] =
            vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v19).n128_i8[8] =
            vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v20 = vmulq_f32(vmulq_f32(v15, v17), v19);
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v19).n128_i8[8] =
            vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v21).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v21).n128_i8[8] =
            vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v22 = vsubq_f32(v20, vmulq_f32(vmulq_f32(v15, v19), v21));
        LANES128(v22).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v22, v22)).n128_u64[0];
        v23 = vaddq_f32(
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 0),
            vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1));
        v24 = vrecpeq_f32(v23);
        v25 = vmulq_f32(v24, vrecpsq_f32(v24, v23));
        v26 = vmulq_f32(v25, vrecpsq_f32(v25, v23));
        v27 = vzip1q_s32(v15, v18);
        v28 = vzip1q_s32(v16, COERCE_AS(int32x4_t, 0));
        v29 = vzip2q_s32(v27, v28);
        v30 = vzip1q_s32(vzip2q_s32(v15, v18),
                         vzip2q_s32(v16, COERCE_AS(int32x4_t, 0)));
        v31 = vzip1q_s32(v27, v28);
        LANES128(v32).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v18).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v33).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v34).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v32).n128_i8[8] =
            vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v35 =
            LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v33).n128_i8[8] =
            vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v30).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v17).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v18).n128_u64[1] = v35;
        *(int8x8_t*)&LANES128(v34).n128_i8[8] =
            vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v17).n128_i8[8] =
            vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v30).n128_i8[8] =
            vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v36 = vmlsq_f32(vmulq_f32(v32, v18), v30, v33);
        v37 = vmulq_f32(v30, v34);
        v38 = vmlsq_f32(vmulq_f32(v33, v17), v18, v34);
        v39 = vceqzq_f32(v23);
        v40 = vbicq_s8(vmulq_f32(v26, v36), v39);
        v41 = vbicq_s8(vmulq_f32(v26, v38), v39);
        v42 = vbicq_s8(vmulq_f32(v26, vmlsq_f32(v37, v17, v32)), v39);
        v8 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v40, LANES128(v46).n128_f32[0]), v41,
                           COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                           1),
            v42, v46, 2);
        v9 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v40, LANES128(v48).n128_f32[0]), v41,
                           COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                           1),
            v42, v48, 2);
        v11 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v40, LANES128(v50).n128_f32[0]), v41,
                           COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                           1),
            v42, v50, 2);
        v10 = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v40, LANES128(v52).n128_f32[0]), v41,
                    COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]), 1),
                v42, v52, 2),
            COERCE_AS(float32x4_t, 0));
      }
      else {
        v10 = v52;
        v9 = v48;
        v11 = v50;
        v8 = v46;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v53 = v10;
        v49 = v9;
        v51 = v11;
        v47 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w"));
        std___1___shared_weak_count___release_weak(v13),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v8 = v47;
        v9 = v49;
        v11 = v51;
        v10 = v53;
      }
    }
    else {
      v10 = v52;
      v9 = v48;
      v11 = v50;
      v8 = v46;
    }
  }
  v43 = vzip1q_s32(v8, v11);
  v44 = vzip1q_s32(v9, v10);
  *v6 = vzip1q_s32(v43, v44);
  v6[1] = vzip2q_s32(v43, v44);
  v6[2] = vzip1q_s32(vzip2q_s32(v8, v11), vzip2q_s32(v9, v10));
  (*(void (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w"));
  return Material_add560(*(_QWORD*)(a1 + 184));
}

__int64 BillboardModel_Unknown11(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v5;
  _UNKNOWN** v6;
  _UNKNOWN** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)(__int64, __int64, __int64, __int64, __int64);
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *a2;
  v5 = game_g_frame_clock_ptr[0];
  v6 = GameData_212e4d8[0];
  v7 = GameData_212e4e0;
  if (*(_BYTE*)(a1 + 216) == 1) {
    v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 256) + 8LL,
        *(unsigned int*)(a1 + 208), *(unsigned int*)(a1 + 368));
    ((void (*)(__int64, __int64, _QWORD, __int64))*v7)(v2 + 8, 1, 0, v8);
  }
  if (*(_BYTE*)(a1 + 240) == 1) {
    v9 = ((__int64 (*)(__int64, _QWORD, _QWORD))*v6)(
        *(_QWORD*)(*v5 + 256) + 8LL, *(unsigned int*)(a1 + 232),
        *(unsigned int*)(a1 + 368));
    ((void (*)(__int64, __int64, __int64, __int64))*v7)(v2 + 8, 1, 1, v9);
  }
  v10 = a1 + 16LL * *(int*)(a1 + 144);
  v11 = *(_QWORD*)(v10 + 152);
  v12 = *(_QWORD*)(v10 + 160);
  v13 = (__int64 (**)(__int64, __int64, __int64, __int64,
                      __int64))GameData_212e3b0[0];
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64))GameData_212e3b0[0])(
      v2 + 8, 0, 4, v11, v12);
  result = (*v13)(v2 + 8, 1, 4, v11, v12);
  v15 = *(_QWORD*)(a1 + 184);
  v16 = *(_QWORD*)(v15 + 8);
  if (v16 != 0 && *(_QWORD*)(v16 + 152) != *(_QWORD*)(v16 + 144)) {
    v17 = *a2;
    v18 = v15 + 16LL * *(int*)(v15 + 144);
    v19 = *(_QWORD*)(v18 + 152);
    v20 = *(_QWORD*)(v18 + 160);
    (*v13)(v17 + 8, 0, 5, v19, v20);
    return (*v13)(v17 + 8, 1, 5, v19, v20);
  }
  return result;
}

__int64 BillboardModel_Unknown12(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned int a5, unsigned int a6)
{
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 2);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 280LL))(*a2, 4, 0, a5, a6);
}

void gfx_render_BillboardModel_BillboardModel_lambda0_Invoke(__int64 a1,
                                                             _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

#pragma GCC visibility pop
