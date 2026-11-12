#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083bf0(_QWORD);
__int64 GameRoutine_10bc1a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 (*game_character_ChariotCrew_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ChariotCrew_Destructor(__int64 a1);
__int64 ChariotCrew_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ChariotCrew_DeletingDestructor");
__attribute__((swiftcall)) void
GameRoutine_109da60(PSEUDO_X8, float32x4_t*, float32x4_t*, int8x16_t result);
__int64 GameRoutine_109f1e0(__int64, _BYTE*);
__int64 GameRoutine_1116460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_20077d8[])();
extern __int64* GameData_212d448[9];
float exp2f(float);
long double game_character_ChariotCrew_ChariotCrew_closure_Invoke_alt1(
    __int64 a1, __int64 a2,
    _DWORD**
        a3) __asm__("game_character_ChariotCrew_ChariotCrew_closure_Invoke");
_QWORD* CharacterBuilder_1083bf0_alt1(_QWORD* result) __asm__(
    "CharacterBuilder_1083bf0");
__attribute__((swiftcall)) void
GameRoutine_1116460_alt1(PSEUDO_X8, __int128*, __int64, float*, _DWORD*,
                         unsigned __int64, int,
                         float) __asm__("GameRoutine_1116460");
__int64 GameRoutine_10bc1a0_alt1(__int64) __asm__("GameRoutine_10bc1a0");
__int64 game_109f1e0(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned int* GameHr_109d5e0(unsigned int* result);
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ChariotCrew_DeletingDestructor(__int64 a1);
long double
game_character_ChariotCrew_ChariotCrew_closure_Invoke(__int64 a1, __int64 a2,
                                                      long double** a3);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
__n128 game_character_ChariotCrew_ChariotCrew_closure0_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              int8x16_t** a3);

__int64 ChariotCrew_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  *(_QWORD*)a1 = game_character_ChariotCrew_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 136));
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = &game_character_CharacterDie_Body_vtable;
  result = GameRoutine_10bc1a0(a1);
  if (result != 0) {
    return CharacterBuilder_1083bf0(result);
  }
  return result;
}

