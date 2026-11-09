#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(void);
__int64 game_menu_SubMenu_Unknown96(void);
extern _UNKNOWN GameData_1a96902;
extern __int64 (*game_menu_anonymous_SubArtsMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubDeployMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubExchangeMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubSkillMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubTransportMenuItem_vtable[])();
extern __int64 GameData_20d4ad0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 UnitSubMenu_Unknown88(__int64 a1);
__int64 UnitSubMenu_Unknown96(__int64 a1);
__int64 UnitSubMenu_Unknown128(__int64 result);
__int64 UnitSubMenu_Unknown142(__int64 a1, __int64 a2);

__int64 UnitSubMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE v5[4];
  int v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20d4ad0, 0);
    if (result != 0 && *(_QWORD*)(a1 + 1232) != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 568LL))(result);
      v4 = *(_QWORD*)(a1 + 1232);
      v5[0] = 0;
      if (v4 == 0) {
        GameRoutine_60a310(0, v3);
      }
      return (*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)v4 + 48LL))(
          v4, &v6, v5);
    }
  }
  return result;
}

__int64 UnitSubMenu_Unknown96(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5[4];
  int v6;

  game_menu_SubMenu_Unknown96();
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20d4ad0, 0);
    if (result != 0 && *(_QWORD*)(a1 + 1232) != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 568LL))(result);
      v4 = *(_QWORD*)(a1 + 1232);
      v5[0] = 1;
      if (v4 == 0) {
        GameRoutine_60a310(0, v3);
      }
      return (*(__int64 (**)(__int64, int*, char*))(*(_QWORD*)v4 + 48LL))(
          v4, &v6, v5);
    }
  }
  return result;
}

