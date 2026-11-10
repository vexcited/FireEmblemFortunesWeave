#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_211e058[])();
extern __int64 (*GameData_211e648[])();
extern __int64 (
    *game_facility_anonymous_ObeliskDepositoryLegionMenuItem_vtable[])();
extern __int64 GameData_211e030;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca060;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f4290;
extern __int64 GameData_21f4298;
extern __int64 GameData_21f42a8;
extern __int64 GameData_21f42b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern char* GameData_211e868[14];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcObeliskDepositoryLegionMenu_Destructor(__int64 a1);
const char* ProcObeliskDepositoryLegionMenu_Unknown43(__int64 a1, char a2);
__int64 ProcObeliskDepositoryLegionMenu_Unknown88(__int64 a1);
__int64 game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl(
    _QWORD* a1);
__int64 ProcObeliskDepositoryLegionMenu_Unknown140(__int64 a1);
__int64
game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_facility_anonymous_ProcObeliskDepositoryLegionMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2);
bool game_facility_anonymous_ProcObeliskDepositoryLegionMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);

__int64 ProcObeliskDepositoryLegionMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = GameData_21f42b0;
  v2 = GameData_21f4298;
  v3 = GameData_21f42b0 - 1 + GameData_21f42a8;
  v4 = v3 >> 9;
  v5 = v3 & 0x1FF;
  v6 = ((GameData_21f4298 - GameData_21f4290) << 6) - 1;
  if (GameData_21f4298 == GameData_21f4290) {
    v6 = 0;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21f4290 + 8 * v4) + 8 * v5);
  --GameData_21f42b0;
  GameData_21f4280 = v7;
  if ((unsigned __int64)(v6 - (v1 + GameData_21f42a8) + 1) >= 0x400) {
    if (*(_QWORD*)(GameData_21f4298 - 8) != 0) {
      v8 = a1;
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v9);
      v2 = GameData_21f4298;
      a1 = v8;
    }
    GameData_21f4298 = v2 - 8;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

const char* ProcObeliskDepositoryLegionMenu_Unknown43(__int64 a1, char a2)
{
  if ((unsigned __int8)(a2 - 1) > 9u) {
    return "MID_Menu_Default";
  }
  else {
    return GameData_211e868[(unsigned __int8)(a2 - 1)];
  }
}

__int64 ProcObeliskDepositoryLegionMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211e030, 0);
    if (result != 0) {
      v3 = result;
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d32c0(v4, v5, 0);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  v3 = a1[29];
  v2 = a1[30];
  v4 = v12;
  v12[0] = GameData_211e058;
  v13 = v12;
  if (v2 == v3) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_211e030, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v14 = v8;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, v9);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v14) & 1) !=
          0) {
        break;
      }
      v3 = a1[29];
      v2 = a1[30];
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v13;
  if (v13 != v12) {
    if (v13 != nullptr) {
      v10 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v10 = 32;
LABEL_13:
  (*(void (**)(_QWORD*))(*v4 + v10))(v4);
LABEL_14:
  game_menu_BasicMenu_Unknown96(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    return (*(__int64 (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return result;
}

__int64 ProcObeliskDepositoryLegionMenu_Unknown140(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211e030, 0);
    if (result != 0) {
      v3 = result;
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d32c0(v4, v5, 0);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 84LL) = 1;
  return 0;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v2);
  if ((int)v2 < 0) {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 != 0) {
    v4 = *(_QWORD*)(result + 8);
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    v7 = *(_QWORD*)(v4 + 1064);
    v8 = **(_DWORD**)(v5 + 16);
    *(_WORD*)(v6 + 80) = 257;
    *(_WORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 40) = v2;
    *(_BYTE*)(v6 + 82) = 1;
    *(_DWORD*)(v6 + 84) = 1;
    *(_QWORD*)v6 =
        game_facility_anonymous_ObeliskDepositoryLegionMenuItem_vtable;
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 88) = GameData_211e648;
    *(_QWORD*)(v6 + 96) = v7;
    *(_DWORD*)(v6 + 104) = v8;
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++**(_DWORD**)(v5 + 16);
  }
  return result;
}

bool game_facility_anonymous_ProcObeliskDepositoryLegionMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(unsigned __int8*)(a1 + 8);
  v3 = *(unsigned __int8*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v2 == 0) {
    return (_DWORD)v3 != 0;
  }
  v4 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) + 8 * v3) + 64LL);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 250);
    if (v5 <= 9) {
      if (v5 == 7) {
        LODWORD(v4) = 1;
        return v2 == (_DWORD)v4;
      }
      if (v5 != 8) {
        goto LABEL_17;
      }
      LODWORD(v4) = 2;
    }
    else {
      if (v5 != 10 && v5 != 31) {
        if (v5 == 42) {
          LODWORD(v4) = 4;
          return v2 == (_DWORD)v4;
        }
      LABEL_17:
        LODWORD(v4) = 0;
        return v2 == (_DWORD)v4;
      }
      LODWORD(v4) = 3;
    }
  }
  return v2 == (_DWORD)v4;
}

#pragma GCC visibility pop
