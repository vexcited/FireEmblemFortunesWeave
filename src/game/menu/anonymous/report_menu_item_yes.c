#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* ReportMenuItem_Yes_Unknown3(__int64 a1);
bool ReportMenuItem_Yes_Unknown58(__int64 a1);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173eee0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_187f3c0(__int64);
__int64 HelpQuestInfo_12568a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64
game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f620(__int64 a1);
__int64 game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f810(
    __int64 a1, __int64* a2);

const char* ReportMenuItem_Yes_Unknown3(__int64 a1)
{
  if (*(_BYTE*)(**(_QWORD**)(a1 + 88) + 112LL) != 0) {
    return "MID_QuestMenu_Report_Yes";
  }
  else {
    return "MID_QuestMenu_Delivery_Yes";
  }
}

bool ReportMenuItem_Yes_Unknown58(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 3;
}

__int64

game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f620(__int64 a1)
{
  GameRoutine_187f3c0(*(_QWORD*)(a1 + 8));
  return 2;
}

__int64

game_menu_anonymous_ReportMenuItem_Yes_ACall_closure_Invoke_187f810(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  GameRoutine_1560070(&v13, *(_QWORD*)(v2 + 8) + 848LL, "L_Info/L_Stamp");
  if (v14 != 0) {
    v4 = std___1___shared_weak_count_lock(v14);
    if (v4 != 0) {
      v5 = v13;
    }
    else {
      v5 = 0;
    }
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    if (v5 != 0) {
      v13 = v5;
      v14 = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
      }
      v12[0] = "In";
      v12[1] = 2;
      GameRoutine_173eee0(v3, &v13, v12);
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak(v14);
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  GameRoutine_1560070(&v13, *(_QWORD*)(v2 + 8) + 848LL, "L_Info");
  result = v14;
  if (v14 != 0) {
    v7 = std___1___shared_weak_count_lock(v14);
    v8 = v13;
    result = v14;
    if (v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v14);
    }
    if (v7 != 0 && v8 != 0) {
      v9 = HelpQuestInfo_12568a0(*(_QWORD*)(v2 + 88));
      if (v9 != 0) {
        v10 = v9;
        v11 = ui_LayoutAccessor_FindTextBox(v8, "T_Help");
        if (v11 != 0) {
          GameRoutine_156c5d0(v11, v10, 0);
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v8, "A_Help");
      if (result != 0) {
        result = Alignment_56b600();
      }
    }
    else if (v7 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

#pragma GCC visibility pop
