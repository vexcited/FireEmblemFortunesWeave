#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e8d40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2011030[])();
extern __int64 (*game_character_FootprintModule2_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FootprintModule2_Destructor(_QWORD* a1);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 GameData_21c6978;
void game_10e91c0(_QWORD*, float32x4_t*, float32x4_t*, long double);
void FootprintModule2_Unknown6(__int64 a1);

void FootprintModule2_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v1 + 289) == 1 && (*(_BYTE*)(v1 + 288) & 1) != 0) {
    while ((*(_BYTE*)(v1 + 300) & 0xFD) != 1) {
      v1 = *(_QWORD*)(v1 + 736);
      if (v1 == 0) {
        v2 = *(_QWORD*)(GameData_21c6978 + 32);
        if (*(_QWORD*)(GameData_21c6978 + 24) != v2) {
          v3 = *(_QWORD*)(v2 - 8);
          if (v3 != 0) {
            v5 = *(float32x4_t**)(v3 + 24);
            v4 = *(_QWORD*)(v3 + 32);
            if (v4 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v6 = a1;
                (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                std___1___shared_weak_count___release_weak_alt1();
                a1 = v6;
              }
            }
            if (v5 != nullptr) {
              v7 = v5[1];
              v8 = vsubq_f32(v5[2], v7);
              v9 = vmulq_f32(v8, v8);
              LANES128(v9).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v9).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
              v10 = vrsqrteq_f32(v9);
              v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
              v12 = vbicq_s8(
                  vmulq_f32(v8, vmulq_f32(v11, vrsqrtsq_f32(
                                                   v11, vmulq_f32(v9, v11)))),
                  vceqzq_f32(v9));
              v13 = v7;
              game_10e91c0((_QWORD*)(a1 + 88), &v13, &v12, *(long double*)&v7);
            }
          }
        }
        return;
      }
      if (*(_BYTE*)(v1 + 289) != 1 || *(_BYTE*)(v1 + 288) != 1) {
        return;
      }
    }
  }
}

__int64 FootprintModule2_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  *a1 = game_character_FootprintModule2_vtable;
  a1[3] = GameData_2011030;
  GameRoutine_10e8d40(a1 + 11);
  v2 = a1[8];
  if (v2 != 0) {
    v3 = a1[9];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 == v3) {
      goto LABEL_12;
    }
    v5 = a1[9];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v2);
    v9 = a1[8];
    a1[9] = v2;
    v2 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v2);
    }
  }
  result = a1[7];
  a1[3] = kaneko_WPHolder_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v12 = a1[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

#pragma GCC visibility pop
