#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterDie_Unknown5(__int64 a1);
__int64 GameRoutine_10fec60(_QWORD, long double);
__int64 GameRoutine_10ff3b0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterDie_vtable[])();
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__n128
CharacterDie_Destructor_alt1(_QWORD* a1) __asm__("CharacterDie_Destructor");
__int64 CharacterDie_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CharacterDie_DeletingDestructor");
__int64 game_character_CharacterDie_CharacterDie_lambda0_Invoke(__int64 a1,
                                                                long double a2);
_QWORD* CharacterBuilder_1084020(_QWORD* result);
__int64 GameRoutine_10bc1a0(__int64);
double cos(double);
double sin(double);
extern __int128 GameData_1a83610;
extern __int64 (*game_character_CharacterDie_Body_vtable)();
int32x2_t* WallCollisionModule_1105be0(_QWORD*, float);
void CharacterDie_10bb840(__int64 a1, _QWORD* a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 CharacterDie_Destructor(_QWORD* a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterDie_DeletingDestructor(_QWORD* a1);

__int64 CharacterDie_Unknown5(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
  }
  return result;
}

__int64 CharacterDie_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  *a1 = game_character_CharacterDie_vtable;
  v2 = a1[8];
  a1[8] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[7];
  a1[7] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

void CharacterDie_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_character_CharacterDie_vtable;
  v2 = a1[8];
  a1[8] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[7];
  a1[7] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

__int64 game_character_CharacterDie_CharacterDie_lambda0_Invoke(__int64 a1,
                                                                long double a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  __int64 v14;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[7];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  }
  result = v2[8];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  v5 = v2[4];
  if (v5 == 0) {
    return result;
  }
  v6 = v2[5];
  if (*(_QWORD*)(v5 + 8) == -1 || v6 == 0) {
    return result;
  }
  v8 = *(_DWORD*)(v6 + 340);
  if (*(_QWORD*)(v5 + 8) == -1) {
    if ((v8 & 0x20) == 0) {
      return result;
    }
    v6 = 0;
  LABEL_20:
    *(_QWORD*)&a2 = 0;
    return GameRoutine_10fec60(v6, a2);
  }
  if ((v8 & 0x20) != 0) {
    goto LABEL_20;
  }
  result = GameRoutine_10ff3b0(v6);
  if ((result & 1) != 0) {
    v9 = *(_DWORD*)(v6 + 340);
    if ((v9 & 0x800000) == 0) {
      v10 = *(_DWORD*)(*(_QWORD*)(v6 + 72) + 120LL);
      if (v10 > -77626399) {
        v11 = v10 == 1400556095;
        v12 = -77626398;
      }
      else {
        v11 = v10 == -972548316;
        v12 = -93581017;
      }
      if ((v11 || v10 == v12) &&
          (GameData_21ec7b0 == 0 ||
           (v14 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 || (v9 & 1) != 0 ||
           (*(_DWORD*)(v14 + 112) & 0x10000000) == 0)) {
        LODWORD(a2) = 1055846127;
        return GameRoutine_10fec60(v6, a2);
      }
    }
  }
  return result;
}

void CharacterDie_10bb840(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float32x4_t v15;
  __int128 v16;
  float32x4_t v17;
  int8x16_t v18;
  double v19;
  double v20;
  double v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  bool v26;
  int v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 45) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = &game_character_CharacterDie_Body_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_OWORD*)(a1 + 80) = GameData_1a83610;
  v4 = GameRoutine_10bc1a0(a1);
  *(_BYTE*)(a1 + 16) = *(_QWORD*)(v4 + 448) == (_QWORD)a2;
  v5 = *(_QWORD*)(v4 + 392);
  v6 = *(_QWORD*)(v4 + 400);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_DWORD*)(v5 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  else {
    v7 = *(_DWORD*)(v5 + 11784);
  }
  if ((unsigned int)(v7 - 9) <= 0x19) {
    v8 = *(_QWORD*)(v4 + 392);
    v9 = *(_QWORD*)(v4 + 400);
    if (v9 != 0) {
      v10 = (atomic_ullong*)(v9 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v11 = *(float*)(v8 + 32);
      v12 = *(float*)(*(_QWORD*)(v8 + 11792) + 44LL);
      goto LABEL_12;
    }
    v13 = *(float*)(*(_QWORD*)(v8 + 11792) + 44LL);
  LABEL_32:
    *(float*)(a1 + 96) = v13 * *(float*)(v8 + 32);
    if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v13 = 0x1.6666660000000p-1f;
  if (*(_BYTE*)(a1 + 16) != 0) {
    v13 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 96) = v13;
  v8 = *(_QWORD*)(v4 + 392);
  v9 = *(_QWORD*)(v4 + 400);
  if (v9 == 0) {
    goto LABEL_32;
  }
  v10 = (atomic_ullong*)(v9 + 8);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v12 = *(float*)(v8 + 32);
  v11 = *(float*)(a1 + 96);
LABEL_12:
  *(float*)(a1 + 96) = v12 * v11;
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) == 0) {
  LABEL_15:
    CharacterBuilder_1084020((_QWORD*)v4);
  }
LABEL_16:
  v14 = *(_QWORD*)(a1 + 8);
  LANES128(v15).n128_u32[0] = 0;
  LANES128(v15).n128_u32[3] = 0;
  v16 = *(_OWORD*)(*(_QWORD*)(v14 + 736) + 320LL);
  *(unsigned __int64*)((char*)LANES128(v15).n128_u64 + 4) = DWORD1(v16);
  v17 = vsubq_f32(*(float32x4_t*)(v14 + 320), v15);
  v18 = vmulq_f32(v17, v17);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  if (__builtin_islessgreater(
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_f32[0],
          0x0.0p+0f)) {
    *(_DWORD*)(v14 + 320) = 0;
    *(_DWORD*)(v14 + 324) = DWORD1(v16);
    *(_OWORD*)(v14 + 320) = *(unsigned __int64*)(v14 + 320);
    v19 = *((float*)&v16 + 1) * 0x1.0000000000000p-1;
    v20 = cos(v19);
    v21 = sin(v19);
    v22 = v20 + PSEUDO_UNFUSED(v21 * 0x0.0p+0);
    v23 = PSEUDO_UNFUSED(v21 * -0x0.0p+0) + v20 * 0x0.0p+0;
    v24 = v21 + PSEUDO_UNFUSED(v20 * 0x0.0p+0);
    v25 = COERCE_FLOAT(*(_OWORD*)(v14 + 336)) == v23 &&
          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v14 + 336))) == v24;
    v26 = v25 && COERCE_FLOAT(*(_QWORD*)(v14 + 344)) == v23;
    if (!v26 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v14 + 336))) != v22) {
      v28 = *(_DWORD*)(v14 + 296);
      *(float*)(v14 + 336) = v23;
      *(float*)(v14 + 340) = v24;
      *(float*)(v14 + 344) = v23;
      *(float*)(v14 + 348) = v22;
      *(_DWORD*)(v14 + 296) = v28 | 1;
    }
  }
  v29 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 32) = *(_DWORD*)(v29 + 336);
  *(_DWORD*)(a1 + 36) = *(_DWORD*)(v29 + 340);
  *(_DWORD*)(a1 + 40) = *(_DWORD*)(v29 + 344);
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(v29 + 348);
  v30 = *(_OWORD*)(v29 + 304);
  v31 = *(_OWORD*)(v29 + 448);
  *(_QWORD*)(a1 + 64) = v30;
  *(_QWORD*)(a1 + 80) = v31;
  v32 = *(_OWORD*)(a1 + 64);
  v33 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v32 + 1) = DWORD2(v30);
  *((_QWORD*)&v33 + 1) = DWORD2(v31);
  *(_OWORD*)(a1 + 64) = v32;
  *(_OWORD*)(a1 + 80) = v33;
  if ((*(_BYTE*)(v4 + 340) & 1) == 0) {
    WallCollisionModule_1105be0(a2, *(float*)(a1 + 96));
  }
}

#pragma GCC visibility pop
