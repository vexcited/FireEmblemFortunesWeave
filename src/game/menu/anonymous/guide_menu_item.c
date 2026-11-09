#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1301c20(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1716080(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1716850(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 GuideMenuItem_Unknown55(_QWORD* a1);

__int64 GuideMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  float v12;
  atomic_ullong* v13;
  _QWORD v14[2];

  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        ui_LayoutAccessor_SetPaneVisible(a1[6], "N_Contents", 1);
        ui_LayoutAccessor_SetPaneVisible(v3, "A_Return", 1);
        v5 = GameRoutine_1301c20(a1[11]);
        if (v5 != 0) {
          v6 = v5;
          v7 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v7 != 0) {
            GameRoutine_156c5d0(v7, v6, 0);
          }
        }
        v8 = a1[11];
        v9 = *(unsigned __int8*)(v8 + 33);
        v10 = *(unsigned __int8*)(v8 + 81);
        if (v9 != 0) {
          v11 = 3;
        }
        else {
          v11 = 0;
        }
        v12 = (float)(v10 + v11 - 1);
        GameRoutine_1562680(v3, "Recommendation", 0.0);
        GameRoutine_15636c0(v3, "Recommendation", 0, v12);
        v14[0] = v3;
        v14[1] = v4;
        v13 = (atomic_ullong*)(v4 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_1716080(v14, a1[11], 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
        }
        atomic_fetch_add_explicit(v13, 1u, memory_order_relaxed);
        result = GameRoutine_1716850(v3, a1[11]);
        if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          result = std___1___shared_weak_count___release_weak(v4);
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
