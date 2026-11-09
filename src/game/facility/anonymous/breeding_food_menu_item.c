#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566d90(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_157af40(_QWORD, _QWORD);
__int64 GameRoutine_1843470(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_21f3ff8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 BreedingFoodMenuItem_Unknown25(_DWORD* a1);
__int64 BreedingFoodMenuItem_Unknown55(__int64 a1);
bool BreedingFoodMenuItem_Unknown58(__int64 a1);
__int64 BreedingFoodMenuItem_Unknown70(__int64 a1);

__int64 BreedingFoodMenuItem_Unknown25(_DWORD* a1)
{
  if (((*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  *(_DWORD*)(GameData_21f3ff8 + 20) = a1[10];
  if (game_gameui_Header_instance_ != 0) {
    GameRoutine_1566d90(game_gameui_Header_instance_, 0);
  }
  if (game_gameui_Footer_instance_ != 0) {
    GameRoutine_1567000(game_gameui_Footer_instance_, 0);
  }
  return 2;
}

__int64 BreedingFoodMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  _BOOL4 v7;
  bool v8;
  char v9;
  char* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  int* v23;
  unsigned int v24;
  __int64 v25;
  int* v26;
  int* v27;
  int v28;
  int v29;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_157af40(*(_QWORD*)(a1 + 48), *(unsigned int*)(a1 + 40));
        v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                       game_TransporterConst_List_instance__ptr
                                           [0] +
                                   8LL) +
                        8LL) +
             12LL * *(int*)(a1 + 40);
        v6 = GameData_212da30;
        v7 = *(unsigned __int16*)(v5 + 4) != 0;
        LODWORD(v5) = *(unsigned __int16*)(v5 + 2) == 0;
        v9 = v7 & v5;
        v8 = (v7 & (unsigned int)v5) == 0;
        v10 = (char*)GameData_212da30 + 64;
        if (v8) {
          v10 = (char*)GameData_212da30 + 36;
        }
        v11 = *(_DWORD*)v10;
        v12 = ui_LayoutAccessor_FindTextBox(v3, "T_Num");
        if (v12 != 0) {
          v13 = Pane_58f8a0(v12);
          if (v13 != 0) {
            *(_DWORD*)(v13 + 12) = v11;
          }
        }
        if ((v9 & 1) != 0) {
          v14 = 12;
        }
        else {
          v14 = 11;
        }
        if ((v9 & 1) != 0) {
          v15 = 18;
        }
        else {
          v15 = 9;
        }
        if (*(_BYTE*)(a1 + 83) != 0) {
          v16 = v14;
        }
        else {
          v16 = v15;
        }
        v17 = v6[v16];
        v18 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
        if (v18 != 0) {
          v19 = Pane_58f8a0(v18);
          if (v19 != 0) {
            *(_DWORD*)(v19 + 12) = v17;
          }
        }
        ui_LayoutAccessor_SetPaneVisible(v3, "N_Favor",
                                         *(unsigned __int8*)(a1 + 83));
        v20 = ui_LayoutAccessor_FindPane(v3, "IconFood");
        if (v20 != 0) {
          v21 =
              __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0], 0);
        }
        else {
          v21 = 0;
        }
        v22 = &v6[v14];
        v23 = &v6[v15];
        v24 = *(
            unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)(*(
                                                   __int64 (**)(__int64))(
                                                   *(_QWORD*)a1 + 560LL))(a1)) +
                              94LL);
        if (v24 < 3) {
          v25 = v24 + 1;
        }
        else {
          v25 = 0;
        }
        GameRoutine_1843470(v21, v25);
        if (v21 != 0) {
          if (*(_BYTE*)(a1 + 85) != 0) {
            v26 = v22;
          }
          else {
            v26 = v23;
          }
          v29 = *v26;
          (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v21 + 40LL))(v21, 0,
                                                                      &v29);
          (*(void (**)(__int64, __int64, int*))(*(_QWORD*)v21 + 40LL))(v21, 1,
                                                                       &v29);
          (*(void (**)(__int64, __int64, int*))(*(_QWORD*)v21 + 40LL))(v21, 2,
                                                                       &v29);
          (*(void (**)(__int64, __int64, int*))(*(_QWORD*)v21 + 40LL))(v21, 3,
                                                                       &v29);
        }
        if (*(_BYTE*)(a1 + 84) != 0) {
          v27 = v22;
        }
        else {
          v27 = v23;
        }
        v28 = *v27;
        result = ui_LayoutAccessor_FindTextBox(v3, "T_Taste");
        if (result != 0) {
          result = Pane_58f8a0(result);
          if (result != 0) {
            *(_DWORD*)(result + 12) = v28;
          }
        }
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

bool BreedingFoodMenuItem_Unknown58(__int64 a1)
{
  return *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * *(int*)(a1 + 40) + 2) != 0;
}

__int64 BreedingFoodMenuItem_Unknown70(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * *(int*)(a1 + 40) + 4;
}

#pragma GCC visibility pop
