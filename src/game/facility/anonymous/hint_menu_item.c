#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_ffc660(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern char* game_menu_g_mid_cause_invalid_ptr[7];
__int64 HintMenuItem_Unknown55(__int64 a1);
__int64 HintMenuItem_Unknown73(_QWORD* a1);

__int64 HintMenuItem_Unknown55(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 result;
  __int64* v8;

  GameRoutine_16ed000();
  v2 = GameRoutine_ffc660(11, 0);
  if (*(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock();
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
  result = ui_LayoutAccessor_FindPane(v6, "IconNew");
  if (result != 0) {
    *(_BYTE*)(result + 88) = *(_BYTE*)(result + 88) & 0xFE | v2 & 1;
  }
  return result;
}

__int64 HintMenuItem_Unknown73(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  const char* v5;
  int v6;
  _QWORD v8[2];
  char v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  _BYTE v14[168];

  v1 = a1[1];
  if (v1 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = "MID_PerchMenu_BattleHint_Help";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = "MID_PerchMenu_BattleHint_Part3_Help";
  }
  GameRoutine_16ee370(v14, v4, v5);
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    GameRoutine_16ef100(v14, *(_QWORD*)game_menu_g_mid_cause_invalid_ptr[0]);
  }
  v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
  v12 = 0;
  v13 = 0;
  v8[0] = "Tutorial";
  v8[1] = "MID_KeyHelp_Tutorial";
  v9 = 1;
  v10 = 10;
  v11 = v6;
  GameRoutine_16ef210(v14, v8);
  return GameRoutine_16ee520(v14);
}

#pragma GCC visibility pop
