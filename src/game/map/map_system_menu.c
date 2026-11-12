#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_1a006e0(__int64, __int64, __int64*, __int64*, float);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock();
extern __int64 game_script_hub_g_frame_counter;
float GameRoutine_16df380(__int64);
__int64 MapSystemMenu_Unknown3(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count_lock");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt2(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameHr_1a006e0(__int64, __int64, __int64*, __int64*, float);

__int64 MapSystemMenu_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  float v4;
  bool v5;
  float v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  LayoutAccessor_1560070_alt1((void*)(&v11_.v11), (__int64*)(a1 + 848),
                              "L_Minimap");
  if (v11_.v12 == 0) {
    goto LABEL_21;
  }
  v2 = std___1___shared_weak_count_lock_alt2(v11_.v12);
  if (v2 != 0) {
    v3 = v11_.v11;
  }
  else {
    v3 = 0;
  }
  if (v11_.v12 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v11_.v12);
  }
  if (v3 != 0) {
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
    }
    if (*(_DWORD*)(a1 + 1300) != 2) {
      goto LABEL_16;
    }
    v4 =
        *(float*)(game_script_hub_g_frame_counter + 104) + *(float*)(a1 + 1272);
    v5 = v4 < 0x1.e000000000000p+4f;
    if (v4 >= 0x1.e000000000000p+4f) {
      v4 = 0x0.0p+0f;
    }
    *(float*)(a1 + 1272) = v4;
    if (v5) {
    LABEL_16:
      if (v2 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v11_.v11 = v3;
      v11_.v12 = v2;
      if (v2 == 0) {
        GameHr_1a006e0(a1 + 1072, (__int64)&v11_.v11, (__int64*)(a1 + 1248),
                       (__int64*)(a1 + 1224), *(float*)(a1 + 1280));
        goto LABEL_21;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      GameHr_1a006e0(a1 + 1072, (__int64)&v11_.v11, (__int64*)(a1 + 1248),
                     (__int64*)(a1 + 1224), *(float*)(a1 + 1280));
      std___1___shared_weak_count___release_weak_alt2(v2);
    }
    std___1___shared_weak_count___release_weak_alt2(v2);
  }
  else if (v2 == 0) {
    goto LABEL_21;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt2(v2);
  }
LABEL_21:
  v6 = GameRoutine_16df380(a1);
  (*(void (**)(__int64, float))(*(_QWORD*)a1 + 712LL))(a1, v6);
  v7 = *(_QWORD**)(a1 + 232);
  v8 = *(_QWORD**)(a1 + 240);
  while (v7 != v8) {
    v9 = *v7;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7) & 1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 144LL))(v9);
    }
    ++v7;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 720LL))(a1);
}

#pragma GCC visibility pop
