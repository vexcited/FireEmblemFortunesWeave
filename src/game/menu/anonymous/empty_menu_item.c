#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15b7780(void);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EmptyMenuItem_Unknown55_1710fc0(__int64 a1);
__int64 EmptyMenuItem_OnSelect(__int64 a1);
__int64 EmptyMenuItem_Unknown55_17b04a0(__int64 a1);
__int64 EmptyMenuItem_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");

__int64 EmptyMenuItem_Unknown55_1710fc0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 48);
      if (result != 0) {
        result = GameRoutine_1562cf0(result, "Action");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 EmptyMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  LayoutAccessor_1560070((void*)(&v6_.v6),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                         "L_UnitInfoDetail");
  result = v6_.v7;
  if (v6_.v7 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v6_.v7);
    v5 = v6_.v6;
    result = v6_.v7;
    if (v6_.v7 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v6_.v7);
    }
    if (v4 != 0 && v5 != 0) {
      result = LayoutAccessor_155e830(v5, 0);
    }
    else if (v4 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  return result;
}

__int64 EmptyMenuItem_Unknown55_17b04a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  const char* v6;

  GameRoutine_15b7780();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 48), "ItemStock", 0);
        v5 = *(_DWORD*)(a1 + 100);
        if (v5 < 0) {
          v6 = "InfoOff";
        }
        else {
          v6 = (const char*)game_util_Format("Info%02d", v5);
        }
        result = GameRoutine_1562cf0(v3, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 EmptyMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 112);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

#pragma GCC visibility pop
