#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173f310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_173fc80(_QWORD, _QWORD);
__int64 GameRoutine_1840e20(_QWORD, _QWORD);
__int64 GameRoutine_19e6970(_QWORD);
__int64 GameRoutine_a14090(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcInOutAnim_173fac0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64* GameRoutine_19e2c00(__int64);
extern __int64 GameData_2260e70;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 EventMemoryMenu_Unknown103(__int64 a1);
__int64 EventMemoryMenu_Unknown105(__int64 a1);
__int64 EventMemoryMenu_Unknown108(__int64 a1, char a2);
__int64 EventMemoryMenu_Unknown110(__int64 a1, char a2);
__int64 EventMemoryMenu_Unknown143(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_Unknown144(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_Unknown7(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_Unknown8(__int64 a1, unsigned int a2);
__int64 EventMemoryMenu_19e5e70(__int64 a1, __int64 a2);
__int64
game_facility_anonymous_EventMemoryMenu_OnBuild_closure_Invoke(__int64 a1,
                                                               __int64 a2);
__int64
game_facility_anonymous_EventMemoryMenu_ACall_closure_Invoke(__int64 a1,
                                                             __int64* a2);
void game_facility_anonymous_EventMemoryMenu_ACall_closure0_Invoke();
bool game_facility_anonymous_EventMemoryMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2);

__int64 EventMemoryMenu_Unknown103(__int64 a1)
{
  if ((game_menu_PageTab_Move(a1 + 1072, 0xFFFFFFFFLL, 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e2c00(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown105(__int64 a1)
{
  if ((game_menu_PageTab_Move(a1 + 1072, 1, 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e2c00(a1);
  game_menu_BasicMenu_Unknown16defa0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown108(__int64 a1, char a2)
{
  if (*(_BYTE*)(a1 + 1520) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1392, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e6970(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown110(__int64 a1, char a2)
{
  if (*(_BYTE*)(a1 + 1520) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1392, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  GameRoutine_19e6970(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown143(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1200, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1204);
  v4 = *(_QWORD*)(a1 + 1216);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1224) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1376) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown144(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1200, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1204);
  v4 = *(_QWORD*)(a1 + 1216);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1224) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1376) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 EventMemoryMenu_Unknown7(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1024, 0xFFFFFFFFLL, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1028);
  v4 = *(_QWORD*)(a1 + 1040);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1048) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1200) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1 - 176);
  return 13;
}

__int64 EventMemoryMenu_Unknown8(__int64 a1, unsigned int a2)
{
  int v3;
  __int64 v4;

  if ((game_menu_PageTab_Move(a1 + 1024, 1, a2) & 1) == 0) {
    return 0;
  }
  v3 = *(_DWORD*)(a1 + 1028);
  v4 = *(_QWORD*)(a1 + 1040);
  if (v3 < (unsigned __int64)((*(_QWORD*)(a1 + 1048) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  *(_DWORD*)(a1 + 1200) = v3;
  game_menu_BasicMenu_Unknown16de4d0(a1 - 176);
  return 13;
}

__int64 EventMemoryMenu_19e5e70(__int64 a1, __int64 a2)
{
  const char* v4;
  __int64 v5;

  if (a2 != 0) {
    v4 = "ClearImg_Off";
  }
  else {
    v4 = "ClearImg";
  }
  LayoutAccessor_1562cf0(a1, v4);
  v5 = ui_LayoutAccessor_FindPane(a1, "Icon_Clan");
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameRoutine_1840e20(v5, a2);
}

__int64

game_facility_anonymous_EventMemoryMenu_OnBuild_closure_Invoke(__int64 a1,
                                                               __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 136LL) = 0;
  return 0;
}

__int64

game_facility_anonymous_EventMemoryMenu_ACall_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if (GameData_2260e70 != 0) {
    v4 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v4 != 0) {
      ProcInOutAnim_173fac0(v4, 1);
    }
  }
  return GameRoutine_a14090(v2, *(_QWORD*)(a1 + 8));
}

void game_facility_anonymous_EventMemoryMenu_ACall_closure0_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[2];
  __int64 v5;
  __int64 v6;

  v0 = GameData_2260e70;
  if (GameData_2260e70 != 0) {
    v1 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v1 != 0) {
      GameRoutine_173fc80(v1, 1);
    }
    else {
      v2 = *(_QWORD*)(GameData_2260e70 + 160);
      v5 = *(_QWORD*)(GameData_2260e70 + 152);
      v6 = v2;
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
      }
      v4[0] = "In";
      v4[1] = 2;
      v3[0] = "Out";
      v3[1] = 3;
      *(_QWORD*)(v0 + 168) = GameRoutine_173f310(v0, &v5, 1, v4, v3, -1.0);
      if (v6 != 0) {
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
}

bool game_facility_anonymous_EventMemoryMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(v2 + 1204);
  v4 = *(_QWORD*)(v2 + 1224);
  v5 = *(_QWORD*)(v2 + 1216);
  if (v3 < (unsigned __int64)((v4 - v5) >> 2)) {
    v3 = *(_DWORD*)(v5 + 4LL * v3);
  }
  return *(_DWORD*)(*(_QWORD*)a2 + 84LL) == v3;
}

#pragma GCC visibility pop
