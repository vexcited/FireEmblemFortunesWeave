#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeCrawling_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 IKSlopeCrawling_Destructor(__int64 a1);
__int64 IKSlopeCrawling_DeletingDestructor_alt1(__int64 a1) __asm__(
    "IKSlopeCrawling_DeletingDestructor");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6180;
__attribute__((swiftcall)) void IKSlopeCrawling_10fd7d0(PSEUDO_X8 x8_,
                                                        float32x4_t* result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d5e0(unsigned int* result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void IKSlopeCrawling_DeletingDestructor(__int64 a1);

__attribute__((swiftcall)) void IKSlopeCrawling_10fd7d0(PSEUDO_X8 x8_,
                                                        float32x4_t* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int8x16_t v2;
  float32x4_t v3;
  float32x4_t v4;
  int8x16_t v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v2 = vmulq_f32(*result, *result);
  LANES128(v2).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v2, v2, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0])))
          .n64_u64[0];
  LANES128(v2).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0])))
          .n64_u64[0];
  LANES128(v2).n128_u64[1] = LANES128(v2).n128_u64[0];
  v3 = vrsqrteq_f32(v2);
  v4 = vmulq_f32(v3, vrsqrtsq_f32(v3, vmulq_f32(v2, v3)));
  v5 = vbicq_s8(
      vmulq_f32(*result, vmulq_f32(v4, vrsqrtsq_f32(v4, vmulq_f32(v2, v4)))),
      vceqzq_f32(v2));
  *result = v5;
  if (LANES128(v2).n128_f32[0] == 0.0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) != 0) {
      result = (float32x4_t*)&GameData_21a6180;
    }
    else {
      v8 = a2;
      if ((unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
        v7 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v7;
        __cxa_guard_release(&GameData_21a6190);
      }
      a2 = v8;
      result = (float32x4_t*)&GameData_21a6180;
    }
  }
  else if (LANES128(v5).n128_f32[1] < 0.0f) {
    *result = vnegq_f32(v5);
  }
  v6 = LANES128(*(result)).n128_u64[1];
  *a2 = LANES128(*(result)).n128_u64[0];
  a2[1] = v6;
  {
    result;
    return;
  }
}

__n128 IKSlopeCrawling_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_IKSlopeCrawling_vtable;
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 72));
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 48);
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void IKSlopeCrawling_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_IKSlopeCrawling_vtable;
  GameHr_109d5e0((unsigned int*)(a1 + 72));
  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 48);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

#pragma GCC visibility pop
