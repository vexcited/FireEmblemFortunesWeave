#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 TalkEventMenuItem_Unknown55(_QWORD* a1);
__int64 TalkEventMenuItem_Unknown70(__int64 a1);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 TalkOtherClanMenuItem_14cfb10(__int64, __int64);
extern __int64 GameData_2131860;
void GameRoutine_1526260(__int64, __int64);
__int64 TalkEventMenuItem_Unknown25(__int64 a1);

__int64 TalkEventMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5;

  game_menu_GameMenuItem_DrawText();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        ui_LayoutAccessor_SetPaneVisible(a1[6], "Face", 0);
        v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        ui_LayoutAccessor_SetPaneVisible(v3, "IconTalk", (v5 & 1) == 0);
        result = ui_LayoutAccessor_FindAlignment(v3, "A_Txt");
        if (result != 0) {
          result = Alignment_56b600();
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

__int64 TalkEventMenuItem_Unknown25(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = (__int64*)GameData_2131860;
  if (*(_QWORD*)GameData_2131860 != 0) {
    GameRoutine_1526260(*(_QWORD*)GameData_2131860, *(_QWORD*)(a1 + 88));
    v3 = *v2;
    if (*v2 != 0) {
      if (*(_QWORD*)(v3 + 224) != *(_QWORD*)(v3 + 216)) {
        goto LABEL_4;
      }
      TalkOtherClanMenuItem_14cfb10(v3, *(_QWORD*)(a1 + 88));
    }
    return 4;
  }
LABEL_4:
  LayoutAccessor_155e830(*(_QWORD*)(a1 + 8) + 848LL, 0);
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
  }
  TalkOtherClanMenuItem_14cfb10(v5, *(_QWORD*)(a1 + 88));
  return 10;
}

__int64 TalkEventMenuItem_Unknown70(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 56LL);
  v2 = game_HashString(v3);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v2);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

#pragma GCC visibility pop
