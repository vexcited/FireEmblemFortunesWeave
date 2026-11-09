#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 MarginMenuItem_Unknown16(__int64 a1);

__int64 MarginMenuItem_Unknown16(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        ui_LayoutAccessor_SetPaneVisible(v3, "N_Contents", 0);
        result = ui_LayoutAccessor_SetPaneVisible(v3, "A_Return", 0);
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
