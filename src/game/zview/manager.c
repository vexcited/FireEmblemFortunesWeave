#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdb368[])();
extern __int64 (*game_zview_Manager_vtable[])();
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6e8;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f818;
extern __int64 GameData_220f820;
extern __int64 GameData_220f848;
extern __int64 GameData_220f870;
extern __int64 GameData_220f8a0;
extern __int64 GameData_220f8a8;
extern __int64 GameData_220f8b0;
extern __int64 GameData_220f8b8;
extern int GameData_220f898;
__int64 Manager_Destructor_d2e850(__int64 a1);

__int64 Manager_Destructor_d2e850(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = game_zview_Manager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  if (*(_BYTE*)(a1 + 14) != 0) {
    *(_BYTE*)(a1 + 14) = 0;
  }
  if (GameData_220f818 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f818 + 24LL))(
        GameData_220f818);
    if (GameData_220f818 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f818 + 8LL))(
          GameData_220f818);
    }
    GameData_220f818 = 0;
  }
  if (GameData_220f870 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f870 + 24LL))(
        GameData_220f870);
    if (GameData_220f870 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f870 + 8LL))(
          GameData_220f870);
    }
    GameData_220f870 = 0;
  }
  if (GameData_220f8a0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a0 + 24LL))(
        GameData_220f8a0);
    if (GameData_220f8a0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a0 + 8LL))(
          GameData_220f8a0);
    }
    GameData_220f8a0 = 0;
  }
  if (GameData_220b6f0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220b6f0 + 24LL))(
        GameData_220b6f0);
    if (GameData_220b6f0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6f0 + 8LL))(
          GameData_220b6f0);
    }
    GameData_220b6f0 = 0;
  }
  if (GameData_21f3cb0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cb0 + 24LL))(
        GameData_21f3cb0);
    if (GameData_21f3cb0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cb0 + 8LL))(
          GameData_21f3cb0);
    }
    GameData_21f3cb0 = 0;
  }
  if (GameData_220f8b0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b0 + 24LL))(
        GameData_220f8b0);
    if (GameData_220f8b0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b0 + 8LL))(
          GameData_220f8b0);
    }
    GameData_220f8b0 = 0;
  }
  if (GameData_220f8a8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a8 + 24LL))(
        GameData_220f8a8);
    if (GameData_220f8a8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8a8 + 8LL))(
          GameData_220f8a8);
    }
    GameData_220f8a8 = 0;
  }
  if (GameData_220b6e8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220b6e8 + 24LL))(
        GameData_220b6e8);
    if (GameData_220b6e8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6e8 + 8LL))(
          GameData_220b6e8);
    }
    GameData_220b6e8 = 0;
  }
  if (GameData_220f8b8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b8 + 24LL))(
        GameData_220f8b8);
    if (GameData_220f8b8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f8b8 + 8LL))(
          GameData_220f8b8);
    }
    GameData_220f8b8 = 0;
  }
  if (GameData_220f848 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f848 + 24LL))(
        GameData_220f848);
    if (GameData_220f848 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f848 + 8LL))(
          GameData_220f848);
    }
    GameData_220f848 = 0;
  }
  result = GameData_220f820;
  if (GameData_220f820 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f820 + 24LL))(
        GameData_220f820);
    result = GameData_220f820;
    if (GameData_220f820 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_220f820 + 8LL))(
          GameData_220f820);
    }
    GameData_220f820 = 0;
  }
  v5 = *(_QWORD*)(a1 + 80);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 64);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  *(_QWORD*)a1 = GameData_1fdb368;
  if (GameData_21d96b8 == a1) {
    GameData_21d96b8 = 0;
    GameData_220f898 = 0;
  }
  return result;
}

#pragma GCC visibility pop
