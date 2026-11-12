#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
float CmdBtlCameraCutBase_e82b40(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a830f0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_1a838e0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
extern __int64 (*game_cmdbtl_CmdBtlCameraCutBase_vtable)();
extern __int64* GameData_212e460[2];
extern __int64 GameData_212e438;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_b3aee0(float32x4_t*);
void CmdBtlCameraCutBase_e822b0(__int64 a1);
float CmdBtlCameraCutBase_e82510(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void CmdBtlCameraCutBase_e82a10(PSEUDO_X8 x8_,
                                                           __int64 unused_int0,
                                                           __n128** a1,
                                                           char a2);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

void CmdBtlCameraCutBase_e822b0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
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
  __int64 v29;
  __int64 v30;

  *(_QWORD*)(a1 + 8) = 0;
  v1 = a1 + 8;
  *(_QWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)a1 = &game_cmdbtl_CmdBtlCameraCutBase_vtable;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      432, 16, 0);
  v4 = (__int64*)GameData_212c2a0;
  v5 = (__int64*)GameData_212c2b0;
  v6 = GameData_212e460[0];
  *(_QWORD*)(v3 + 112) = 1065353216;
  *(_QWORD*)(v3 + 120) = 0x100000000LL;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 144) = 0x4110000041800000LL;
  *(_DWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v3 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v3 + 168) = 1092616192;
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4);
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4 + 8);
  v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4);
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v4);
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v5);
  v11 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 408) = 0;
  *(_QWORD*)(v3 + 416) = 0;
  *(_QWORD*)v3 = v6 + 2;
  *(_QWORD*)(v3 + 8) = 0;
  v13 = *v4;
  v14 = v4[1];
  *(_QWORD*)(v3 + 224) = v7;
  *(_QWORD*)(v3 + 232) = v8;
  v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4);
  v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(v3 + 240) = v9;
  *(_QWORD*)(v3 + 248) = v10;
  v17 = *v5;
  *(_QWORD*)(v3 + 192) = v13;
  *(_QWORD*)(v3 + 200) = v14;
  v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5);
  v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v5);
  *(_QWORD*)(v3 + 208) = v16;
  *(_QWORD*)(v3 + 216) = v15;
  v20 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5);
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 280) = v21;
  v23 = *v5;
  v24 = v5[1];
  *(_QWORD*)(v3 + 320) = v17;
  *(_QWORD*)(v3 + 328) = v20;
  *(_QWORD*)(v3 + 256) = v23;
  *(_QWORD*)(v3 + 264) = v24;
  v25 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5);
  *(_QWORD*)(v3 + 312) = v18;
  v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 16);
  v28 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 352) = v12;
  *(_QWORD*)(v3 + 360) = v25;
  *(_QWORD*)(v3 + 288) = v26;
  *(_QWORD*)(v3 + 296) = v11;
  *(_QWORD*)(v3 + 336) = v22;
  *(_QWORD*)(v3 + 344) = v27;
  *(_QWORD*)(v3 + 368) = v19;
  *(_QWORD*)(v3 + 376) = v28;
  *(_BYTE*)(v3 + 164) = 1;
  *(_OWORD*)(v3 + 48) = GameData_1a83090;
  *(_OWORD*)(v3 + 64) = (__typeof__(*(_OWORD*)(v3 + 64))){0};
  *(_OWORD*)(v3 + 80) = GameData_1a83610;
  *(_OWORD*)(v3 + 96) = (__typeof__(*(_OWORD*)(v3 + 96))){0};
  v29 = GameData_212e438;
  v30 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(v3 + 384) = 0;
  *(_QWORD*)(v3 + 392) = 0;
  *(_QWORD*)(v3 + 156) = 0x469C40003DCCCCCDLL;
  *(_BYTE*)(v3 + 165) = 1;
  *(_QWORD*)(v3 + 424) = 1023;
  *(_QWORD*)(v3 + 392) = 1023;
  *(_QWORD*)(v3 + 400) = 0;
  *(_QWORD*)(a1 + 16) = v3;
  *(_QWORD*)(v3 + 32) = v29 + 16;
  *(_QWORD*)v1 = v3 + 32;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt1(v30);
  }
  *(_DWORD*)(*(_QWORD*)v1 + 8LL) = 2;
  *(_DWORD*)(*(_QWORD*)v1 + 92LL) = 0;
}

