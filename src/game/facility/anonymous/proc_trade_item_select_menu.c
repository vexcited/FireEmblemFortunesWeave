#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1866b00(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aac088;
extern _UNKNOWN GameData_1ab8d4c;
extern __int64 (*GameData_20a4a80[])();
extern __int64 (*GameData_20a4b10[])();
extern __int64 (*game_facility_anonymous_ShopMenuItem_Trade_vtable[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20a4b80[];
extern char* GameData_20a4bb8[];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void* ProcTradeItemSelectMenu_Unknown67(__int64 a1);
__int64 ProcTradeItemSelectMenu_Unknown85(__int64 a1);
__int64 ProcTradeItemSelectMenu_Unknown148(_QWORD* a1, __int64 a2, char a3);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1842ee0(_QWORD);
__int64 GameRoutine_1843070(_QWORD, _QWORD);
__int64 GameRoutine_1866680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 (*GameData_20a4800[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
__int64 game_facility_anonymous_ProcTradeItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, __int64* a2, int* a3);
_QWORD*
game_facility_anonymous_ProcTradeItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_17001a0(
    __int64 a1, _QWORD* a2);
__int64
game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_1700340(
    int a1, __int64* a2, __int64* a3);
bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure0_Invoke(
    __int64 a1, _QWORD* a2);
__int64 game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure0_Invoke(
    __int64 a1, __int64 a2);

void* ProcTradeItemSelectMenu_Unknown67(__int64 a1)
{
  __int64 v2;

  if ((*(_BYTE*)(a1 + 1152) & 1) != 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(a1 + 1064);
  if (v2 != 0 && *(_BYTE*)(*(_QWORD*)(v2 + 24) + 64LL) == 7) {
    return &GameData_1aac088;
  }
  else {
    return &GameData_1ab8d4c;
  }
}

__int64 ProcTradeItemSelectMenu_Unknown85(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char** v6;
  const char* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[4];
  int v12;
  int v13;
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
  __int64 v25;
  __int64 v26;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = *(_QWORD*)(a1 + 1072);
  if (v4 == *(_QWORD*)(a1 + 1080) ||
      (LODWORD(v5) = *(_DWORD*)(v4 + 4LL * v1), (_DWORD)v5 == 0)) {
    v7 = "MID_Menu_All";
    goto LABEL_13;
  }
  if ((int)v5 > 7) {
    LOBYTE(v5) = v5 - 9;
    if ((unsigned __int8)v5 <= 4u) {
      v5 = (unsigned __int8)v5;
      v6 = GameData_20a4bb8;
      goto LABEL_11;
    }
  }
  else {
    LOBYTE(v5) = v5 - 1;
    if ((unsigned __int8)v5 <= 6u) {
      v5 = (unsigned __int8)v5;
      v6 = GameData_20a4b80;
    LABEL_11:
      v7 = v6[v5];
      goto LABEL_13;
    }
  }
  v7 = "MID_Menu_All";

LABEL_13:
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v8 = *msg_MessageManager_instance__ptr[0];
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v11[0] = GameData_212e348 + 2;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v11[2] = 0xFFFF0004FFFF0002LL;
  v11[3] = 0xFFFF0006FFFF0005LL;
  v26 = 8;
  v12 = -65529;
  v13 = -65528;
  result = GameRoutine_a4dbe0(v8, v7, 0, v11);
  if (result != 0) {
    v10 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 848, "T_Title");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v10, 0);
    }
  }
  return result;
}

__int64 ProcTradeItemSelectMenu_Unknown148(_QWORD* a1, __int64 a2, char a3)
{
  __int64 (***v4)();
  unsigned int v5;
  char v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 i;
  __int64 (***v12)();
  _QWORD* v13;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  v4 = (__int64 (***)())a1[42];
  if (v4 != nullptr &&
      *v4 == game_facility_anonymous_ShopMenuItem_Trade_vtable) {
    v5 = a2;
    v6 = a3;
    GameRoutine_1866b00();
    a3 = v6;
    a2 = v5;
  }
  if ((game_menu_PageTab_Move(a1 + 82, a2, a3 & 1) & 1) == 0) {
    return 0;
  }
  v8 = v22;
  v22[0] = GameData_20a4a80;
  v10 = a1[32];
  v9 = a1[33];
  v23 = v22;
  if (v9 == v10) {
    goto LABEL_17;
  }
  for (i = 0; i < (v9 - v10) >> 3; ++i) {
    v12 = *(__int64 (****)())(v10 + 8 * i);
    if (v12 == nullptr ||
        *v12 != game_facility_anonymous_ShopMenuItem_Trade_vtable) {
      continue;
    }
    v13 = v23;
    v24 = *(_QWORD*)(v10 + 8 * i);
    if (v23 == nullptr) {
    LABEL_34:
      GameRoutine_60a310(v13, v7);
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24) & 1) !=
        0) {
      break;
    }
    v10 = a1[32];
    v9 = a1[33];
  }
  v8 = v23;
  if (v23 != v22) {
    if (v23 != nullptr) {
      v15 = 40;
      goto LABEL_18;
    }
    goto LABEL_19;
  }