__int64 UnitSubMenu_Unknown128(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  _QWORD* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  char v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  _QWORD v30[2];

  if (*(_QWORD*)(result + 1136) != 0) {
    v1 = result;
    v30[1] = &GameData_1a96902;
    v30[0] = game_HashString(&GameData_1a96902);
    if (game_GameModeData_instance_ != 0 &&
        (v2 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v30)) != 0) {
      if (*(_DWORD*)(v2 + 32) != 0) {
        v3 = 16;
      }
      else {
        v3 = 31;
      }
    }
    else {
      v3 = 31;
    }
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (*(_BYTE*)(v1 + 1248) != 0) {
      v5 = v3;
    }
    else {
      v5 = v3 & 0xFD;
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        160, 16, 0);
    v7 = *(_QWORD*)(v1 + 1136);
    *(_WORD*)(v6 + 16) = 0;
    *(_DWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 80) = 257;
    *(_BYTE*)(v6 + 82) = v5 & 1;
    *(_QWORD*)(v6 + 144) = v7;
    *(_QWORD*)v6 = game_menu_anonymous_SubTransportMenuItem_vtable;
    *(_QWORD*)(v6 + 8) = 0;
    *(_BYTE*)(v6 + 152) = *(_BYTE*)(v1 + 1249);
    GameRoutine_16e0c00(v1, v6);
    v8 = fw_memory_HeapManager_Allocate(*v4, 208, 16, 0);
    v9 = *(_QWORD*)(v1 + 1136);
    v10 = v8;
    *(_WORD*)(v8 + 16) = 0;
    *(_DWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_WORD*)(v8 + 80) = 257;
    *(_QWORD*)(v8 + 128) = 0;
    *(_BYTE*)(v8 + 152) = 0;
    *(_BYTE*)(v8 + 82) = 1;
    *(_QWORD*)(v8 + 144) = v9;
    v11 = *(_QWORD*)(v1 + 1184);
    *(_QWORD*)v10 = game_menu_anonymous_SubExchangeMenuItem_vtable;
    *(_QWORD*)(v10 + 8) = 0;
    if (v11 != 0) {
      if (v11 == v1 + 1152) {
        *(_QWORD*)(v10 + 192) = v10 + 160;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
      }
      else {
        *(_QWORD*)(v10 + 192) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      }
    }
    else {
      *(_QWORD*)(v10 + 192) = 0;
    }
    v12 = GameRoutine_820d50(14);
    v14 = game_GameModeData_instance_ == 0 ||
          (v13 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) == 0 ||
          *(_DWORD*)(v13 + 32) == 0;
    *(_BYTE*)(v10 + 81) = v14;
    v15 = *(_BYTE*)(v1 + 1249);
    v16 = *(unsigned __int8*)(v1 + 1250);
    *(_BYTE*)(v10 + 82) = (v5 & 2) != 0;
    *(_BYTE*)(v10 + 152) = v15;
    result = GameRoutine_16e0c00(v1, v10);
    if (v16 != 1) {
    LABEL_32:
      if ((*(_BYTE*)(v1 + 1249) & 1) != 0) {
      LABEL_47:
        *(_BYTE*)(v1 + 1250) = 0;
        return result;
      }
      v18 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
      v19 = *(_QWORD*)(v1 + 1136);
      *(_WORD*)(v18 + 16) = 0;
      *(_DWORD*)(v18 + 40) = 0;
      *(_QWORD*)(v18 + 48) = 0;
      *(_QWORD*)(v18 + 56) = 0;
      *(_QWORD*)(v18 + 64) = 0;
      *(_QWORD*)(v18 + 72) = 0;
      *(_QWORD*)(v18 + 128) = 0;
      *(_BYTE*)(v18 + 152) = 0;
      *(_WORD*)(v18 + 80) = 257;
      *(_QWORD*)(v18 + 144) = v19;
      *(_QWORD*)v18 = game_menu_anonymous_SubSkillMenuItem_vtable;
      *(_QWORD*)(v18 + 8) = 0;
      *(_BYTE*)(v18 + 82) = (v5 & 4) != 0;
      GameRoutine_16e0c00(v1, v18);
      v20 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
      v21 = *(_QWORD*)(v1 + 1136);
      *(_WORD*)(v20 + 16) = 0;
      *(_DWORD*)(v20 + 40) = 0;
      *(_QWORD*)(v20 + 48) = 0;
      *(_QWORD*)(v20 + 56) = 0;
      *(_QWORD*)(v20 + 64) = 0;
      *(_QWORD*)(v20 + 72) = 0;
      *(_WORD*)(v20 + 80) = 257;
      *(_QWORD*)(v20 + 128) = 0;
      *(_BYTE*)(v20 + 152) = 0;
      *(_QWORD*)(v20 + 144) = v21;
      *(_QWORD*)v20 = game_menu_anonymous_SubArtsMenuItem_vtable;
      *(_QWORD*)(v20 + 8) = 0;
      *(_BYTE*)(v20 + 82) = (v5 & 8) != 0;
      GameRoutine_16e0c00(v1, v20);
      v22 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
      v23 = *(_QWORD*)(v1 + 1136);
      v24 = (_BYTE*)v22;
      *(_WORD*)(v22 + 16) = 0;
      *(_DWORD*)(v22 + 40) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_QWORD*)(v22 + 128) = 0;
      *(_BYTE*)(v22 + 80) = 1;
      *(_QWORD*)v22 = game_menu_anonymous_SubDeployMenuItem_vtable;
      *(_QWORD*)(v22 + 8) = 0;
      *(_QWORD*)(v22 + 144) = v23;
      if (v23 != 0) {
        if (*(_BYTE*)(*(_QWORD*)(v23 + 400) + 96LL) == 1) {
          v25 = GameRoutine_820d50(7);
          if ((game_GameModeData_instance_ == 0 ||
               (v26 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v25)) == 0 ||
               *(_DWORD*)(v26 + 32) == 0) &&
              (GameRoutine_822320(3) & 1) != 0) {
            v27 = 1;
          LABEL_46:
            v24[81] = v27;
            v24[82] = 1;
            v24[152] = 0;
            result = GameRoutine_16e0c00(v1, v24);
            goto LABEL_47;
          }
        }
        if (*(_BYTE*)(*(_QWORD*)(v23 + 400) + 96LL) == 2) {
          v28 = GameRoutine_820d50(6);
          if (game_GameModeData_instance_ == 0 ||
              (v29 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v28)) == 0 ||
              *(_DWORD*)(v29 + 32) == 0) {
            v27 = 1;
            if ((GameRoutine_822320(1) & 1) != 0) {
              goto LABEL_46;
            }
          }
        }
      }
      v27 = 0;
      goto LABEL_46;
    }
    result = *(_QWORD*)(v1 + 336);
    if (result != v10) {
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
      }
      *(_QWORD*)(v1 + 336) = v10;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v1, 0, 1, 0);
      result = *(_QWORD*)(v1 + 336);
      if (result == 0) {
        v17 = 4;
      LABEL_31:
        *(_DWORD*)(v1 + 356) = *(_DWORD*)(v1 + 356) & 0xFFFFFFFB | v17;
        goto LABEL_32;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v1 + 336);
    }
    v17 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v17 = 4;
      }
      else {
        v17 = 0;
      }
    }
    goto LABEL_31;
  }
  return result;
}

__int64 UnitSubMenu_Unknown142(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;

  if (a2 != 0) {
    v3 = __dynamic_cast(a2, GameData_212e008[0], GameData_212e0c8[0], 0);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 88);
      if (v4 != 0) {
        *(_QWORD*)(a1 + 1136) = v4;
      }
    }
  }
  return game_menu_BasicMenu_Unknown16defa0();
}

#pragma GCC visibility pop
