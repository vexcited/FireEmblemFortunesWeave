#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1873040(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 EmptyDepositoryMenuItem_Unknown55(__int64 a1);

__int64 EmptyDepositoryMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  atomic_ullong* v4;
  __int64* v5;
  __int64* v7;

  GameRoutine_1873040();
  if (*(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_5;
  }
  v2 = std___1___shared_weak_count_lock();
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = v2;
  v4 = (atomic_ullong*)(v2 + 8);
  v5 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v4, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    v5 = v7;
    if (v7 != nullptr) {
      return ui_LayoutAccessor_SetPaneVisible(v5, "IconNew", 0);
    }
    goto LABEL_5;
  }
  if (v5 == nullptr) {
  LABEL_5:
    v5 = &ui_LayoutAccessor_empty_;
  }
  return ui_LayoutAccessor_SetPaneVisible(v5, "IconNew", 0);
}

#pragma GCC visibility pop
