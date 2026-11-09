#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 EmptyMenuItem_16989d0(__int64 a1);
__int64 EmptyMenuItem_Unknown70(__int64 a1, __int64 a2);

__int64 EmptyMenuItem_16989d0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 result;
  __int64* v8;

  game_menu_GameMenuItem_DrawText();
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v8;
  if (v8 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  result = ui_LayoutAccessor_FindPane(v6, "Icon");
  if (result != 0) {
    *(_BYTE*)(result + 88) &= ~1u;
  }
  return result;
}

__int64 EmptyMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  ui_LayoutAccessor_SetPaneVisible(a2, "L_ReceptionTime", 0);
  return GameRoutine_1562cf0(a2, "Empty");
}

#pragma GCC visibility pop
