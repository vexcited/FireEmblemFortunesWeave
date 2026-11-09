#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 UnitMakeInvisibleMenuItem_Unknown55(__int64 a1);

__int64 UnitMakeInvisibleMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 48);
      if (result != 0) {
        result = ui_LayoutAccessor_SetPaneVisible(result, "N_Root", 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
