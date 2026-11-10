#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern char GameData_1a9f09e;

bool EquipInfoItem_SkillEquip_16d3ef0(__int64 a1)
{
  return (*(_WORD*)(a1 + 132) & 0xFFF) == 0;
};
const char* EquipInfoItem_SkillEquip_16d3f00(__int64* a1);
__int64 EquipInfoItem_SkillEquip_16d3fa0(__int64 a1, __int64* a2);

const char* EquipInfoItem_SkillEquip_16d3f00(__int64* a1)
{
  char v2;
  __int64 v3;
  char v4;
  const char* v5;
  char* v6;

  v2 = (*(__int64 (**)(__int64*))(*a1 + 488))(a1);
  v3 = *a1;
  if ((v2 & 1) != 0) {
    v4 = (*(__int64 (**)(__int64*))(v3 + 464))(a1);
    v5 = "FixedDisable";
    v6 = "Fixed";
  }
  else {
    if (((*(__int64 (**)(__int64*))(v3 + 480))(a1) & 1) != 0) {
      return "Empty";
    }
    v4 = (*(__int64 (**)(__int64*))(*a1 + 464))(a1);
    v5 = "Disable";
    v6 = &GameData_1a9f09e;
  }
  if ((v4 & 1) != 0) {
    return v6;
  }
  else {
    return v5;
  }
}

__int64 EquipInfoItem_SkillEquip_16d3fa0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18a7ae0(result, a1 + 132, *(_QWORD*)(a1 + 96), 0,
                                     0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
