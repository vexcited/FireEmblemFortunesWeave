#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ThrownObject_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_10a9ec0(__int64*);
__int64 ThrownStraight_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ThrownStraight_DeletingDestructor");
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, float32x2_t*);
long double ThrownStraight_Unknown10(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameHr_10a9ec0(__int64*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ThrownStraight_DeletingDestructor(_QWORD* a1);

long double ThrownStraight_Unknown10(__int64 a1)
{

#pragma clang fp contract(off)
  long double result;
  __int64 v4;
  __int64 v5;
  float32x4_t* v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  int16x4_t v12;
  int v13;
  unsigned __int32 v14;
  float32x4_t v15;
  long double v16;

  LODWORD(result) = *(_DWORD*)(a1 + 128);
  if (*(float*)&result > 0x1.4000000000000p+3f) {
    v4 = *(_QWORD*)(a1 + 56);
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 64);
      if (*(_QWORD*)(v4 + 8) != -1 && v5 != 0) {
        v7 = *(float32x4_t**)(a1 + 8);
        v8 = *(float32x4_t*)(v5 + 464);
        v9 = vsubq_f32(v7[19], v8);
        v10 = vmulq_f32(v9, v9);
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          LANES128(v7[19]).n128_u32[0] = LANES128(v8).n128_u32[0];
          LANES128(v7[19]).n128_u32[1] = *(_DWORD*)(v5 + 468);
          v11 = v7[19];
          LANES128(v11).n128_u32[2] = *(_DWORD*)(v5 + 472);
          LANES128(v7[18]).n128_u32[2] |= 1u;
          LANES128(v11).n128_u64[1] = LANES128(v11).n128_u32[2];
          v7[19] = v11;
          v7 = *(float32x4_t**)(a1 + 8);
        }
        result = *(long double*)(v5 + 496);
        LANES64(v12).n64_u64[0] =
            LANES64_OF(
                vmovn_s32(vmvnq_s8(vceqq_f32(v7[21], *(float32x4_t*)&result))))
                .n64_u64[0];
        if ((LANES64(v12).n64_u8[0] & 1) != 0 ||
            (LANES64(v12).n64_u8[2] & 1) != 0 ||
            (LANES64(v12).n64_u8[4] & 1) != 0 ||
            (LANES64(v12).n64_u8[6] & 1) != 0) {
          LANES128(v7[21]).n128_u32[0] = LODWORD(result);
          v13 = LANES128(v7[18]).n128_u32[2] | 1;
          LANES128(v7[21]).n128_u32[1] = *(_DWORD*)(v5 + 500);
          LANES128(v7[21]).n128_u32[2] = *(_DWORD*)(v5 + 504);
          v14 = *(_DWORD*)(v5 + 508);
          LANES128(v7[18]).n128_u32[2] = v13;
          LANES128(v7[21]).n128_u32[3] = v14;
          GameRoutine_622ac0((void*)(&v16), (float32x2_t*)(v5 + 496));
          result = v16;
          LANES128(v7[20]).n128_u64[0] = *(_QWORD*)&v16;
          v15 = v7[20];
          LANES128(v15).n128_u64[1] = DWORD2(result);
          v7[20] = v15;
        }
      }
    }
  }
  return result;
}

void ThrownStraight_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = &game_combat_ThrownObject_vtable;
  GameHr_10a9ec0(a1 + 17);
  v2 = a1[7];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = a1[4];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

#pragma GCC visibility pop
