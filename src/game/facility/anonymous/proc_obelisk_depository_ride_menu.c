#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_185c7a0(void);
__int64 GameRoutine_1862240(_QWORD, _QWORD);
__int64 GameRoutine_1a06b90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_93cc20(_QWORD, _QWORD);
__int64 GameRoutine_9d0620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d0bc0(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_AnimalPoolMenu_Unknown148(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _QWORD GameData_1fae980[6];
extern __int64 (*GameData_1fb7800[])();
extern __int64 (*GameData_1fb7880[])();
extern __int64 (*GameData_1fb7ce8[])();
extern __int64 (
    *game_facility_anonymous_ObeliskDepositoryRideMenuItem_vtable[])();
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e098[12];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
const char* ProcObeliskDepositoryRideMenu_Unknown43(__int64 a1, char a2);
__int64 ProcObeliskDepositoryRideMenu_Unknown85(__int64 a1);
__int64 ProcObeliskDepositoryRideMenu_Unknown109(__int64 a1);
__int64 ProcObeliskDepositoryRideMenu_Unknown139(_QWORD* a1);
__int64 ProcObeliskDepositoryRideMenu_Unknown141(__int64 a1, __int64* a2);
__int64 ProcObeliskDepositoryRideMenu_Unknown148(__int64 a1, __int64 a2);
__int64 ProcObeliskDepositoryRideMenu_Unknown149(__int64 a1, __int64 a2,
                                                 __int64 a3, __int64 a4, int a5,
                                                 int a6);
__int64 ProcObeliskDepositoryRideMenu_Unknown151(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 RidePool_93d820(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212cf88[4];
__int64
game_facility_anonymous_ProcObeliskDepositoryRideMenu_ZRCall_closure_Invoke(
    __int64 a1);
__int64
game_facility_anonymous_ProcObeliskDepositoryRideMenu_OnAddItemList_closure_Invoke(
    __int64 a1, int* a2);

const char* ProcObeliskDepositoryRideMenu_Unknown43(__int64 a1, char a2)
{
  if (a2 == 1) {
    return "MID_Sys_Fragment";
  }
  else {
    return "MID_Menu_Default";
  }
}

__int64 ProcObeliskDepositoryRideMenu_Unknown85(__int64 a1)
{
  int v1;
  __int64 v2;
  const char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  int v9;
  int v10;
  __int64 v11;
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

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    LOBYTE(v1) = *(_BYTE*)(v2 + 4LL * v1);
  }
  if ((unsigned int)(unsigned __int8)v1 - 1 > 4) {
    v4 = "MID_Menu_All";
  }
  else {
    v4 = (const char*)GameData_1fae980[(unsigned __int8)v1];
  }
  GameRoutine_1562060(a1 + 952, "T_Type", v4);
  GameRoutine_1862240(a1, *(_QWORD*)(a1 + 1064));
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1216LL))(a1);
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v8[0] = GameData_212e348 + 2;
  v8[1] = 0xFFFF0001FFFF0000LL;
  v8[2] = 0xFFFF0004FFFF0002LL;
  v8[3] = 0xFFFF0006FFFF0005LL;
  v23 = 8;
  v9 = -65529;
  v10 = -65528;
  result = GameRoutine_a4dbe0(v5, "MID_Sys_Fragment", 0, v8);
  if (result != 0) {
    v7 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_Unit");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v7, 0);
    }
  }
  return result;
}

__int64 ProcObeliskDepositoryRideMenu_Unknown109(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;
  _QWORD v16[4];
  _QWORD* v17;
  const char* v18;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e098[0], 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 480LL))(v4) & 1) != 0) {
    return 1;
  }
  v16[2] = v5;
  v18 = "MID_ReleaselMenu_Confirm";
  v15 = v14;
  v13 = v12;
  v16[0] = GameData_1fb7800;
  v16[1] = v3;
  v17 = v16;
  v14[0] = GameData_1fb7880;
  v12[0] = GameData_1fb7880;
  v7 = GameRoutine_9d0620(v3, &v18, v16, v14, v12);
  if (v13 == v12) {
    v8 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v13 + v8))((__int64)v13);

LABEL_11:
  if (v15 == v14) {
    v9 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_16;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v15 + v9))((__int64)v15);

LABEL_16:
  if (v17 == v16) {
    v10 = 32;
    goto LABEL_20;
  }
  if (v17 != nullptr) {
    v10 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v17 + v10))((__int64)v17);
  }
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 560LL))(v5);
  GameRoutine_1a06b90(v7 + 1496, v11, 1);
  return 12;
}

