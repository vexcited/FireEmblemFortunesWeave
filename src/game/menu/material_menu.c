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
__int64 MaterialMenu_18706d0(__int64 a1);
__int64 MaterialMenu_1870800(_QWORD* a1);
__int64 game_menu_MaterialMenu_OnInit_lambda0_Invoke(__int64 a1, __int64* a2,
                                                     unsigned __int8* a3);
__int64 game_menu_MaterialMenu_AddItemList_lambda0_Invoke(__int64 a1, int* a2);
bool game_menu_MaterialMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                         _QWORD* a2);
__int64 game_menu_MaterialMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2,
                                                            _QWORD* a3);

__int64 MaterialMenu_18706d0(__int64 a1)
{
  int v1;
  __int64 v3;
  unsigned __int8 v4;
  const char* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
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
  __int64 v23;
  __int64 v24;

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
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v9[0] = msg_TagSelector_vtable;
  v9[1] = 0xFFFF0001FFFF0000LL;
  v9[2] = 0xFFFF0004FFFF0002LL;
  v9[3] = 0xFFFF0006FFFF0005LL;
  v24 = 8;
  v10 = -65529;
  v11 = -65528;
  result = GameRoutine_a4dbe0(v6, v5, 0, v9);
  if (result != 0) {
    v8 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_Title");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v8, 0);
    }
  }
  return result;
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
