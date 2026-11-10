#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskDoFTemporalFilter_b7d840(_QWORD* a1);

__int64 TaskDoFTemporalFilter_b7d840(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 11, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 27, *v2 + 568);
  GameRoutine_604050(a1 + 27);
  GameRoutine_604050(a1 + 11);
  v3 = a1[5];
  a1[5] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[4];
  a1[4] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[3];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
