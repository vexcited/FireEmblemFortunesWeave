#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1084940(_QWORD, _QWORD, float, long double, long double,
                            long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqCaptureComplete_SuccessPerformance1_closure_Invoke(
    __int64 result, __int64* a2, double a3, long double a4, long double a5,
    long double a6);
__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqCaptureComplete_SuccessPerformance1_closure_Invoke(
    __int64 result, __int64* a2, double a3, long double a4, long double a5,
    long double a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;

  v6 = *a2;
  v7 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  if (v6 != **(_QWORD**)(result + 8)) {
    *(_BYTE*)(v6 + 186) = 0;
    v8 = *(_QWORD*)(v6 + 216);
    if (v8 != 0) {
      v9 = *(__int64**)(v8 + 40);
      v10 = *((_DWORD*)v9 + 5);
      *((_DWORD*)v9 + 5) = v10 | 2;
      if (v10 != (v10 | 2)) {
        v11 = *v9;
        v12 = *(_QWORD*)(v11 + 8);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v11 + 16);
          v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
          if (!v14 && *(_QWORD*)(v12 + 8) != -1 &&
              (*(_BYTE*)(v11 + 61) & 1) == 0 && *(_DWORD*)(v11 + 64) != 1 &&
              (*(_BYTE*)(v13 + 342) & 1) != 0) {
            result = GameRoutine_1084940(v13, 0, 0.0, a4, a5, a6);
            *(_BYTE*)(*(_QWORD*)(v13 + 8) + 289LL) = 0;
          }
        }
      }
    }
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

#pragma GCC visibility pop