void ChariotCrew_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_character_ChariotCrew_vtable;
  GameHr_109d5e0((unsigned int*)(a1 + 136));
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  GameHr_109d5e0((unsigned int*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = &game_character_CharacterDie_Body_vtable;
  v4 = (_QWORD*)GameRoutine_10bc1a0_alt1(a1);
  if (v4 != nullptr) {
    CharacterBuilder_1083bf0_alt1(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

long double

game_character_ChariotCrew_ChariotCrew_closure_Invoke(__int64 a1, __int64 a2,
                                                      long double** a3)
{
  float32x4_t* v3;
  long double* v4;
  __int64 v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  float v9;
  int8x16_t v10;
  __int64 v11;
  __int128 v12;
  int v13;
  long double v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  float v20;
  unsigned __int8 v21;
  unsigned __int8 v22;
  float v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  long double result;
  __int64 v31;
  long double v32;
  float32x4_t v33;
  __int128 v34;
  struct {
    int8x16_t v35;
    __int64 v36;
    char gap72_[8];
    int8x16_t* v37;
  } v35_;

  v3 = *(float32x4_t**)(a1 + 8);
  *(_DWORD*)a3[2] &= 0x33FFFFFFu;
  v4 = *a3;
  v34 = *((_OWORD*)*a3 + 3);
  if (*GameData_212d448[0] != 0) {
    v5 = *(_QWORD*)(*GameData_212d448[0] + 8);
    if (v5 != 0 && (*(_BYTE*)(v5 + 114) & 1) != 0) {
      v6 = game_109f1e0(LANES128(*(v3)).n128_i64[1], "Jnt_C_Hip");
      if (v6 != 0) {
        *(_QWORD*)&v7 = *(_QWORD*)(v6 + 48);
        *((_QWORD*)&v7 + 1) = (unsigned int)*(_QWORD*)(v6 + 56);
        v34 = v7;
      }
    }
  }
  v8 = GameRoutine_10bc1a0_alt1((__int64)v3);
  v9 = LANES128(v3[6]).n128_f32[0];
  LANES128(v35_.v35).n128_u64[0] = (unsigned __int64)GameData_20077d8;
  LANES128(v35_.v35).n128_u64[1] = v8;
  v35_.v37 = &v35_.v35;
  v35_.v36 = 1;
  GameRoutine_1116460_alt1((void*)(&v32), &v34, (__int64)&v35_.v35, nullptr,
                           nullptr, 0, 0, v9);
  if (v35_.v37 == &v35_.v35) {
    v11 = 32;
    goto LABEL_10;
  }
  if (v35_.v37 != nullptr) {
    v11 = 40;
  LABEL_10:
    (*(void (**)(void))(LANES128(*(v35_.v37)).n128_u64[0] + v11))();
  }
  v12 = *((_OWORD*)v4 + 3);
  v13 = LANES128(v3[12]).n128_u8[4];
  LODWORD(v32) = v12;
  *(_QWORD*)&v14 = *(_QWORD*)&v32;
  PSEUDO_LOW_LANE128(v10, n128_u32, DWORD1(v32));
  *((_QWORD*)&v14 + 1) = DWORD2(v12);
  v32 = v14;
  if (v13 != 1) {
    goto LABEL_29;
  }
  v15 = LANES128(v3[3]).n128_f32[0];
  v16 = 0x0.0p+0f;
  if (v15 > 0x0.0p+0f) {
    v16 = 0x1.0000000000000p+0f - exp2f(v15 * -0x1.df851e0000000p+4f);
    PSEUDO_LOW_LANE128(v10, n128_u32, DWORD1(v32));
  }
  if (((v17 = LANES128(v3[12]).n128_f32[0],
        LANES128(v10).n128_f32[0] < 0x0.0p+0f) ||
       v17 > 0x0.0p+0f) &&
      (LANES128(v10).n128_f32[0] > 0x0.0p+0f || v17 < 0x0.0p+0f)) {
    v18 = v17 + (float)(v16 * (float)(LANES128(v10).n128_f32[0] - v17));
    v19 = (v16 > 0x1.0000000000000p+0f) ^ (LANES128(v10).n128_f32[0] <= v17);
    if (LANES128(v10).n128_f32[0] >= v18) {
      v20 = LANES128(v10).n128_f32[0];
    }
    else {
      v20 = v17 + (float)(v16 * (float)(LANES128(v10).n128_f32[0] - v17));
    }
    if (v18 >= LANES128(v10).n128_f32[0]) {
      v18 = LANES128(v10).n128_f32[0];
    }
    if (v19 == 0) {
      v20 = v18;
    }
    if (v16 != 0x1.0000000000000p+0f) {
      PSEUDO_LOW_LANE128(v10, n128_f32, v20);
    }
  }
  else {
    PSEUDO_LOW_LANE128(
        v10, n128_f32,
        (float)(PSEUDO_UNFUSED(v17 * (float)(0x1.0000000000000p+0f - v16))) +
            (float)(v16 * LANES128(v10).n128_f32[0]));
  }
  v21 = LANES128(v3[12]).n128_u8[4];
  DWORD1(v32) = LANES128(v10).n128_u32[0];
  if ((v21 & 1) == 0) {
  LABEL_29:
    LANES128(v3[12]).n128_u8[4] = 1;
  }
  v22 = LANES128(v3[6]).n128_u8[4];
  LANES128(v3[12]).n128_u32[0] = LANES128(v10).n128_u32[0];
  if ((v22 & 1) != 0) {
    v23 = LANES128(v3[3]).n128_f32[0];
    PSEUDO_LOW_LANE128(v10, n128_u64, 0);
    if (v23 > 0x0.0p+0f) {
      PSEUDO_LOW_LANE128(v10, n128_f32,
                         0x1.0000000000000p+0f -
                             exp2f(v23 * -0x1.df851e0000000p+4f));
    }
    GameRoutine_109da60((void*)(&v35_.v35), v3 + 11, &v33, v10);
    v24 = v35_.v35;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6190) != 0) {
      v31 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v31;
      __cxa_guard_release_alt1((__int64)&GameData_21a6190);
    }
    v25 = vaddq_f32(v33, COERCE_AS(float32x4_t, GameData_21a6180));
    v26 = vmulq_f32(v25, v25);
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
    v27 = vrsqrteq_f32(v26);
    v28 = vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(v26, v27)));
    v24 = vbicq_s8(
        vmulq_f32(v25, vmulq_f32(v28, vrsqrtsq_f32(v28, vmulq_f32(v26, v28)))),
        vceqzq_f32(v26));
  }
  LANES128(v3[11]).n128_u64[0] = LANES128(v24).n128_u64[0];
  v29 = v3[11];
  LANES128(v29).n128_u64[1] = LANES128(v24).n128_u32[2];
  result = v32;
  v3[11] = v29;
  v4[3] = result;
  return result;
}

