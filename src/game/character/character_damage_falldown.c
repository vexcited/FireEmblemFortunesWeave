#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterDamageFalldown_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterDamageFalldown_Destructor(_QWORD* a1);
__int64 CharacterDamageFalldown_DeletingDestructor(_QWORD* a1);
extern __int128 GameData_1a83610;
long double
game_character_CharacterDamageFalldown_OnEnable_lambda0_Invoke(__int64 a1);
__int64
game_character_CharacterDamageFalldown_OnEnable_lambda1_Invoke(__int64 result);
__attribute__((swiftcall)) void game_character_1116460(PSEUDO_X8, __int128*,
                                                       __int64, float*, _DWORD*,
                                                       unsigned __int64, int,
                                                       float);
__int64 Signal_d30a60(int*, const char*, __int64, __int64);
__int64 game_109d2e0(__int64 result, __int64, const char*, __int64, int);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_20077d8[])();
extern __int64 (*GameData_2011148[])();
extern __int64 (*GameData_20111c8[])();
extern __int64 (*GameData_2011248[])();
float powf(float, float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_character_CharacterDamageFalldown_OnEnable(__int64 a1);
__n128 game_character_CharacterDamageFalldown_OnEnable_lambda2_Invoke(
    __int64 a1, __n128 result, __int64 a3, __int64* a4);

__int64 game_character_CharacterDamageFalldown_OnEnable(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15[3];

  v1 = *(_QWORD*)(a1 + 32);
  if (v1 == 0 || *(_QWORD*)(v1 + 8) == -1) {
    v3 = 0;
  }
  else {
    v3 = *(_QWORD*)(a1 + 40);
  }
  v4 = *(int**)(v3 + 320);
  v13_.v13[0] = GameData_2011148;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  strcpy((char*)v15, "\"Signal_ClothBlend");
  Signal_d30a60(v4, (const char*)v15 + 1, 17, (__int64)v13_.v13);
  if ((v15[0] & 1) != 0 && v15[2] != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v15[2]);
  }
  if (v13_.v14 == v13_.v13) {
    v6 = 32;
    goto LABEL_14;
  }
  if (v13_.v14 != nullptr) {
    v6 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v13_.v14 + v6))((__int64)v13_.v14);
  }
  v7 = *(int**)(v3 + 320);
  v13_.v13[0] = GameData_20111c8;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  strcpy((char*)v15, "$Signal_ClothCancel");
  Signal_d30a60(v7, (const char*)v15 + 1, 18, (__int64)v13_.v13);
  if ((v15[0] & 1) != 0 && v15[2] != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v15[2]);
  }
  if (v13_.v14 == v13_.v13) {
    v9 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_25;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v9))((__int64)v13_.v14);
LABEL_25:
  v10 = *(_QWORD*)(v3 + 408);
  v13_.v13[0] = GameData_2011248;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  game_109d2e0(a1 + 88, v10, "Loc_C_Trans", (__int64)v13_.v13, 2);
  result = (__int64)v13_.v14;
  if (v13_.v14 == v13_.v13) {
    v12 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(__int64))(*v13_.v14 + v12))((__int64)v13_.v14);
}

__int64 CharacterDamageFalldown_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;

  *a1 = game_character_CharacterDamageFalldown_vtable;
  GameRoutine_109d5e0(a1 + 11);
  v2 = a1[14];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterDamageFalldown_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_character_CharacterDamageFalldown_vtable;
  GameRoutine_109d5e0(a1 + 11);
  v2 = a1[14];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

long double

game_character_CharacterDamageFalldown_OnEnable_lambda0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  long double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(v1 + 40);
    v5 = v3 == -1 || v4 == 0;
    if (!v5 && *(_DWORD*)(*(_QWORD*)(v4 + 72) + 120LL) == -1193575788) {
      *(_DWORD*)(*(_QWORD*)(v4 + 104) + 56LL) |= 0x400u;
      *(_DWORD*)(v1 + 80) = 1;
      *(_OWORD*)(v1 + 64) = GameData_1a83610;
      return *(long double*)&GameData_1a83610;
    }
  }
  return result;
}

