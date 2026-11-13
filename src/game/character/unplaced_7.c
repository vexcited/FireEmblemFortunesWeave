#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64, float);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6180;
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release(__int64);
__attribute__((swiftcall)) void
game_character_1085da0(PSEUDO_X8 x8_, __int64 a1, float32x4_t* a2,
                       int8x16_t* a3, __int64 a4, float a6, double a7);
__attribute__((swiftcall)) void

game_character_1085da0(PSEUDO_X8 x8_, __int64 a1, float32x4_t* a2,
                       int8x16_t* a3, __int64 a4, float a6, double a7)
{

#pragma clang fp contract(off)
  float32x4_t* a5 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v8;
  float32x4_t* v9;
  __int64 v10;
  __int64 v11;
  int32x2_t v13;
  int v14;
  __int64 v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  float32x4_t v27;
  struct {
    float32x4_t v28;
    float32x4_t v29;
    char gap64_[48];
    char v30;
  } v28_;
  float32x4_t v31;
  __int64 v32;

  if (*(_BYTE*)(a1 + 8) == 1) {
    LANES128(v8).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
    {
      __typeof__(a7) z_ = (__typeof__(a7)){0};
      LODWORD(z_) = LANES128(*(a2)).n128_u32[2];
      a7 = z_;
    }
    LANES128(v8).n128_u32[1] = *(_DWORD*)(a1 + 4);
    LANES128(v8).n128_f64[1] = a7;
    *a5 = v8;
    v9 = a5 + 1;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
      v21 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v21;
      __cxa_guard_release((__int64)&GameData_21a6190);
    }
    *v9 = COERCE_AS(float32x4_t, GameData_21a6180);
    return;
  }
  if (a4 != 0) {
    v10 = a4;
  }
  else {
    v10 = *(_QWORD*)(a1 + 24);
  }
  if ((*(_DWORD*)a1 & 0x80000000) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v19 = LANES128(*(a2)).n128_u64[1];
    LANES128(v28_.v28).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
    LANES128(v28_.v28).n128_u64[1] = v19;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v23 = a1;
      v24 = __cxa_guard_acquire((__int64)&GameData_21a6190);
      a1 = v23;
      if (v24 != 0) {
        v25 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v25;
        __cxa_guard_release((__int64)&GameData_21a6190);
        a1 = v23;
      }
    }
    v20 = *(_QWORD*)(a1 + 64);
    LANES128(v27).n128_u64[0] = v10;
    v31 = COERCE_AS(float32x4_t, GameData_21a6180);
    if (v20 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(__int64, float32x4_t*, float32x4_t*, float32x4_t*))(
        *(_QWORD*)v20 + 48LL))(v20, &v28_.v28, &v31, &v27);
    *a5 = v28_.v28;
    v16 = v31;
  LABEL_19:
    a5[1] = v16;
    return;
  }
  v11 = a1;
  collision_6725f0((void*)((__int64)&v28_.v28), a2, a3, v10, a6);
  if ((v28_.v30 & 1) != 0) {
    v27 = v28_.v29;
    v14 = *(_DWORD*)v11;
    v31 = vaddq_f32(vmulq_n_f32(v28_.v29, a6), v28_.v28);
    LANES128(v31).n128_f32[1] = LANES128(v31).n128_f32[1] - a6;
    if (v14 >= 1) {
      v15 = *(_QWORD*)(v11 + 64);
      if (v15 != 0) {
        v32 = v10;
        (*(void (**)(__int64, float32x4_t*, float32x4_t*, __int64*))(
            *(_QWORD*)v15 + 48LL))(v15, &v31, &v27, &v32);
      }
    }
    *a5 = v31;
    v16 = v27;
    goto LABEL_19;
  }
  PSEUDO_LOW_LANE64(v13, n64_u32, -1027080192);
  LANES128(v17).n128_u32[1] = LANES64_OF(vdup_lane_s32(v13, 0)).n64_u32[1];
  LANES128(v17).n128_u32[0] = *(unsigned __int32*)&(*a3);
  LANES128(v17).n128_u64[1] = LANES128_OF(vextq_s8(*a3, *a3, 8u)).n128_u32[0];
  *a5 = v17;
  v18 = a5 + 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
    v22 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v22;
    __cxa_guard_release((__int64)&GameData_21a6190);
  }
  *v18 = COERCE_AS(float32x4_t, GameData_21a6180);
}

#pragma GCC visibility pop