__int64 ProcObeliskDepositoryRideMenu_Unknown139(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _BOOL8 v14;
  __int64 v16;

  game_menu_BasicMenu_Unknown16defa0();
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  (*(void (**)(_QWORD*))(*a1 + 704LL))(a1);
  v2 = a1[29];
  if (a1[30] == v2) {
    v14 = true;
    return GameRoutine_1567590("Release", v14);
  }
  v3 = 0;
  while (1) {
    v4 = *(_QWORD*)(v2 + 8 * v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) & 1) != 0 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 40LL))(v4) & 1) != 0) {
      break;
    }
    v2 = a1[29];
    if (++v3 >= (unsigned __int64)((a1[30] - v2) >> 3)) {
      goto LABEL_13;
    }
  }
  v5 = (char*)a1[29];
  v6 = (char*)a1[30];
  if (v5 == v6) {
    goto LABEL_13;
  }
  v7 = v6 - v5 - 8;
  v8 = (v7 >> 3) + 1;
  if (v7 < 0x18) {
    v9 = 0;
  LABEL_9:
    v10 = v8 & 3;
    if (v10 != 0) {
      v11 = v9 - v3;
      while (v11 != 0) {
        v5 += 8;
        ++v11;
        if (--v10 == 0) {
          goto LABEL_13;
        }
      }
      goto LABEL_32;
    }
  LABEL_13:
    v12 = 0;
    goto LABEL_14;
  }
  v16 = 0;
  while ((_DWORD)v3 != (_DWORD)v16) {
    if ((_DWORD)v3 == (_DWORD)v16 + 1) {
      v5 += 8;
      break;
    }
    if ((_DWORD)v3 == (_DWORD)v16 + 2) {
      v5 += 16;
      break;
    }
    if ((_DWORD)v3 == (_DWORD)v16 + 3) {
      v5 += 24;
      break;
    }
    v5 += 32;
    v16 += 4;
    v9 = v16;
    if ((v8 & 0x3FFFFFFFFFFFFFFCLL) == v16) {
      goto LABEL_9;
    }
  }

LABEL_32:
  v12 = *(_QWORD*)v5;

LABEL_14:
  v14 = v12 == 0 || v12 == a1[43];
  return GameRoutine_1567590("Release", v14);
}

__int64 ProcObeliskDepositoryRideMenu_Unknown141(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  GameRoutine_185c7a0();
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "Release";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_AnimalRelease";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 7;
    *(_DWORD*)(v16 + 24) = result;
    result = memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = "Release";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_AnimalRelease";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 7;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  return result;
}

__int64 ProcObeliskDepositoryRideMenu_Unknown148(__int64 a1, __int64 a2)
{
  _BYTE v5[20];

  GameRoutine_15e0120(v5);
  GameRoutine_15e0200(v5);
  game_menu_AnimalPoolMenu_Unknown148(a1, a2);
  return GameRoutine_15e04f0(v5);
}

__int64 ProcObeliskDepositoryRideMenu_Unknown149(__int64 a1, __int64 a2,
                                                 __int64 a3, __int64 a4, int a5,
                                                 int a6)
{
  __int64 v10;

  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       112, 16, 0);
  *(_WORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 40) = a5;
  *(_QWORD*)(v10 + 88) = a4;
  *(_QWORD*)(v10 + 96) = a3;
  *(_DWORD*)(v10 + 104) = a6;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)v10 = game_facility_anonymous_ObeliskDepositoryRideMenuItem_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  GameRoutine_9d0bc0();
  return v10;
}

__int64 ProcObeliskDepositoryRideMenu_Unknown151(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;
  int v5;

  v5 = 0;
  v3[0] = GameData_1fb7ce8;
  v3[1] = a1;
  v4 = v3;
  v3[2] = &v5;
  GameRoutine_93cc20(*(_QWORD*)(GameData_21f42d0 + 8), v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__int64

game_facility_anonymous_ProcObeliskDepositoryRideMenu_ZRCall_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  _QWORD v4[2];
  _QWORD v5[2];

  v1 = *(_QWORD*)(a1 + 8);
  v4[0] = GameRoutine_931120(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL) +
      ((__int64)*(int*)(*(_QWORD*)(a1 + 16) + 40LL) << 6));
  v5[0] = "MID_ReleaseMenu_Result";
  v5[1] = 22;
  v4[1] = strlen(v4[0]);
  GameRoutine_16f9b50(v1, v5, v4);
  RidePool_93d820(*(unsigned int*)(*(_QWORD*)(a1 + 16) + 40LL));
  (*(void (**)(__int64))(*(_QWORD*)v1 + 1112LL))(v1);
  return 2;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryRideMenu_OnAddItemList_closure_Invoke(
    __int64 a1, int* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  v5 = v3[133];
  v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL) +
       (v2 << 6);
  if (*(_BYTE*)(v6 + 3) != 0) {
    v7 = game_UnitPool_Get(v6 + 3);
  }
  else {
    v7 = 0;
  }
  result = (*(__int64 (**)(_QWORD*, __int64, __int64, __int64, _QWORD, _QWORD))(
      *v3 + 1192LL))(v3, v6, v5, v7, (unsigned int)v2,
                     **(unsigned int**)(a1 + 16));
  if (result != 0) {
    result = BasicMenuCursor_16e0c00(v3, result);
    ++**(_DWORD**)(a1 + 16);
  }
  return result;
}

#pragma GCC visibility pop
