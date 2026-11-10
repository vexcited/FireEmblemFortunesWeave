#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_GetPane(_QWORD, _QWORD);
extern __int64 (*game_gameui_control_BattlePopupBlaze_vtable[])();
extern __int64 (*game_gameui_control_BattlePopup_vtable)();
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
float BattlePopupBlaze_18c1590(__int64 a1);
__int64 BattlePopupBlaze_18c1610(__int64* a1);
__int64 BattlePopupBlaze_18c2b80(__int64 a1);
__int64 BattlePopupBlaze_18c2c90(__int64 a1);
__int64 BattlePopupBlaze_18c2e50(__int64 a1);

float BattlePopupBlaze_18c1590(__int64 a1)
{
  __int64 v2;
  float v3;

  v2 = ui_LayoutAccessor_GetPane(a1 + 80, "T_Txt");
  if (v2 == 0) {
    return *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 80LL);
  }
  v3 = *(float*)(v2 + 80);
  ui_LayoutAccessor_GetPane(a1 + 80, "T_Num");
  return v3;
}

__int64 BattlePopupBlaze_18c1610(__int64* a1)
{
  int v1;
  __int64 v2;
  _DWORD v4[2];

  if (*((_DWORD*)a1 + 58) == 2) {
    v1 = *((_DWORD*)a1 + 60);
  }
  else {
    v1 = *((_DWORD*)a1 + 59);
  }
  v2 = *a1;
  v4[0] = v1;
  v4[1] = v1;
  return (*(__int64 (**)(__int64*, _DWORD*))(v2 + 88))(a1, v4);
}

__int64 BattlePopupBlaze_18c2b80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;

  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  LayoutAccessor_155e140(a1 + 80);
  v3 = *(_QWORD*)(a1 + 176);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return result;
}

__int64 BattlePopupBlaze_18c2c90(__int64 a1)
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
  LayoutAccessor_155e140(a1 + 80);
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

__int64 BattlePopupBlaze_18c2e50(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)a1 = game_gameui_control_BattlePopupBlaze_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 296);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  LayoutAccessor_155e140(a1 + 80);
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

#pragma GCC visibility pop
