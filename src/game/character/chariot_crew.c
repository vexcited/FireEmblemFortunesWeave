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

#pragma GCC visibility pop
