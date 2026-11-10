#include "decomp/pseudo_helpers.h"

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
__int64 ChariotCrew_DeletingDestructor(__int64 a1);
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
long double game_character_ChariotCrew_ChariotCrew_closure_Invoke(__int64 a1,
                                                                  __int64 a2,
                                                                  _DWORD** a3);

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

__int64 ChariotCrew_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

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
  v4 = GameRoutine_10bc1a0(a1);
  if (v4 != 0) {
    CharacterBuilder_1083bf0(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

long double game_character_ChariotCrew_ChariotCrew_closure_Invoke(__int64 a1,
                                                                  __int64 a2,
                                                                  _DWORD** a3)
{
  float32x4_t* v3;
  _OWORD* v4;
  __int64 v5;
  __int64 v6;
  __int128 v7;
  int8x16_t v8;
  __int64 v9;
  long double v10;
  float v11;
  float v12;
  float v13;
  float v14;
  int v15;
  float v16;
  unsigned __int8 v17;
  float v18;
  int8x16_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  __int64 v26;
  __int64 v27;
  long double v28;
  float32x4_t v29;
  __int128 v30;
  struct {
    int8x16_t v31;
    __int64 v32;
    char gap72_[8];
    int8x16_t* v33;
  } v31_;

  v3 = *(float32x4_t**)(a1 + 8);
  *a3[2] &= 0x33FFFFFFu;
  v4 = *a3;
  v30 = *((_OWORD*)*a3 + 3);
  if (*GameData_212d448[0] != 0) {
    v5 = *(_QWORD*)(*GameData_212d448[0] + 8);
    if (v5 != 0 && (*(_BYTE*)(v5 + 114) & 1) != 0) {
      v6 = GameRoutine_109f1e0(LANES128(*(v3)).n128_i64[1], "Jnt_C_Hip");
      if (v6 != 0) {
        *(_QWORD*)&v7 = *(_QWORD*)(v6 + 48);
        *((_QWORD*)&v7 + 1) = (unsigned int)*(_QWORD*)(v6 + 56);
        v30 = v7;
      }
    }
  }
  LANES128(v31_.v31).n128_u64[0] = (unsigned __int64)GameData_20077d8;
  LANES128(v31_.v31).n128_u64[1] = GameRoutine_10bc1a0(v3);
  v31_.v33 = &v31_.v31;
  v31_.v32 = 1;
  GameRoutine_1116460(&v30, &v31_.v31, 0, 0, 0, 0);
  if (v31_.v33 == &v31_.v31) {
    v9 = 32;
    goto LABEL_10;
  }
  if (v31_.v33 != nullptr) {
    v9 = 40;
  LABEL_10:
    (*(void (**)(void))(LANES128(*(v31_.v33)).n128_u64[0] + v9))();
  }
  LODWORD(v27) = v4[3];
  *(_QWORD*)&v10 = v27;
  LANES128(v8).n128_u32[0] = HIDWORD(v27);
  *((_QWORD*)&v10 + 1) = (unsigned int)*((_QWORD*)v4 + 7);
  v28 = v10;
  if (LANES128(v3[12]).n128_u8[4] != 1) {
    goto LABEL_29;
  }
  v11 = LANES128(v3[3]).n128_f32[0];
  v12 = 0.0;
  if (v11 > 0.0) {
    v12 = 1.0 - exp2f(v11 * -0x1.df851e0000000p+4);
    LANES128(v8).n128_u32[0] = DWORD1(v28);
  }
  if (((v13 = LANES128(v3[12]).n128_f32[0], LANES128(v8).n128_f32[0] < 0.0) ||
       v13 > 0.0) &&
      (LANES128(v8).n128_f32[0] > 0.0 || v13 < 0.0)) {
    v14 = v13 + (float)(v12 * (float)(LANES128(v8).n128_f32[0] - v13));
    v15 = (v12 > 1.0) ^ (LANES128(v8).n128_f32[0] <= v13);
    if (LANES128(v8).n128_f32[0] >= v14) {
      v16 = LANES128(v8).n128_f32[0];
    }
    else {
      v16 = v13 + (float)(v12 * (float)(LANES128(v8).n128_f32[0] - v13));
    }
    if (v14 >= LANES128(v8).n128_f32[0]) {
      v14 = LANES128(v8).n128_f32[0];
    }
    if (v15 == 0) {
      v16 = v14;
    }
    if (v12 != 1.0) {
      LANES128(v8).n128_f32[0] = v16;
    }
  }
  else {
    LANES128(v8).n128_f32[0] = (float)(v13 * (float)(1.0 - v12)) +
                               (float)(v12 * LANES128(v8).n128_f32[0]);
  }
  DWORD1(v28) = LANES128(v8).n128_u32[0];
  if ((LANES128(v3[12]).n128_u8[4] & 1) == 0) {
  LABEL_29:
    LANES128(v3[12]).n128_u8[4] = 1;
  }
  v17 = LANES128(v3[6]).n128_u8[4];
  LANES128(v3[12]).n128_u32[0] = LANES128(v8).n128_u32[0];
  if ((v17 & 1) != 0) {
    v18 = LANES128(v3[3]).n128_f32[0];
    LANES128(v8).n128_u64[0] = 0;
    if (v18 > 0.0) {
      LANES128(v8).n128_f32[0] = 1.0 - exp2f(v18 * -0x1.df851e0000000p+4);
    }
    GameRoutine_109da60((void*)(&v31_.v31), v3 + 11, &v29, v8);
    v19 = v31_.v31;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
      v26 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v26;
      __cxa_guard_release(&GameData_21a6190);
    }
    v20 = vaddq_f32(v29, COERCE_AS(float32x4_t, GameData_21a6180));
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
    v19 = vbicq_s8(
        vmulq_f32(v20, vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v21, v23)))),
        vceqzq_f32(v21));
  }
  LANES128(v3[11]).n128_u64[0] = LANES128(v19).n128_u64[0];
  v24 = v3[11];
  LANES128(v24).n128_u64[1] = LANES128(v19).n128_u32[2];
  v3[11] = v24;
  *((long double*)v4 + 3) = v28;
  return v28;
}

#pragma GCC visibility pop
