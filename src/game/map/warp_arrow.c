#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, double);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 WarpArrow_Setup_alt1(__int64 a1, __int64* a2,
                             int a3) __asm__("WarpArrow_Setup");
_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
__int64 WarpArrow_Setup(__int64 a1, __int64 a2, int a3);

__int64 WarpArrow_Setup(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  char v13[256];

  result = *(_QWORD*)(a2 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v7 = *(__int64**)a2;
      v8 = result;
      if (v7 == nullptr) {
        goto LABEL_15;
      }
      sprintf_alt1((__int64)v13, "L_Warp%d", a3);
      GameRoutine_60a020_alt1((char*)(a1 + 8), v13);
      if (a3 >= 1) {
        LayoutAccessor_1560520(v7, (__int64)"L_Warp0", (__int64)"N_Warp",
                               (__int64)v13);
      }
      LayoutAccessor_1560070((void*)(&v11_.v11), v7, v13);
      result = v11_.v12;
      if (v11_.v12 == 0) {
        goto LABEL_15;
      }
      v9 = std___1___shared_weak_count_lock_alt1(v11_.v12);
      v10 = v11_.v11;
      result = v11_.v12;
      if (v11_.v12 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v11_.v12);
      }
      if (v9 != 0 && v10 != 0) {
        LayoutAccessor_155e830(v10, 0);
        result = GameHr_1562680(v10, "Wait", 0x1.0000000000000p+0f);
      }
      else if (v9 == 0) {
      LABEL_15:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          return std___1___shared_weak_count___release_weak_alt1(v8);
        }
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak_alt1(v9);
      }
      goto LABEL_15;
    }
  }
  return result;
}

#pragma GCC visibility pop
