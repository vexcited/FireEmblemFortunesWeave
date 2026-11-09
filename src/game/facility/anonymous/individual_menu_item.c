#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_947af0(void);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_sound_PlayListRightSe(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 (*game_facility_anonymous_IndividualMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
extern int game_script_hub_ui_g_talk_result;
__int64 IndividualMenuItem_Destructor_1935f60(__int64 a1);
__int64 IndividualMenuItem_DeletingDestructor(__int64 a1);
__int64 IndividualMenuItem_Unknown25(__int64 a1);
__int64 IndividualMenuItem_Unknown39(__int64 a1, char a2);

bool IndividualMenuItem_Unknown6()
{
  return (unsigned int)GameRoutine_947af0() < 0x400000;
}

__int64 IndividualMenuItem_Destructor_1935f60(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_anonymous_IndividualMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 IndividualMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_facility_anonymous_IndividualMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
}

__int64 IndividualMenuItem_Unknown25(__int64 a1)
{
  unsigned int v1;

  v1 = 1;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 312LL))(a1, 1) & 1) !=
      0) {
    game_sound_PlayListRightSe();
    return 13;
  }
  return v1;
}

__int64 IndividualMenuItem_Unknown39(__int64 a1, char a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 v9;
  long double v10;
  double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(int*)(a1 + 40);
  v4 = GameData_212dcd0;
  v5 = *GameData_212dcd0;
  if ((a2 & 1) == 0 && *(int*)(*(_QWORD*)(v5 + 72) + 4 * v2) > 2) {
    return 0;
  }
  v6 = *(unsigned __int8*)(a1 + 112);
  if (v6 <= 1) {
    v7 = 1;
  }
  else {
    v7 = *(unsigned __int8*)(a1 + 112);
  }
  if (v6 <= 2) {
    v8 = v7 + 1;
  }
  else {
    v8 = 1;
  }
  *(_BYTE*)(a1 + 112) = v8;
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 48) + 8 * v2) + 392LL);
  if (v9 != 0) {
    game_VariableManager_SetFlag(*(_QWORD*)(v9 + 24) + 1352LL,
                                 (unsigned __int8)v8);
    v5 = *v4;
    v2 = *(int*)(a1 + 40);
  }
  *(_DWORD*)(*(_QWORD*)(v5 + 72) + 4 * v2) = v8;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
  v12 = *(_QWORD*)(a1 + 104);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 96);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v14 = std___1___shared_weak_count_lock(v10, v11);
    if (v14 != 0) {
      v15 = v14;
      if (v13 != 0) {
        GameRoutine_159e7c0(v13, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
    std___1___shared_weak_count___release_weak(v12);
  }
  return 1;
}

#pragma GCC visibility pop