LABEL_17:
  v15 = 32;

LABEL_18:
  (*(void (**)(_QWORD*))(*v8 + v15))(v8);

LABEL_19:
  game_menu_BasicMenu_Unknown16de4d0(a1);
  v16 = v22;
  v22[0] = GameData_20a4b10;
  v18 = a1[32];
  v17 = a1[33];
  v23 = v22;
  if (v17 == v18) {
    goto LABEL_30;
  }
  v19 = 0;
  while (2) {
    v20 = *(__int64 (****)())(v18 + 8 * v19);
    if (v20 == nullptr ||
        *v20 != game_facility_anonymous_ShopMenuItem_Trade_vtable) {
    LABEL_22:
      if (++v19 >= (unsigned __int64)((v17 - v18) >> 3)) {
        goto LABEL_27;
      }
      continue;
    }
    break;
  }
  v13 = v23;
  v24 = *(_QWORD*)(v18 + 8 * v19);
  if (v23 == nullptr) {
    goto LABEL_34;
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24) & 1) == 0) {
    v18 = a1[32];
    v17 = a1[33];
    goto LABEL_22;
  }

LABEL_27:
  v16 = v23;
  if (v23 != v22) {
    if (v23 != nullptr) {
      v21 = 40;
      goto LABEL_31;
    }
    return 13;
  }

LABEL_30:
  v21 = 32;

LABEL_31:
  (*(void (**)(_QWORD*))(*v16 + v21))(v16);
  return 13;
}

__int64 game_facility_anonymous_ProcTradeItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, __int64* a2, int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(v3 + 1072);
  if (v5 == *(_QWORD*)(v3 + 1080)) {
    v8 = 0;
  }
  else {
    v6 = *(_DWORD*)(v5 + 4LL * *a3);
    if (v6 <= 7) {
      return GameRoutine_1842ee0(v4);
    }
    v8 = (unsigned int)(v6 - 8);
  }
  return GameRoutine_1843070(v4, v8);
}

_QWORD*

game_facility_anonymous_ProcTradeItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  GameRoutine_1866680(v4, 0, *(_QWORD*)(v2 + 1064), a2,
                      *(unsigned __int8*)(v2 + 1152));
  *v4 = game_facility_anonymous_ShopMenuItem_Trade_vtable;
  v4[12] = GameData_20a4800;
  return BasicMenuCursor_16e0c00((_QWORD*)v2, (__int64)v4);
}

bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_17001a0(
    __int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int16* v5;
  __int64* v6;
  __int64 v7;
  int v8;

  if ((*(_BYTE*)(a1 + 9) & 1) != 0) {
    return true;
  }
  v3 = *a2;
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v5);
  if ((((0x10000000000LL << *(_BYTE*)(v7 + 72)) | (1LL << *(_BYTE*)(v7 + 73))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    return false;
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  return v8 ==
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                        8LL * *(unsigned __int16*)(*(
                                                  __int64 (**)(__int64))(
                                                  *(_QWORD*)v3 + 560LL))(v3)) +
                             72LL);
}

__int64