__int64

game_character_CharacterDamageFalldown_OnEnable_lambda1_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;

  v1 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(v1 + 80) == 1) {
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 8);
      v4 = *(_QWORD*)(v1 + 40);
      v5 = v3 == -1 || v4 == 0;
      if (!v5 && *(_DWORD*)(*(_QWORD*)(v4 + 72) + 120LL) == -1193575788) {
        *(_DWORD*)(*(_QWORD*)(v4 + 104) + 56LL) &= ~0x400u;
        *(_DWORD*)(v1 + 80) = 2;
      }
    }
  }
  return result;
}

__n128 game_character_CharacterDamageFalldown_OnEnable_lambda2_Invoke(
    __int64 a1, __n128 result, __int64 a3, __int64* a4)
{
  float32x4_t* v4;
  unsigned __int32 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  float32x4_t v11;
  float v12;
  float v13;
  __int64* v14;
  float v15;
  float32x4_t v16;
  float32x4_t v17;
  __int64 v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  unsigned __int64 v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64* v41;
  int v42;
  __int64 v43;
  float32x4_t v44;
  struct {
    __int64 v45;
    char gap24_[8];
    float32x4_t v46;
  } v45_;
  struct {
    _QWORD v47[4];
    _QWORD* v48;
  } v47_;
  int8x16x2_t v49;
  int8x16x2_t v50;
  int8x16x2_t v51;

  v4 = *(float32x4_t**)(a1 + 8);
  if (LANES128(v4[1]).n128_u8[0] != 1) {
    return result;
  }
  v5 = LANES128(v4[5]).n128_u32[0];
  if (v5 == 0) {
    return result;
  }
  v6 = LANES128(v4[2]).n128_u64[0];
  if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
    v7 = 0;
  }
  else {
    v7 = LANES128(v4[2]).n128_u64[1];
  }
  if (*(_DWORD*)(*(_QWORD*)(v7 + 72) + 120LL) != -1193575788) {
    LANES128(v4[5]).n128_u32[0] = 0;
    return result;
  }
  if (v5 != 1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v41 = a4;
      v42 = __cxa_guard_acquire((__int64)&GameData_21a6190);
      a4 = v41;
      if (v42 != 0) {
        v43 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v43;
        __cxa_guard_release((__int64)&GameData_21a6190);
        a4 = v41;
      }
    }
    v11 = COERCE_AS(float32x4_t, GameData_21a6180);
    goto LABEL_18;
  }
  v8 = LANES128(*(v4)).n128_u64[1];
  v9 = a4;
  v47_.v47[0] = GameData_20077d8;
  v47_.v47[1] = v7;
  v47_.v48 = v47_.v47;
  v47_.v47[2] = 3;
  game_character_1116460((void*)(&v45_.v45), (__int128*)(v8 + 304),
                         (__int64)v47_.v47, nullptr, nullptr, 0, 0,
                         0x1.0000000000000p+0f);
  if (v47_.v48 == v47_.v47) {
    v10 = 32;
    goto LABEL_16;
  }
  if (v47_.v48 != nullptr) {
    v10 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v47_.v48 + v10))((__int64)v47_.v48);
  }
  v11 = v45_.v46;
  a4 = v9;
