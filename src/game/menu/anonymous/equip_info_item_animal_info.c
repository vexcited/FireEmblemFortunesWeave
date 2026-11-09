#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18ab160(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212c8a0;
__int64 EquipInfoItem_AnimalInfo_Unknown70(__int64 a1, __int64* a2);

__int64 EquipInfoItem_AnimalInfo_Unknown70(__int64 a1, __int64* a2)
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
        result = GameRoutine_18ab160(
            result,
            *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                       8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 96) + 1880LL)),
            0);
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
