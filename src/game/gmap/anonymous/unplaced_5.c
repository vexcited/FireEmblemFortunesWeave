#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
void game_gmap_anonymous_1542780(__int64 a1);

void game_gmap_anonymous_1542780(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  GameHr_1366ac0((void*)(&v6_.v6), (__int64)"Layout/Gmap.arc",
                 (__int64)"Gmap_EffEncount");
  v2 = v6_.v6;
  v3 = v6_.v7;
  v4 = *(_QWORD*)(a1 + 168);
  v6_.v6 = 0;
  v6_.v7 = 0;
  *(_QWORD*)(a1 + 160) = v2;
  *(_QWORD*)(a1 + 168) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v6_.v7;
  if (v6_.v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6_.v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
}

#pragma GCC visibility pop
