#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_15ba6a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2c40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c8a8;
extern __int64 GameData_204fdb0;
extern __int64* GameData_21319e8[10];
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 SkillUnitMenu_Unknown88(__int64 a1);
__int64 SkillUnitMenu_Unknown90(_QWORD* a1);
__int64 SkillUnitMenu_Unknown139(__int64 a1);

__int64 SkillUnitMenu_Unknown88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_204fdb0, 0);
  v13 = *(_QWORD*)(a1 + 336);
  if (v13 == 0) {
    return result;
  }
  v18 = v20;
  v19 = v21;
  v23 = v22;
  v1 = v13;
  v2 = result;
  if (*(_QWORD*)(v13 + 88) != 0) {
    v3 = *(_DWORD*)(v13 + 112);
    *(struct PseudoSret*)(&v16) =
        GameRoutine_1560070(result + 200, "L_InfoDetail");
    result = v17;
    if (v17 == 0) {
      return result;
    }
    v4 = *(unsigned __int8*)(v2 + 376);
    v5 = *(_QWORD*)(v2 + 360);
    v6 = std___1___shared_weak_count_lock(v17);
    if (v6 != 0) {
      v7 = v6;
      if (v16 != 0) {
        GameRoutine_15d2c40(v16, v1 + 108, v4, v5, v3, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    result = v17;
    if (v17 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  *(struct PseudoSret*)(&v14) =
      GameRoutine_1560070(result + 200, "L_InfoDetail");
  result = v15;
  if (v15 != 0) {
    v8 = *(unsigned __int8*)(v2 + 376);
    v9 = std___1___shared_weak_count_lock(v15);
    if (v9 != 0) {
      v10 = v9;
      if (v14 != 0) {
        GameRoutine_15d2c40(v14, GameData_212c8a8, v8, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    result = v15;
    if (v15 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 SkillUnitMenu_Unknown90(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 i;

  result = a1[120];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = a1[119];
      if (result != 0) {
        result = ControlCreator_13633c0(result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        result = std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  v4 = a1[136];
  for (i = a1[137]; v4 != i; v4 += 16) {
    result = GameRoutine_15ba6a0(a1, *(_QWORD*)v4, *(unsigned int*)(v4 + 8));
  }
  return result;
}

__int64 SkillUnitMenu_Unknown139(__int64 a1)
{
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 240LL))(a1, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 248LL))(a1, 1);
}

#pragma GCC visibility pop
