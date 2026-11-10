#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskCapsuleAO_18dfe10(_QWORD* a1);
void gfxa_TaskCapsuleAO_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskCapsuleAO_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);

__int64 TaskCapsuleAO_18dfe10(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 29, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 45, *v2 + 568);
  GameRoutine_604050(a1 + 45);
  GameRoutine_604050(a1 + 29);
  v3 = a1[13];
  a1[13] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[12];
  a1[12] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[6];
  a1[6] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[5];
  a1[5] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[4];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

void gfxa_TaskCapsuleAO_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskCapsuleAO_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

#pragma GCC visibility pop
