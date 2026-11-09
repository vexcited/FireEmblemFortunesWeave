#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BelongingMenu_16ca580(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_157e0f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ca2e0(void);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(void);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21f1668;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
extern __int64* GameData_21319f8[8];
__int64 GmapTalkMenu_Unknown84(__int64 a1);
__int64 GmapTalkMenu_Unknown96(_QWORD* a1);
__int64 GmapTalkMenu_Unknown85(__int64 a1);
__int64 GmapTalkMenu_DeletingDestructor(_QWORD* a1);

__int64 GmapTalkMenu_Unknown84(__int64 a1)
{
  __int64 v2;

  GameRoutine_16ca2e0();
  GameRoutine_1562cf0(a1 + 952, "Menu_09_Header");
  v2 = GameRoutine_155fbe0(a1 + 952, "L_MenuItem_InfoHeader");
  GameRoutine_157e0f0(v2, "MID_Menu_Detail", 0);
  BelongingMenu_16ca580(a1);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_InfoDetail", 0);
}

__int64 GmapTalkMenu_Unknown96(_QWORD* a1)
{
  __int64 v2;

  game_menu_BasicMenu_Unknown16defa0();
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
  GameRoutine_155e830(*(_QWORD*)(v2 + 16), 1);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v2 + 5856) |= 0x10000u;
  return GameRoutine_155e830(a1 + 106, 1);
}

__int64 GmapTalkMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned int*)(a1 + 660);
    v4 = *(_QWORD*)(a1 + 672);
    if ((int)v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
      v3 = *(unsigned int*)(v4 + 4LL * (int)v3);
    }
    v5 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 1136LL))(a1, v3);
    result = GameRoutine_1562060(a1 + 952, "L_MenuItem_InfoHeader/T_Title", v5);
  }
  *(_DWORD*)(*(_QWORD*)(GameData_21f1668 + 8) + 5856LL) &= ~0x40u;
  return result;
}

__int64 GmapTalkMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  GameRoutine_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 139);
  GameRoutine_1563f90(a1 + 136, a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

#pragma GCC visibility pop
