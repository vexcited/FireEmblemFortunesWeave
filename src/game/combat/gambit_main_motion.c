#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
__int64 GambitMainMotion_Unknown2(__int64 result);

__int64 GambitMainMotion_Unknown2(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(
      _DWORD*)(*(_QWORD*)(**(_QWORD**)(result + 48) +
                          8LL * (((*(_DWORD*)(*(_QWORD*)(result + 48) + 88LL) -
                                   1) &
                                  0xFFFFFFFD) == 0) +
                          16) +
               112LL);
  if (v1 != 0) {
    if (v1 != 1) {
      return result;
    }
    v1 = 1;
  }
  v2 = *GameData_212d448[0] + 24LL * v1;
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v4 = *(_QWORD*)(v2 + 40);
    if (*(_QWORD*)(v3 + 8) == -1 || v4 == 0) {
      return std___1___shared_weak_count___release_weak(v3);
    }
    v6 = *(_QWORD*)(v4 + 80);
    if (v6 == 0) {
      return std___1___shared_weak_count___release_weak(v3);
    }
    v7 = *(_QWORD*)(v6 + 8) == -1 || *(_QWORD*)(v4 + 88) == 0;
    if (v7 || *(_QWORD*)(v3 + 8) == -1) {
      return std___1___shared_weak_count___release_weak(v3);
    }
    else {
      v8 = result;
      result = std___1___shared_weak_count___release_weak(v3);
      v9 = *(_QWORD*)(v4 + 80);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 8);
        v11 = *(_QWORD*)(v4 + 88);
        if (v10 != -1 && v11 != 0) {
          result = *(_QWORD*)(v11 + 72);
          if (result != 0) {
            return GameRoutine_1079580(result, *(unsigned int*)(v8 + 56),
                                       *(float*)(v8 + 60), -1.0, 1.0);
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
