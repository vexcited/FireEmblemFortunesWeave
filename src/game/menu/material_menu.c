#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_1843070(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*game_menu_MaterialMenuItem_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_20f40e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20f47b8[5];
__int64 MaterialMenu_18706d0_alt1(__int64 a1) __asm__("MaterialMenu_18706d0");
__int64 MaterialMenu_1870800(_QWORD* a1);
__int64 game_menu_MaterialMenu_OnInit_lambda0_Invoke(__int64 a1, __int64* a2,
                                                     unsigned __int8* a3);
__int64 game_menu_MaterialMenu_AddItemList_lambda0_Invoke(__int64 a1, int* a2);
bool game_menu_MaterialMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                         _QWORD* a2);
__int64 game_menu_MaterialMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2,
                                                            _QWORD* a3);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void MaterialMenu_18706d0(__int64 a1);

void MaterialMenu_18706d0(__int64 a1)
{
  int v1;
  __int64 v3;
  unsigned __int8 v4;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  v1 = *(unsigned __int8*)(a1 + 1064);
  if (v1 == 6) {
    v1 = *(_DWORD*)(a1 + 660);
    v3 = *(_QWORD*)(a1 + 672);
    if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v3) >> 2)) {
      v1 = *(_DWORD*)(v3 + 4LL * v1);
    }
  }
  v4 = v1 - 1;
  if (v4 > 4u) {
    v5 = "MID_Menu_All";
  }
  else {
    v5 = GameData_20f47b8[v4];
  }
  v6 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v5, 0);
  if (v6 != nullptr) {
    v7 = (__int64)v6;
    v8 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 952),
                                            (__int64)"T_Title");
    if (v8 != 0) {
      GameRoutine_156c5d0_alt1(v8, v7, 0);
    }
  }
}

__int64 MaterialMenu_1870800(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20f40e0, 0);
    if (result != 0) {
      v3 = result;
      v4 = (*(__int64 (**)(_QWORD*))(*a1 + 1112LL))(a1);
      v5 = LayoutAccessor_155fbe0(a1 + 106, v4);
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d2910(v5, v6);
    }
  }
  return result;
}

__int64 game_menu_MaterialMenu_OnInit_lambda0_Invoke(__int64 a1, __int64* a2,
                                                     unsigned __int8* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *(unsigned __int8*)(v3 + 1064);
  if (v5 == 6) {
    v6 = *a3;
  }
  else {
    v6 = v5;
  }
  return GameRoutine_1843070(v4, v6);
}

__int64 game_menu_MaterialMenu_AddItemList_lambda0_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_menu_MaterialMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

bool game_menu_MaterialMenu_SortAndFilter_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 8);
  return v2 == 32 ||
         v2 == *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                         64) +
                                              8LL * *(unsigned __int16*)(*(
                                                        __int64 (**)(_QWORD))(
                                                        *(_QWORD*)*a2 + 560LL))(
                                                        *a2)) +
                                   73LL);
}

__int64 game_menu_MaterialMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2,
                                                            _QWORD* a3)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(a1 + 8) + 1144LL))(*(_QWORD*)(a1 + 8), *a2, *a3);
}

#pragma GCC visibility pop