game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure_Invoke_1700340(
    int a1, __int64* a2, __int64* a3)
{
  __int64** v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)(_QWORD);
  __int64 v16;
  _QWORD* v17;
  _BOOL4 v18;
  __int64* v19;
  __int64* v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (*v29)(_QWORD);
  __int64 v30;
  _QWORD* v31;
  _BOOL4 v32;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD v37[2];
  int v38;
  _BOOL4 v39;
  char v40;
  _QWORD v41[2];
  int v42;
  _BOOL4 v43;
  char v44;

  v3 = *(__int64***)(*a2 + 120);
  v34 = *a3;
  v35 = *a2;
  v4 = *(_QWORD**)(*a3 + 120);
  v6 = *v3;
  v5 = v3[1];
  v36 = v4;
  if (v5 == *v3) {
    v18 = true;
  }
  else {
    v7 = 1;
    v8 = 0;
    do {
      v9 = *v6;
      v10 = *(_QWORD*)(*v6 + 24);
      v11 = *(_QWORD*)(v10 + 48);
      v12 = *(_QWORD*)(v10 + 56);
      if (v12 == v11) {
      LABEL_6:
        if (*(_BYTE*)(v9 + 107) != 0) {
          v8 += *(unsigned __int8*)(v9 + 107);
        }
        else {
          v7 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v11 != 0) {
            v13 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v14 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
              if (v14 != 0) {
                v15 = *(__int64 (**)(_QWORD))(v14 + 72);
                v16 = *(_QWORD*)(v14 + 80);
                v17 = (_QWORD*)(v14 + (v16 >> 1));
                if ((v16 & 1) != 0) {
                  v15 = *(__int64 (**)(_QWORD))((char*)v15 + *v17);
                }
                LOBYTE(a1) = v15(v17);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v11 + 16) != ((v13 == 0) | a1 & 1)) {
              break;
            }
          }
          v11 += 24;
          if (v11 == v12) {
            goto LABEL_6;
          }
        }
      }
      ++v6;
    } while (v6 != v5);
    if (v8 * v7 < 1) {
      v18 = true;
    }
    else {
      a1 = GameRoutine_8a1dc0(v3);
      v18 = a1 > 0;
    }
    v4 = v36;
  }
  v20 = (__int64*)*v4;
  v19 = (__int64*)v4[1];
  if (v19 == (__int64*)*v4) {
    v32 = true;
  }
  else {
    v21 = 1;
    v22 = 0;
    do {
      v23 = *v20;
      v24 = *(_QWORD*)(*v20 + 24);
      v25 = *(_QWORD*)(v24 + 48);
      v26 = *(_QWORD*)(v24 + 56);
      if (v26 == v25) {
      LABEL_27:
        if (*(_BYTE*)(v23 + 107) != 0) {
          v22 += *(unsigned __int8*)(v23 + 107);
        }
        else {
          v21 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v25 != 0) {
            v27 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v28 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v25);
              if (v28 != 0) {
                v29 = *(__int64 (**)(_QWORD))(v28 + 72);
                v30 = *(_QWORD*)(v28 + 80);
                v31 = (_QWORD*)(v28 + (v30 >> 1));
                if ((v30 & 1) != 0) {
                  v29 = *(__int64 (**)(_QWORD))((char*)v29 + *v31);
                }
                LOBYTE(a1) = v29(v31);
              }
              else {
                LOBYTE(a1) = 1;
              }
            }
            if (*(_BYTE*)(v25 + 16) != ((v27 == 0) | a1 & 1)) {
              break;
            }
          }
          v25 += 24;
          if (v25 == v26) {
            goto LABEL_27;
          }
        }
      }
      ++v20;
    } while (v20 != v19);
    v32 = v22 * v21 < 1 || (int)GameRoutine_8a1dc0(v36) > 0;
  }
  v42 = 0;
  v43 = v18;
  v44 = 1;
  v38 = 0;
  v39 = v32;
  v40 = 1;
  v41[0] = v35 + 128;
  v41[1] = 0;
  v37[0] = v34 + 128;
  v37[1] = 0;
  return GameRoutine_19ef8e0(v41, v37) & 1;
}

bool game_facility_anonymous_ProcTradeItemSelectMenu_SortAndFilter_closure0_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v3;
  unsigned __int16* v5;
  __int64* v6;
  __int64 v7;
  int v8;

  if ((*(_BYTE*)(a1 + 9) & 1) != 0) {
    return true;
  }
  v3 = *a2;
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v5);
  if ((((0x10000000000LL << *(_BYTE*)(v7 + 72)) | (1LL << *(_BYTE*)(v7 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    return false;
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  return v8 ==
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                        8LL * *(unsigned __int16*)(*(
                                                  __int64 (**)(__int64))(
                                                  *(_QWORD*)v3 + 560LL))(v3)) +
                             73LL);
}

__int64 game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure_Invoke(
    __int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 137LL) = 1;
  return 0;
}

__int64

game_facility_anonymous_ProcTradeItemSelectMenu_MoveToLR_closure0_Invoke(
    __int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 137LL) = 0;
  return 0;
}

#pragma GCC visibility pop
