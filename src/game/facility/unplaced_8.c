#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Util_15758f0(__int64, __int64, unsigned int, unsigned int, unsigned int,
                     char, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212dcd0;
__int64 game_facility_13fa3e0(__int64 a1, unsigned int a2);

__int64 game_facility_13fa3e0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  v4 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*GameData_212dcd0 + 56) - v4) >> 3)) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 8LL * a2);
  }
  v6 = game_util_Format("L_UnitInfo%02d", a2);
  LayoutAccessor_1560070((void*)(&v13_.v13), (__int64*)(a1 + 848), v6);
  Util_15758f0((__int64)&v13_.v13, v5, 0xFFFFFFFF, 0, 6u, 0, 1);
  if (v13_.v14 != 0) {
    std___1___shared_weak_count___release_weak(v13_.v14);
  }
  v7 = game_util_Format("L_UnitInfo%02d/L_UnitInfo", a2);
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848), v7);
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v9 = std___1___shared_weak_count_lock(v11_.v12);
    if (v9 != 0) {
      v10 = v9;
      if (v11_.v11 != 0) {
        LayoutAccessor_1562cf0(v11_.v11, "Simple01");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    result = v11_.v12;
    if (v11_.v12 != 0) {
      return std___1___shared_weak_count___release_weak(v11_.v12);
    }
  }
  return result;
}

#pragma GCC visibility pop
