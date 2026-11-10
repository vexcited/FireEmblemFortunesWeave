#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gameui_control_BattlePopup_vtable)();
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BattlePopupDamage_DeletingDestructor(__int64 a1);
__int64 GameRoutine_18be910(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
extern __int64 (*BattlePopupBlaze_18c2b80_ptr[])();
extern __int64 (*GameData_2107918[])();
extern __int64 (*game_gameui_control_BattlePopupDamage_vtable[])();
void GameRoutine_18bea40();
__attribute__((swiftcall)) void
BattlePopupDamage_18bf160(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
BattlePopupDamage_18bf230(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__attribute__((swiftcall)) void

BattlePopupDamage_18bf160(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(320, 16);
  v9 = v8 + 4;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2107918;
  result = GameRoutine_18be910(v8 + 4, a1, a2, a3);
  v10[4] = game_gameui_control_BattlePopupDamage_vtable;
  *((_DWORD*)v10 + 77) = 1123024896;
  if (a2 != 0) {
    result = Pane_58fac0(*(_QWORD*)(a2 + 24), "InfoTextMargin");
    if (result != 0 ||
        (result = GameRoutine_576740(a1, "InfoTextMargin")) != 0) {
      *((_DWORD*)v10 + 77) = *(_DWORD*)(result + *(unsigned int*)(result + 4));
    }
  }
  *a4 = v9;
  a4[1] = v10;
  v10[4] = BattlePopupBlaze_18c2b80_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

BattlePopupDamage_18bf230(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float result;

  v6 = (_QWORD*)LayoutEx_579160(320, 16);
  v6[1] = 0;
  v6[2] = 0;
  v7 = v6;
  *v6 = GameData_2107918;
  v6[5] = a2;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v6[12] = 0;
  v6[4] = &ui_ILayoutControl_vtable;
  v8 = v6 + 4;
  v9 = *(_QWORD*)(a2 + 24) + 176LL;
  v10 = strlen(v9);
  v7[6] = v9;
  v7[7] = v10;
  v11 = *(_QWORD*)(a2 + 48);
  v12 = strlen(v11);
  v7[8] = v11;
  v7[9] = v12;
  ui_ILayoutControl_UpdatePath(v8);
  *v8 = &game_gameui_control_BattlePopup_vtable;
  v13 = *(_QWORD*)(a1 + 72);
  v7[18] = 0;
  v7[15] = 0;
  v7[16] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v7[21] = 0;
  v7[22] = 0;
  v7[23] = 0;
  v7[25] = 0;
  v7[26] = 0;
  v7[28] = 0;
  v7[29] = 0;
  v7[30] = 0;
  v7[31] = 0;
  v7[32] = 0;
  *((_DWORD*)v7 + 66) = 0;
  v7[17] = v7 + 18;
  v7[13] = v13;
  v7[14] = 0;
  *((_DWORD*)v7 + 48) = 1065353216;
  *((_DWORD*)v7 + 67) = *(_DWORD*)(a1 + 236);
  v14 = *(_DWORD*)(a1 + 240);
  v7[35] = 0;
  v7[36] = 0;
  v7[37] = 0;
  *((_WORD*)v7 + 152) = 0;
  *((_DWORD*)v7 + 68) = v14;
  ((void (*)(_QWORD*))GameRoutine_18bea40)(v8);
  *a3 = v8;
  a3[1] = v7;
  *v8 = game_gameui_control_BattlePopupDamage_vtable;
  result = *(float*)(a1 + 276);
  *v8 = BattlePopupBlaze_18c2b80_ptr;
  *((float*)v7 + 77) = result;
  {
    result;
    return;
  }
}

__int64 BattlePopupDamage_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  GameRoutine_155e140(a1 + 80);
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  v5 = *(_QWORD*)(a1 + 88);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7);
}

#pragma GCC visibility pop
