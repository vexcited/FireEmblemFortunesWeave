#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_2074560;
extern __int64 GameData_212d690;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e030[4];
__int64 ExchangeNumMenuItem_Unknown70(__int64 a1);
__int64 ExchangeNumMenuItem_Unknown71(__int64 a1, int a2);
__int64 ExchangeNumMenuItem_Unknown72(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
double ui_LayoutAccessor_GetTranslate(__int64*);
void ExchangeNumMenuItem_Unknown17(__int64 a1);

void ExchangeNumMenuItem_Unknown17(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  double v6;
  int v7;
  int v8;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v3 != 0) {
      v4 = v3;
      v5 = *(__int64**)(a1 + 48);
      if (v5 != nullptr) {
        v6 = ui_LayoutAccessor_GetTranslate(v5),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        *(_DWORD*)(a1 + 64) = LODWORD(v6);
        *(_DWORD*)(a1 + 68) = v7;
        *(_DWORD*)(a1 + 72) = v8;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v4),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
  }
}

__int64 ExchangeNumMenuItem_Unknown70(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e030[0], &GameData_2074560, 0);
    if (result != 0) {
      return *(unsigned int*)(result + 1572);
    }
  }
  return result;
}

__int64 ExchangeNumMenuItem_Unknown71(__int64 a1, int a2)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e030[0], &GameData_2074560, 0);
    if (result != 0) {
      *(_DWORD*)(a1 + 288) = *(_DWORD*)(result + 1572);
      *(_DWORD*)(result + 1572) = a2;
    }
  }
  return result;
}

__int64 ExchangeNumMenuItem_Unknown72(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v5 = ui_LayoutAccessor_FindPane(v3, "T_Num");
        if (v5 != 0) {
          v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d690, 0);
          if (v6 != 0) {
            GameRoutine_156c910(v6, "%d", 1);
          }
        }
        result = ui_LayoutAccessor_FindAlignment(v3, "A_Num");
        if (result != 0) {
          result = Alignment_56b600(result);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