float CmdBtlCameraCutBase_e82510(__int64 a1, __int64 a2)
{
  float32x4_t v4;
  float32x4_t v5;
  int8x16_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x8_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float v44;
  float32x4_t v45;
  float v46;
  int v47;
  __int64 v48;
  float result;
  __int64 v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  float v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  struct {
    _BYTE v62[4];
    float v63;
    char gap152_[72];
    char v64;
  } v62_;
  struct {
    int8x16_t v65;
    char gap256_[24];
    __int64 v66;
  } v65_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  math_Quat_FromYawPitchRoll(
      (void*)(&v65_.v65),
      (float)(COERCE_FLOAT(*(_OWORD*)(a2 + 16)) + 0x1.6800000000000p+7f) *
          0x1.1df46a0000000p-6f,
      vmuls_lane_f32(0x1.1df46a0000000p-6f, *(float32x2_t*)(a2 + 16), 1),
      vmuls_lane_f32(0x1.1df46a0000000p-6f, *(float32x4_t*)(a2 + 16), 2)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a61b0) != 0) {
    v50 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v50;
    __cxa_guard_release_alt1((__int64)&GameData_21a61b0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v4 = COERCE_AS(float32x4_t, GameData_1a829d0);
  LANES128(v5).n128_u64[0] = GameData_21a61a0;
  v6 = vmulq_f32(v65_.v65, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
  v9 = COERCE_AS(float32x4_t, GameData_1a83800);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v5).n128_u64[1] = LANES128(v10).n128_u64[0];
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v11 = vmulq_f32(v5, v8);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v12 = vmlaq_f32(vmulq_f32(v6, v7), COERCE_AS(float32x4_t, GameData_1a83800),
                  v11);
  PSEUDO_LOW_LANE64(v13, n64_u64, 0xB0A090807060504LL);
  *(int32x2_t*)&LANES128(v5).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v6).n128_u64[0]), 1);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v14).n128_u64[0];
  LANES128(v14).n128_u64[1] = GameData_21a61a0;
  v15 = vmulq_f32(v14, v5);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] = LANES128(v65_.v65).n128_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65_.v65, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v6).n128_u64[1] = LANES128(v6).n128_u64[0];
  v16 = vmlsq_f32(vmlaq_f32(v12, COERCE_AS(float32x4_t, GameData_1a83800), v15),
                  v14, v10);
  v17 = vmulq_f32(v6, v16);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65_.v65, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v5).n128_u64[1] = LANES128(v6).n128_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v18 = vmlaq_f32(v17, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v5, v10));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65_.v65, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v14).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 1);
  LANES128(v6).n128_u64[1] = LANES128(v10).n128_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v65_.v65).n128_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v20 = vmlsq_f32(vmlaq_f32(v18, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v10, v14)),
                  v19, v6);
  LANES128(v20).n128_u32[3] = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v65_.v66 = 0xB0A090807060504LL;
    v55 = v20;
    v51 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v20 = v55;
    v4 = COERCE_AS(float32x4_t, GameData_1a829d0);
    v9 = COERCE_AS(float32x4_t, GameData_1a83800);
    PSEUDO_LOW_LANE64(v13, n64_u64, v65_.v66);
    if (v51 != 0) {
      v52 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v52;
      __cxa_guard_release_alt1((__int64)&GameData_21a6190),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v20 = v55;
      v4 = COERCE_AS(float32x4_t, GameData_1a829d0);
      v9 = COERCE_AS(float32x4_t, GameData_1a83800);
      PSEUDO_LOW_LANE64(v13, n64_u64, v65_.v66);
    }
  }
  v21 = vmulq_f32(v20, v20);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v21).n128_u64[0];
  v22 = vrsqrteq_f32(v21);
  v23 = vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v21, v22)));
  v24 = vbicq_s8(
      vmulq_f32(vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v21, v23))), v20),
      vceqzq_f32(v21));
  v59 = v24;
  if (fabsf(*(float*)(a2 + 24)) >= 0x1.0624de0000000p-10f) {
    v26 = vmulq_f32(v65_.v65, v4);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v29).n128_u64[0] = GameData_21a6180;
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
    LANES128(v29).n128_u64[1] = LANES128(v28).n128_u64[0];
    *(int8x8_t*)&LANES128(v30).n128_i8[8] =
        vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v32 = vmlaq_f32(vmulq_f32(v26, v27), v9, vmulq_f32(v29, v30));
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180), v13))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v31).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]), 1);
    LANES128(v28).n128_u64[1] = LANES128(v30).n128_u64[0];
    LANES128(v30).n128_u64[1] = GameData_21a6180;
    LANES128(v33).n128_u64[0] = LANES64_OF(vqtbl1_s8(v26, v13)).n64_u64[0];
    *(int8x8_t*)&LANES128(v33).n128_i8[8] =
        vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v65_.v65, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v34 = vmlsq_f32(vmlaq_f32(v32, v9, vmulq_f32(v30, v31)), v33, v28);
    LANES128(v33).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v65_.v65, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] = LANES128(v65_.v65).n128_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
    LANES128(v28).n128_u64[1] = LANES128(v26).n128_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v36).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]), 1);
    v37 = vmlaq_f32(vmulq_f32(v33, v34), v9, vmulq_f32(v28, v35));
    LANES128(v35).n128_u64[0] = LANES64_OF(vqtbl1_s8(v65_.v65, v13)).n64_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v35).n128_u64[0];
    LANES128(v35).n128_u64[1] = LANES128(v65_.v65).n128_u64[0];
    v38 = vmlaq_f32(v37, v9, vmulq_f32(v35, v36));
    LANES128(v36).n128_u64[0] = LANES64_OF(vqtbl1_s8(v34, v13)).n64_u64[0];
    *(int8x8_t*)&LANES128(v36).n128_i8[8] =
        vqtbl1_s8(v34, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v39 = vmlsq_f32(v38, v36, v26);
    LANES128(v39).n128_u32[3] = 0;
    v40 = vmulq_f32(v39, v39);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    LANES128(v40).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
    v41 = vrsqrteq_f32(v40);
    v42 = vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v40, v41)));
    v25 = vbicq_s8(
        vmulq_f32(vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v40, v42))), v39),
        vceqzq_f32(v40));
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v53 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v24 = v59;
      if (v53 != 0) {
        v54 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v54;
        __cxa_guard_release_alt1((__int64)&GameData_21a6190),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        v24 = v59;
      }
    }
    v25 = COERCE_AS(int8x16_t, GameData_21a6180);
    LANES128(v25).n128_u32[3] = 0;
  }
  v58 = v25;
  v57 = *(float*)(a2 + 32);
  v56 = vsubq_f32(*(float32x4_t*)a2, vmulq_n_f32(v24, v57));
  v60 = vaddq_f32(v56, COERCE_AS(float32x4_t, GameData_1a830f0));
  v61 = vaddq_f32(v56, COERCE_AS(float32x4_t, GameData_1a838e0));
  collision_670c60((void*)((__int64)v62_.v62), &v61, &v60, 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v62_.v64 == 1) {
    v43 = v56;
    v44 = v62_.v63 + 0x1.0000000000000p-1f;
    if ((float)(v62_.v63 + 0x1.0000000000000p-1f) < LANES128(v56).n128_f32[1]) {
      v44 = LANES128(v56).n128_f32[1];
    }
    LANES128(v43).n128_f32[1] = v44;
    v45 = v43;
  }
  else {
    v45 = v56;
  }
  v46 = 0x1.0000000000000p+1f;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = 0;
  if (v57 >= 0x1.0000000000000p+1f) {
    v46 = v57;
  }
  *(float32x4_t*)(*(_QWORD*)(a1 + 8) + 16LL) = v45;
  *(float32x4_t*)(*(_QWORD*)(a1 + 8) + 32LL) = vaddq_f32(
      vmulq_n_f32(v59, v46), *(float32x4_t*)(*(_QWORD*)(a1 + 8) + 16LL));
  *(int8x16_t*)(*(_QWORD*)(a1 + 8) + 48LL) = v58;
  v47 = *(_DWORD*)(a2 + 36);
  v48 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v48 + 92) = 0;
  *(_DWORD*)(v48 + 96) = v47;
  GameRoutine_b3aee0(*(float32x4_t**)(a1 + 8)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  return result;
}

