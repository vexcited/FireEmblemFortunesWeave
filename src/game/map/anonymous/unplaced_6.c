#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_1586840(__int64*, char);
__int64 game_menu_BasicMenu_Unknown16dd9a0(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64* GameData_212d670[3];
extern __int64 GameData_212d690;
extern __int64 GameData_21ca310;
extern char* GameData_201ed98[4];
void GameRoutine_1593b00(__int64, char);
__int64 game_map_anonymous_1271640(__int64 a1);

__int64 game_map_anonymous_1271640(__int64 a1)
{
  unsigned __int64 v2;
  char* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  const char* v12;
  const char* v13;
  struct {
    __int64* v15;
    __int64 v16;
  } v15_;

  game_menu_BasicMenu_Unknown16dd9a0(a1);
  v2 = *(unsigned __int8*)(a1 + 1876);
  if (v2 > 3) {
    v3 = nullptr;
  }
  else {
    v3 = GameData_201ed98[v2];
  }
  LayoutAccessor_1562060(a1 + 848, (__int64)"T_PhaseName", (__int64)v3);
  GameRoutine_1593b00(a1 + 848, *(_BYTE*)(a1 + 1876));
  v4 = *(_DWORD*)(a1 + 1872);
  v5 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848), (__int64)"T_Num");
  if (v5 != 0) {
    v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d690, 0);
    if (v6 != 0) {
      GameRoutine_156c910(v6, "%d", 1, v4);
    }
  }
  LayoutAccessor_1560070((void*)(&v15_.v15), (__int64*)(a1 + 848), "L_Unit");
  if (v15_.v16 != 0) {
    v7 = *(unsigned __int8*)(a1 + 1876);
    v8 = std___1___shared_weak_count_lock(v15_.v16);
    if (v8 != 0) {
      v9 = v8;
      if (v15_.v15 != nullptr) {
        game_gameui_1586840(v15_.v15, v7 != 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    if (v15_.v16 != 0) {
      std___1___shared_weak_count___release_weak(v15_.v16);
    }
  }
  v10 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v10 != 0) {
    v11 = 0;
    do {
      v11 += (*(_DWORD*)(v10 + 416) & 8) == 0;
      v10 = *(_QWORD*)(v10 + 432);
    } while (v10 != 0);
    if (v11 - 10 >= 9) {
      v12 = "Unit03";
    }
    else {
      v12 = "Unit02";
    }
    if (v11 >= 0xA) {
      v13 = v12;
    }
    else {
      v13 = "Unit01";
    }
  }
  else {
    v13 = "Unit01";
  }
  GameHr_1562680(a1 + 848, v13, 0x1.0000000000000p+0f);
  ui_LayoutAccessor_SetPaneVisible(
      a1 + 848, (__int64)"Arrow_Next",
      (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 1832) + 8LL) > 0);
  return ui_LayoutAccessor_SetPaneVisible(
      a1 + 848, (__int64)"Arrow_Prev",
      (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 1816) + 8LL) > 0);
}

#pragma GCC visibility pop
