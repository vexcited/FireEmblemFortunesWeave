#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, double);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 WarpArrow_Setup(__int64 a1, __int64* a2, int a3);

__int64 WarpArrow_Setup(__int64 a1, __int64* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  double v12;
  __int64 v13;
  __int64 v14;
  _BYTE v15[256];

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result, a2);
    if (result != 0) {
      v7 = *a2;
      v8 = result;
      if (v7 == 0) {
        goto LABEL_15;
      }
      sprintf(v15, "L_Warp%d", a3);
      GameRoutine_60a020(a1 + 8, v15);
      if (a3 >= 1) {
        GameRoutine_1560520(v7, "L_Warp0", "N_Warp", v15);
      }
      GameRoutine_1560070(&v13, v7, v15);
      result = v14;
      if (v14 == 0) {
        goto LABEL_15;
      }
      v10 = std___1___shared_weak_count_lock(v14, v9);
      v11 = v13;
      result = v14;
      if (v14 != 0) {
        result = std___1___shared_weak_count___release_weak(v14);
      }
      if (v10 != 0 && v11 != 0) {
        GameRoutine_155e830(v11, 0);
        LODWORD(v12) = 1.0;
        result = GameRoutine_1562680(v11, "Wait", v12);
      }
      else if (v10 == 0) {
      LABEL_15:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          return std___1___shared_weak_count___release_weak(v8);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
      }
      goto LABEL_15;
    }
  }
  return result;
}

#pragma GCC visibility pop
