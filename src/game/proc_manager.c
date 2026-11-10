#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ProcInst_657a50(void);
__int64 ProcInst_657a50_alt1(_QWORD, _QWORD) __asm__("ProcInst_657a50");
__int64 game_ProcManager_FindByDesc_lambda0_Invoke(__int64 result, _QWORD* a2);
__int64
game_ProcManager_KillByClass_game_map_anonymous_ProcMapDrawer_closure_Invoke(
    __int64 a1, __int64* a2);
__int64
game_ProcManager_KillByClass_game_combat_MagicInst_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64
game_ProcManager_FindByClass_game_character_EvaporatorImpl_closure_Invoke(
    __int64 result, _QWORD* a2);
__int64
game_ProcManager_FindByClass_game_talk_ProcWait_closure_Invoke(__int64 result,
                                                               _QWORD* a2);
__int64
game_ProcManager_FindByClass_game_map_anonymous_ProcFadeTimeSlip_closure_Invoke(
    __int64 result, _QWORD* a2);
__int64
game_ProcManager_FindByClass_game_cmdbtl_DungeonSortieMenu_closure_Invoke(
    __int64 result, _QWORD* a2);
__int64
game_ProcManager_FindByClass_game_cmdbtl_QuickBtlSortieMenu_closure_Invoke(
    __int64 result, _QWORD* a2);
__int64
game_ProcManager_KillByClass_game_map_ProcPopup_closure_Invoke(__int64 a1,
                                                               __int64* a2);
__int64
game_ProcManager_FindByClass_game_gmap_anonymous_ProcGmapShopGuideMenu_closure_Invoke(
    __int64 result, _QWORD* a2);

__int64 game_ProcManager_FindByDesc_lambda0_Invoke(__int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64

game_ProcManager_KillByClass_game_map_anonymous_ProcMapDrawer_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 result;

  result = *a2;
  if ((*(_WORD*)(*a2 + 136) & 1) == 0) {
    return ProcInst_657a50();
  }
  return result;
}

__int64

game_ProcManager_KillByClass_game_combat_MagicInst_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 result;

  result = *a2;
  if ((*(_WORD*)(*a2 + 136) & 1) == 0) {
    return ProcInst_657a50_alt1(result, 1);
  }
  return result;
}

__int64

game_ProcManager_FindByClass_game_character_EvaporatorImpl_closure_Invoke(
    __int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64

game_ProcManager_FindByClass_game_talk_ProcWait_closure_Invoke(__int64 result,
                                                               _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64

game_ProcManager_FindByClass_game_map_anonymous_ProcFadeTimeSlip_closure_Invoke(
    __int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64

game_ProcManager_FindByClass_game_cmdbtl_DungeonSortieMenu_closure_Invoke(
    __int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64

game_ProcManager_FindByClass_game_cmdbtl_QuickBtlSortieMenu_closure_Invoke(
    __int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

__int64

game_ProcManager_KillByClass_game_map_ProcPopup_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 result;

  result = *a2;
  if ((*(_WORD*)(*a2 + 136) & 1) == 0) {
    return ProcInst_657a50_alt1(result, 1);
  }
  return result;
}

__int64

game_ProcManager_FindByClass_game_gmap_anonymous_ProcGmapShopGuideMenu_closure_Invoke(
    __int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

#pragma GCC visibility pop
