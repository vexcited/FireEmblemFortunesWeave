#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_BasicMenu_Unknown96(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 CalibrationDialog_Unknown96(__int64 a1);

__int64 CalibrationDialog_Unknown96(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  game_menu_BasicMenu_Unknown96();
  *(_BYTE*)(a1 + 1300) = 0;
  result = ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_NextCursor", 0);
  if (*(_QWORD*)(a1 + 1520) == 0) {
    goto LABEL_18;
  }
  result = *(_QWORD*)(a1 + 1512);
  if (result == 0) {
    goto LABEL_18;
  }
  result = std___1___shared_weak_count_lock();
  if (result == 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(a1 + 1504);
  if (v4 != 0) {
    v1 = *(unsigned __int8*)(v4 + 24);
    v5 = v4 + 152;
    if (v1 == 0) {
      v5 = 0;
    }
    v6 = v5 != *(_QWORD*)(a1 + 1520);
  }
  else {
    v6 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6) {
    LABEL_11:
      v7 = *(_QWORD*)(a1 + 1512);
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        goto LABEL_18;
      }
      goto LABEL_16;
    }
  }
  else {
    v8 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v8);
    if (v6) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) != 0) {
  LABEL_16:
    v9 = *(_QWORD*)(a1 + 1608);
    if (v9 != 0) {
      *(_DWORD*)(v9 + 32) = 0;
    }
  }

LABEL_18:
  *(_DWORD*)(a1 + 1492) = 0;
  return result;
}

#pragma GCC visibility pop
