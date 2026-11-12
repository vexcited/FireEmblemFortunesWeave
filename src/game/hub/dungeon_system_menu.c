#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_anonymous_SystemMenuItem_Info_Hub_vtable[])();
extern __int64 (
    *game_hub_anonymous_SystemMenuItem_Inventory_Dungeon_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char game_facility_g_unknown_2174af0;
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64 DungeonSystemMenu_Destructor_alt1(__int64 a1) __asm__(
    "DungeonSystemMenu_Destructor");
__int64 DungeonSystemMenu_DeletingDestructor_alt1(__int64 a1) __asm__(
    "DungeonSystemMenu_DeletingDestructor");
_QWORD* DungeonSystemMenu_Unknown143(__int64 a1);
_QWORD* DungeonSystemMenu_Unknown144(__int64 a1);
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DungeonSystemMenu_Destructor(__int64 a1);
void DungeonSystemMenu_DeletingDestructor(__int64 a1);

void DungeonSystemMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1080);
  game_facility_g_unknown_2174af0 = 1;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 1088) = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    a1 = v2;
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1(a1);
}

void DungeonSystemMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 1080);
  game_facility_g_unknown_2174af0 = 1;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1088) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, a1);
}

_QWORD* DungeonSystemMenu_Unknown143(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v4 = *(_QWORD*)(a1 + 1080);
  v5 = (_QWORD*)v3;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_BYTE*)(v3 + 17) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_hub_anonymous_SystemMenuItem_Inventory_Dungeon_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  *(_DWORD*)(v3 + 88) = *(_DWORD*)(a1 + 1072);
  v6 = *(_QWORD*)(a1 + 1088);
  v7 = v6 - v4;
  if (v6 != v4) {
    if (v7 < 0) {
      GameRoutine_688200(v3);
    }
    v8 = fw_memory_HeapManager_Allocate(*v2, v6 - v4, 16, 0);
    v9 = v8 + v7;
    v5[12] = v8;
    v5[14] = v8 + v7;
    memcpy(v8, v4, v7);
    v5[13] = v9;
  }
  return v5;
}

_QWORD* DungeonSystemMenu_Unknown144(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v4 = *(_QWORD*)(a1 + 1080);
  v5 = (_QWORD*)v3;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_BYTE*)(v3 + 17) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_hub_anonymous_SystemMenuItem_Info_Hub_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  *(_DWORD*)(v3 + 88) = *(_DWORD*)(a1 + 1072);
  v6 = *(_QWORD*)(a1 + 1088);
  v7 = v6 - v4;
  if (v6 != v4) {
    if (v7 < 0) {
      GameRoutine_688200(v3);
    }
    v8 = fw_memory_HeapManager_Allocate(*v2, v6 - v4, 16, 0);
    v9 = v8 + v7;
    v5[12] = v8;
    v5[14] = v8 + v7;
    memcpy(v8, v4, v7);
    v5[13] = v9;
  }
  return v5;
}

#pragma GCC visibility pop
