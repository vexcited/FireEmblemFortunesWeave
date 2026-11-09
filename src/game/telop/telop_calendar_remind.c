#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_1374cc0(_BYTE*, char);
__int64 GameRoutine_1374ee0(_QWORD*, __int64);
__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_1712520(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 TelopCalendarRemind_Unknown35(__int64 result);
__int64 TelopCalendarRemind_Unknown44(__int64 a1);
__int64 TelopCalendarRemind_Destructor(__int64 a1);
__int64 TelopCalendarRemind_DeletingDestructor(__int64 a1);

__int64 TelopCalendarRemind_Unknown35(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 820) & 1) == 0) {
    v1 = result;
    result = GameRoutine_1553130(10);
    *(_DWORD*)(v1 + 816) = 10;
    *(_BYTE*)(v1 + 820) = 1;
  }
  return result;
}

__int64 TelopCalendarRemind_Unknown44(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int8* v11;
  unsigned int v12;
  bool v13;
  int v14;
  __int64 v16;
  __int64 v17;

  result = ui_LayoutAccessor_IsPaneVisible(a1 + 168, "A_KeyHelp");
  if ((result & 1) != 0) {
    goto LABEL_24;
  }
  GameRoutine_1560070(&v16, a1 + 168, "L_Remind_KeyHelp");
  if (v17 != 0) {
    v3 = std___1___shared_weak_count_lock(v17);
    v4 = v16;
    if (v17 != 0) {
      std___1___shared_weak_count___release_weak(v17);
    }
    if (v3 != 0 && v4 != 0) {
      GameRoutine_1374ee0((_QWORD*)a1, (__int64)"L_Remind_KeyHelp");
      GameRoutine_155cda0(a1 + 832, "In", 0);
      goto LABEL_9;
    }
    if (v3 != 0) {
    LABEL_9:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 168, "L_Remind_KeyHelp", 1);
  GameRoutine_1374cc0((_BYTE*)a1, 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 168, "A_KeyHelp", 1);
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock(v5);
    if (v6 != 0) {
      v7 = v6;
      v8 = *(_QWORD*)(a1 + 168);
      if (v8 != 0) {
        ControlCreator_13633c0(v8);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  result = ui_LayoutAccessor_FindAlignment(a1 + 168, "A_KeyHelp");
  if (result != 0) {
    Alignment_56b600();
    result = *(_QWORD*)(a1 + 176);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v9 = result;
        result = *(_QWORD*)(a1 + 168);
        if (result != 0) {
          result = ControlCreator_13633c0(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }

LABEL_24:
  v10 = *(_DWORD*)(game_g_game_setting + 952);
  if ((v10 & 1) != 0 ||
      *(_BYTE*)(a1 + 336) == 1 &&
          ((v10 & 2) != 0 || (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
    GameRoutine_155d940(a1 + 440);
    GameRoutine_155cda0(a1 + 440, "Out", 0);
    GameRoutine_155d940(a1 + 832);
    result = GameRoutine_155cda0(a1 + 832, "Out", 0);
    v11 = *(unsigned __int8**)(a1 + 16);
    if (v11 == nullptr) {
      goto LABEL_37;
    }
  LABEL_32:
    v12 = *v11;
    v13 = v12 > 0x10;
    v14 = (1 << v12) & 0x1CE00;
    if (!v13 && v14 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
    goto LABEL_37;
  }
  if ((v10 & 4) == 0) {
    return result;
  }
  GameRoutine_155d940(a1 + 440);
  GameRoutine_155cda0(a1 + 440, "Out", 0);
  GameRoutine_155d940(a1 + 832);
  GameRoutine_155cda0(a1 + 832, "Out", 0);
  result = GameRoutine_1712520(*(_QWORD*)(a1 + 32), 3, 0);
  v11 = *(unsigned __int8**)(a1 + 16);
  if (v11 != nullptr) {
    goto LABEL_32;
  }

LABEL_37:
  *(_WORD*)(a1 + 136) |= 8u;
  return result;
}

__int64 TelopCalendarRemind_Destructor(__int64 a1)
{
  GameRoutine_155ca60(a1 + 1008);
  GameRoutine_155ca60(a1 + 832);
  return GameRoutine_1386f80(a1);
}

__int64 TelopCalendarRemind_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  GameRoutine_155ca60(a1 + 1008);
  GameRoutine_155ca60(a1 + 832);
  GameRoutine_1386f80(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
