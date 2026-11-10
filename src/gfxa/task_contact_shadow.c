#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskContactShadow_18e3ac0(_QWORD* a1);
void gfxa_TaskContactShadow_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskContactShadow_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);

__int64 TaskContactShadow_18e3ac0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 26, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 42, *v2 + 568);
  GameRoutine_604050(a1 + 42);
  GameRoutine_604050(a1 + 26);
  v3 = a1[10];
  a1[10] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  result = a1[9];
  a1[9] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v5 = a1[8];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
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

void gfxa_TaskContactShadow_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskContactShadow_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

#pragma GCC visibility pop
