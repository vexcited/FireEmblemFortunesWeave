#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopStageClear_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 TelopCmdbtlClear_Unknown33(__int64 a1);
__int64 TelopCmdbtlClear_DeletingDestructor(_QWORD* a1);

__int64 TelopCmdbtlClear_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v7[0] = GameData_212e348 + 2;
  v7[1] = 0xFFFF0001FFFF0000LL;
  v7[2] = 0xFFFF0004FFFF0002LL;
  v7[3] = 0xFFFF0006FFFF0005LL;
  v22 = 8;
  v8 = -65529;
  v9 = -65528;
  v3 = GameRoutine_a4dbe0(v2, "MID_Sys_Result_Win", 0, v7);
  if (v3 != 0) {
    v4 = v3;
    v5 = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Title");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  return GameRoutine_1562680(a1 + 168, "Info_Off", 1.0);
}

__int64 TelopCmdbtlClear_DeletingDestructor(_QWORD* a1)
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
