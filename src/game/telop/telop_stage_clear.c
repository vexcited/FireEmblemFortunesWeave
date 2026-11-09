#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10140c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212fcd8;
extern __int64 (*game_telop_TelopStageClear_vtable[])();
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 TelopStageClear_Unknown33(__int64 a1);
__int64 TelopStageClear_DeletingDestructor(_QWORD* a1);

__int64 TelopStageClear_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  int v13;
  _QWORD v14[4];

  v2 = ui_LayoutAccessor_FindPane(a1 + 168, "T_TurnNum");
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212d670[0], GameData_212d690, 0);
    if (v3 != 0) {
      GameRoutine_156c910(v3, "%d", 1);
    }
  }
  v4 = *(_QWORD*)(a1 + 880);
  if (*(_BYTE*)(v4 + 2136) != 0) {
    v5 = GameRoutine_97b2f0(v4 + 2104);
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  else {
    v5 = GameRoutine_67ed20(*(_QWORD*)(v4 + 392));
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  v6 = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_MVPUnit");
  if (v6 != 0) {
    GameRoutine_156c5d0(v6, v5, 0);
  }

LABEL_10:
  v7 = ui_LayoutAccessor_FindPane(a1 + 168, "Face");
  if (v7 != 0) {
    v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 880);
  memset(v14, 0, 24);
  v10 = *(_QWORD*)(a1 + 896);
  v12 = v9;
  v13 = 1;
  v14[3] = *(_QWORD*)GameData_212fcd8;
  result = GameRoutine_10140c0(v10, v8, 0, &v12, v14);
  if ((result & 1) == 0) {
    return ui_LayoutAccessor_SetPaneVisible(a1 + 168, "Face", 0);
  }
  return result;
}

__int64 TelopStageClear_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[112];
  a1[112] = 0;
  *a1 = game_telop_TelopStageClear_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_1015560(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
    v5 = a1[112];
    a1[112] = 0;
    if (v5 != 0) {
      GameRoutine_1015560(v5);
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
    }
  }
  v7 = a1[106];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[104];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_1386f80(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
