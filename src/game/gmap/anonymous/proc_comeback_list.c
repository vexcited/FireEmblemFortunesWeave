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
_QWORD* game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke_alt1(
    _QWORD* result,
    unsigned int* a2) __asm__("game_gmap_anonymous_ProcComebackList_"
                              "AddItemList_closure_Invoke");
__int64 game_gmap_anonymous_ProcComebackList_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2);
_QWORD* game_16f1350(_QWORD*, __int64, char);
bool LegionPool_9374e0(_QWORD*, __int64);
extern __int64 (*GameData_20a2560[])();
extern __int64 GameData_21f4280;
extern __int64 GameData_225e7a0;
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 ProcComebackList_Unknown124(_QWORD* a1);
__int64 ProcComebackList_Unknown128(_QWORD* a1);
__int64 GameHr_16f0e40(__int64, __int64);
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke(
    __int64 a1, unsigned int* a2);

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

__int64 ProcComebackList_Unknown124(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  bool v15;
  char v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    goto LABEL_2;
  }
  v3 = (__int64*)a1[74];
  v4 = (__int64*)a1[75];
  if (v3 == v4) {
    goto LABEL_43;
  }
  do {
    while (1) {
      v5 = *v3;
      if (*v3 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
        break;
      }
      if (++v3 == v4) {
        goto LABEL_43;
      }
    }
    v15 = v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
    v16 = v15;
    if (v15) {
      break;
    }
    ++v3;
  } while (v3 != v4);
  if ((v16 & 1) != 0) {
  LABEL_2:
    v2 = 0;
  }
  else {
  LABEL_43:
    v2 = GameData_225e7a0;
    if (GameData_225e7a0 != 0) {
      v2 = *(_BYTE*)(GameData_225e7a0 + 408);
    }
  }
  return v2 & 1;
}

__int64 ProcComebackList_Unknown128(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  int v6;

  game_16f1350(a1, 0, 1);
  v6 = 0;
  v4_.v4[0] = GameData_20a2560;
  v4_.v4[1] = a1;
  v4_.v4[2] = &v6;
  v4_.v5 = v4_.v4;
  LegionPool_9374e0(*(_QWORD**)(GameData_21f4280 + 8), (__int64)v4_.v4);
  result = (__int64)v4_.v5;
  if (v4_.v5 == v4_.v4) {
    v3 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
}

void game_gmap_anonymous_ProcComebackList_AddItemList_closure_Invoke(
    __int64 a1, unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  unsigned int v6;
  __int64* v7;
  _QWORD* v9;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

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
    v9 = *(_QWORD**)(a1 + 8);
    v18_.v18[0] = v6;
    v18_.v18[1] = 0;
    v18_.v19 = &GameData_1a9f09e;
    if (SpotMgr_132ffa0_alt1(v18_.v18) != 0) {
      v11 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v12 = 0;
      v13 = **(_DWORD**)(a1 + 16);
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
        v18_.v19 = &GameData_1a9f09e;
        v18_.v18[0] = v16;
        v18_.v18[1] = 0;
        v12 = SpotMgr_132ffa0_alt1(v18_.v18);
      }
      *(_BYTE*)(v11 + 83) = GameHr_16f0e40(v15, v12);
      BasicMenuCursor_16e0c00_alt1(v9, v11);
      ++**(_DWORD**)(a1 + 16);
    }
  }
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