__attribute__((swiftcall)) void CmdBtlCameraCutBase_e82a10(PSEUDO_X8 x8_,
                                                           __int64 unused_int0,
                                                           __n128** a1, char a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __n128 result;
  __n128* v8;
  unsigned __int64 v9;
  __n128* v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = (__int64)a1[1];
  if (v3 != 0) {
    v3 = std___1___shared_weak_count_lock(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v8 = *a1;
      if (*a1 != nullptr) {
        *a3 = 0;
        a3[1] = 0;
        if ((a2 & 1) != 0) {
          v9 = LANES128(v8[13]).n128_u64[0];
          if (v9 != 0) {
            v10 = (__n128*)(*(_QWORD*)(v9 + 8) + 304LL);
          }
          else {
            v10 = v8 + 7;
          }
        }
        else {
          v10 = v8 + 6;
        }
        result = *v10;
        *a3 = LANES128(*(v10)).n128_u64[0];
        v11 = *(_OWORD*)a3;
        *((_QWORD*)&v11 + 1) = LANES128(result).n128_u32[2];
        *(_OWORD*)a3 = v11;
      LABEL_13:
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v12 = v3;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          {
            std___1___shared_weak_count___release_weak_alt1(v12),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            return;
          }
        }
        {
          result;
          return;
        }
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v13 = v3;
    v14 = __cxa_guard_acquire(&GameData_21a6130),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v3 = v13;
    if (v14 != 0) {
      v15 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v15;
      __cxa_guard_release(&GameData_21a6130),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v3 = v13;
    }
  }
  *(_OWORD*)a3 = GameData_21a6120;
  if (v3 != 0) {
    goto LABEL_13;
  }
  {
    result;
    return;
  }
}

float CmdBtlCameraCutBase_e82b40(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  float v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = a2[1];
  v3 = 0.5;
  if (v2 != 0) {
    v5 = std___1___shared_weak_count_lock(v2);
    if (v5 != 0) {
      if (*a2 != 0) {
        v6 = *(_QWORD*)(*a2 + 208LL);
        if (v6 != 0) {
          v7 = *(_QWORD*)(v6 + 392);
          v8 = *(_QWORD*)(v6 + 400);
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v7 != 0) {
            v3 = *(float*)(*(_QWORD*)(v7 + 11792) + 40LL) *
                 (float)(*(float*)(v7 + 32) *
                         (float)(*(float*)(v7 + 40) +
                                 (float)((float)(1.0 - *(float*)(v7 + 40)) *
                                         *(float*)(v6 + 336))));
          }
          if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            v9 = v5;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak();
            v5 = v9;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  return v3;
}

#pragma GCC visibility pop