__n128 game_character_ChariotCrew_ChariotCrew_closure0_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              int8x16_t** a3)
{
  __int64 v3;
  float32x4_t* v4;
  int8x16_t v5;
  __int64 v6;
  __int64 v7;
  int8x16_t v8;
  __int64 v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  unsigned __int64 v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  __n128 result;
  int v34;
  __int64 v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  __int128 v41;
  int8x16x2_t v42;
  int8x16x2_t v43;
  int8x16x2_t v44;

  v3 = *(_QWORD*)(a1 + 8);
  LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
  v4 = *a3;
  v5 = (*a3)[3];
  if (*GameData_212d448[0] != 0) {
    v6 = *(_QWORD*)(*GameData_212d448[0] + 8);
    if (v6 != 0 && (*(_BYTE*)(v6 + 114) & 1) != 0) {
      v36 = (*a3)[3];
      v7 = GameRoutine_10bc1a0_alt1(v3);
      v8 = v36;
      v9 = v7;
      *(_QWORD*)&v10 = LANES128(v36).n128_u32[0] | 0x4348000000000000LL;
      *((_QWORD*)&v10 + 1) = LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u32[0];
      v41 = v10;
      LANES128(v8).n128_u32[1] = -1027080192;
      LANES128(v8).n128_u64[1] = *((_QWORD*)&v10 + 1);
      v40 = v8;
      GameRoutine_1085a10((void*)(&v39), v7 + 160, &v41, &v40, 3);
      v5 = v39;
      v11 = *(_QWORD*)(v9 + 392);
      v12 = *(_QWORD*)(v9 + 400);
      v13 = LANES128(v39).n128_f32[1];
      LANES128(v5).n128_u32[3] = 0;
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
        LANES128(v5).n128_f32[1] =
            v13 + (float)(PSEUDO_UNFUSED(*(float*)(v11 + 32) *
                                         0x1.3333340000000p-3f));
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v37 = v5;
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
          v5 = v37;
        }
      }
      else {
        LANES128(v5).n128_f32[1] =
            LANES128(v39).n128_f32[1] +
            (float)(PSEUDO_UNFUSED(*(float*)(v11 + 32) *
                                   0x1.3333340000000p-3f));
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v38 = v5;
    v34 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190);
    v5 = v38;
    if (v34 != 0) {
      v35 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v35;
      __cxa_guard_release_alt1((__int64)&GameData_21a6190);
      v5 = v38;
    }
  }
  v14 = *(int8x16_t*)(v3 + 176);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v18 = LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  v19 = vmulq_f32(v15, v16);
  v20 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v14);
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v14).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v16).n128_u64[1] = v18;
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  v21 = vmlsq_f32(v19, v16, v17);
  LANES128(v17).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v17).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
  v22 = vaddq_f32(v20, v14);
  v23 = vsqrtq_f32(vaddq_f32(v22, v22));
  v24 = vdivq_f32(v21, v23);
  LANES128(v24).n128_u32[3] = LANES128_OF(vmulq_f32(v23, v17)).n128_u32[3];
  LANES128(v23).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v23).n128_u64[1] = 0x3400000034000000LL;
  v25 = vbslq_s8(vcgeq_f32(v23, v22), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v24);
  v26 = v25;
  LANES128(v26).n128_u32[3] = 0;
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0])))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v27).n128_u64[1] = LANES128(v22).n128_u64[1];
  LANES128(v28).n128_u64[1] = LANES128(v23).n128_u64[1];
  v29 = vmulq_f32(v22, v22);
  v43.val[1] = vmulq_f32(v23, v23);
  v30 = vmulq_f32(v27, v26);
  v31 = vmulq_laneq_f32(v28, v25, 3);
  v32 = vaddq_f32(v30, v30);
  v42.val[1] = vaddq_f32(v31, v31);
  v44.val[0] = vaddq_f32(v42.val[1], v32);
  v44.val[1] = vsubq_f32(v32, v42.val[1]);
  v43.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v43.val[1], v43.val[1]), vaddq_f32(v29, v29)));
  LANES128(v42.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v43.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v42.val[1]).n128_i8[8] =
      vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v43.val[1]).n128_i8[8] =
      vqtbl2_s8(v44, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v42.val[0] = v43.val[0];
  LANES128(v44.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v42, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v44.val[0]).n128_i8[8] =
      vqtbl2_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v44.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v42, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v44.val[1]).n128_i8[8] =
      vqtbl2_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(result).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v43, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  LANES128(v42.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
          .n64_u64[0];
  v43.val[1] = v4[2];
  LANES128(result).n128_u64[1] = LANES128(v42.val[1]).n128_u64[0];
  v42.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v44.val[0], COERCE_FLOAT(*(_OWORD*)&v4[1])),
                     v44.val[1],
                     COERCE_AS(float32x2_t, LANES128(v4[1]).n128_u64[0]), 1),
      result, v4[1], 2);
  *v4 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v44.val[0], COERCE_FLOAT(*v4)), v44.val[1],
                     COERCE_AS(float32x2_t, LANES128(*(v4)).n128_u64[0]), 1),
      result, *v4, 2);
  v4[1] = v42.val[1];
  v4[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v44.val[0], LANES128(v43.val[1]).n128_f32[0]), v44.val[1],
          COERCE_AS(float32x2_t, LANES128(v43.val[1]).n128_u64[0]), 1),
      result, v43.val[1], 2);
  v4[3] = v5;
  return result;
}

#pragma GCC visibility pop