LABEL_18:
  LANES128(v11).n128_u32[3] = 0;
  v12 =
      (float)(*(float*)(*(_QWORD*)(v7 + 304) + 16LL) * 0x1.0aef000000000p+4f) *
      0x1.0624de0000000p-10f;
  v13 = 0x0.0p+0f;
  if (v12 > 0x0.0p+0f) {
    v14 = a4;
    v44 = v11;
    v15 = powf(0x1.99999a0000000p-1f, v12 * 0x1.df851e0000000p+4f);
    v11 = v44;
    a4 = v14;
    v13 = 0x1.0000000000000p+0f - v15;
  }
  v16 = vmlaq_n_f32(v4[4], vsubq_f32(v11, v4[4]), v13);
  LANES128(v4[4]).n128_u64[0] = LANES128(v16).n128_u64[0];
  v17 = v4[4];
  LANES128(v17).n128_u64[1] = LANES128(v16).n128_u32[2];
  v4[4] = v17;
  *(_DWORD*)a4[2] &= 0x33FFFFFFu;
  v18 = *a4;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v38 = v18;
    v39 = __cxa_guard_acquire((__int64)&GameData_21a6190);
    v18 = v38;
    if (v39 != 0) {
      v40 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v40;
      __cxa_guard_release((__int64)&GameData_21a6190);
      v18 = v38;
    }
  }
  v19 = v4[4];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v23 = LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  v24 = vmulq_f32(v20, v21);
  v25 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v19);
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v19).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v21).n128_u64[1] = v23;
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
          .n64_u64[0];
  v26 = vmlsq_f32(v24, v21, v22);
  LANES128(v22).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v22).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
  v27 = vaddq_f32(v25, v19);
  v28 = vsqrtq_f32(vaddq_f32(v27, v27));
  v29 = vdivq_f32(v26, v28);
  LANES128(v29).n128_u32[3] = LANES128_OF(vmulq_f32(v28, v22)).n128_u32[3];
  LANES128(v28).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v28).n128_u64[1] = 0x3400000034000000LL;
  v30 = vbslq_s8(vcgeq_f32(v28, v27), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v29);
  v31 = v30;
  LANES128(v31).n128_u32[3] = 0;
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v32).n128_u64[1] = LANES128(v27).n128_u64[1];
  LANES128(v33).n128_u64[1] = LANES128(v28).n128_u64[1];
  v34 = vmulq_f32(v27, v27);
  v50.val[1] = vmulq_f32(v28, v28);
  v35 = vmulq_f32(v32, v31);
  v36 = vmulq_laneq_f32(v33, v30, 3);
  v37 = vaddq_f32(v35, v35);
  v49.val[1] = vaddq_f32(v36, v36);
  v51.val[0] = vaddq_f32(v49.val[1], v37);
  v51.val[1] = vsubq_f32(v37, v49.val[1]);
  v50.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v50.val[1], v50.val[1]), vaddq_f32(v34, v34)));
  LANES128(v49.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v51, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v50.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v51, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v49.val[1]).n128_i8[8] =
      vqtbl2_s8(v51, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v50.val[1]).n128_i8[8] =
      vqtbl2_s8(v51, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v49.val[0] = v50.val[0];
  LANES128(v51.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v49, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v51.val[0]).n128_i8[8] =
      vqtbl2_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v51.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v49, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v51.val[1]).n128_i8[8] =
      vqtbl2_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(result).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v50, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  LANES128(v49.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
          .n64_u64[0];
  v50.val[1] = *(int8x16_t*)(v18 + 32);
  LANES128(result).n128_u64[1] = LANES128(v49.val[1]).n128_u64[0];
  v49.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v51.val[0], COERCE_FLOAT(*(_OWORD*)(v18 + 16))),
          v51.val[1], *(float32x2_t*)(v18 + 16), 1),
      result, *(float32x4_t*)(v18 + 16), 2);
  *(float32x4_t*)v18 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v51.val[0], COERCE_FLOAT(*(_OWORD*)v18)),
                     v51.val[1], *(float32x2_t*)v18, 1),
      result, *(float32x4_t*)v18, 2);
  *(int8x16_t*)(v18 + 16) = v49.val[1];
  *(float32x4_t*)(v18 + 32) = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v51.val[0], LANES128(v50.val[1]).n128_f32[0]), v51.val[1],
          COERCE_AS(float32x2_t, LANES128(v50.val[1]).n128_u64[0]), 1),
      result, v50.val[1], 2);
  return result;
}

#pragma GCC visibility pop
