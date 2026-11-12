#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e51940(_QWORD, _QWORD);
__int64 GameRoutine_ea3620(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_1fe6540[])();
__int64 game_combat_GambitVisibitlity_Run(__int64 a1);
__int64 game_combat_GambitVisibitlity_Run_lambda0_Invoke_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_combat_GambitVisibitlity_Run_lambda0_Invoke");
__attribute__((swiftcall)) void GambitVisibitlity_Unknown3(PSEUDO_X8 x8_);
__int64 game_ea3620(__int64 result, char, int, double, long double, long double,
                    long double);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 game_combat_GambitVisibitlity_Run_lambda0_Invoke(__int64 a1, __int64 a2,
                                                         double a3,
                                                         long double a4,
                                                         long double a5,
                                                         long double a6);

__int64 game_combat_GambitVisibitlity_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe6540;
  v3[1] = a1;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__attribute__((swiftcall)) void GambitVisibitlity_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 22;
  strcpy(a1 + 1, "Visibitlity");
}

__int64 game_combat_GambitVisibitlity_Run_lambda0_Invoke(__int64 a1, __int64 a2,
                                                         double a3,
                                                         long double a4,
                                                         long double a5,
                                                         long double a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  v6 = *(_QWORD*)(a1 + 8);
  v7 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v8 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v8 == 0) {
    return game_ea3620(*(_QWORD*)(v7 + 40), *(_BYTE*)(v6 + 56), 2, a3, a4, a5,
                       a6);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                            memory_order_relaxed);
  result =
      game_ea3620(*(_QWORD*)(v7 + 40), *(_BYTE*)(v6 + 56), 2, a3, a4, a5, a6);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak_alt1(v8);
  }
  return result;
}

#pragma GCC visibility pop
