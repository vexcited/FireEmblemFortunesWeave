#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1657240(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131ac8[5];
__int64 ProcComebackList_Destructor(_QWORD* a1);
__int64 ProcComebackList_DeletingDestructor(_QWORD* a1);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_16f0e40(__int64, __int64);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_ComebackMenuItem_vtable[])();
extern __int64 GameData_212cf80[5];
extern __int64* GameData_212c780;
extern __int64* GameData_212ceb0;
extern char GameData_1a9f09e;
_QWORD* game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke(
    _QWORD* result, unsigned int* a2);
__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2);

__int64 ProcComebackList_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  a1[133] = GameData_2131ac8[0] + 2;
  v2 = a1[142];
  a1[142] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  if (a1[138] != 0) {
    GameRoutine_1657240(a1 + 138);
    v3 = a1[138];
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = a1[135];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcComebackList_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  a1[133] = GameData_2131ac8[0] + 2;
  v2 = a1[142];
  a1[142] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[138] != 0) {
    GameRoutine_1657240(a1 + 138);
    v4 = a1[138];
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
    }
  }
  v6 = a1[135];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

_QWORD* game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke(
    _QWORD* result, unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  __int64* v7;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _DWORD v18[2];
  char* v19;

  v2 = *a2;
  v3 = GameData_212cf80[0];
  v4 = GameData_212ceb0;
  v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8LL * (unsigned int)v2);
  if ((int)v2 < 0) {
    v5 = GameData_212ceb0;
  }
  v6 = *((_DWORD*)v5 + 1);
  v7 = GameData_212c780;
  if (v6 != 0 && *GameData_212c780 != 0) {
    v9 = (_QWORD*)result[1];
    v10 = result;
    v18[0] = v6;
    v18[1] = 0;
    v19 = &GameData_1a9f09e;
    result = (_QWORD*)SpotMgr_132ffa0(v18);
    if (result != nullptr) {
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v12 = 0;
      v13 = *(_DWORD*)v10[2];
      *(_DWORD*)(v11 + 80) = 16843009;
      *(_WORD*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_BYTE*)(v11 + 84) = 0;
      *(_DWORD*)(v11 + 40) = v2;
      v14 = *v7;
      *(_DWORD*)(v11 + 88) = v13;
      *(_QWORD*)v11 = game_gmap_anonymous_ComebackMenuItem_vtable;
      *(_QWORD*)(v11 + 8) = 0;
      if ((int)v2 >= 0) {
        v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 48LL) + 8 * v2;
      }
      else {
        v15 = (__int64)v4;
      }
      v16 = *(_DWORD*)(v15 + 4);
      if (v16 != 0 && v14 != 0) {
        v19 = &GameData_1a9f09e;
        v18[0] = v16;
        v18[1] = 0;
        v12 = SpotMgr_132ffa0(v18);
      }
      *(_BYTE*)(v11 + 83) = GameRoutine_16f0e40(v15, v12);
      result = BasicMenuCursor_16e0c00(v9, v11);
      ++*(_DWORD*)v10[2];
    }
  }
  return result;
}

__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2)
{
  unsigned __int8* v2;
  int* v3;
  int v4;
  unsigned __int8 v5;

  v2 = *a2;
  v3 = *(int**)(a1 + 8);
  if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) !=
      0) {
    v4 = v3[v2[83]];
  }
  else {
    if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v2 + 576LL))(v2) & 1) ==
        0) {
      v5 = v2[84];
      return v5 & 1;
    }
    v4 = *v3;
  }
  v5 = v4 > 0;
  return v5 & 1;
}

#pragma GCC visibility pop
