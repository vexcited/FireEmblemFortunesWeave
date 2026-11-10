#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f6c320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 HubTalkNatives_e14270(_QWORD, _QWORD);
__int64 ScoutBaseProc_f6c060_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD) __asm__("ScoutBaseProc_f6c060");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1ff6f10[])();
extern __int64 (*GameData_1ff6f90[])();
extern __int64 (*GameData_1ff7090[])();
extern __int64 (*GameData_1ff7110[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_2262bf8;
extern char** msg_MessageManager_empty_text__ptr;
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog(__int64 a1, __int64 a2,
                                                char* a3, char* a4);
__int64 ScoutBaseProc_f6c060(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6);
__int64 game_menu_ScoutBaseProc_ShowItemDialog(__int64* a1, __int64 a2,
                                               char a3);
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda0_Invoke(__int64 a1);
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda1_Invoke(__int64 a1);
__int64 game_menu_ScoutBaseProc_ShowItemDialog_lambda1_Invoke(__int64 a1);

__int64 game_menu_ScoutBaseProc_ShowYesNoDialog(__int64 a1, __int64 a2,
                                                char* a3, char* a4)
{
  char v4;
  char* v5;
  char v6;
  bool v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[4];
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;
  char* v21;

  *(_BYTE*)(a1 + 8) = 0;
  v4 = *a3;
  v5 = *((char**)a3 + 2);
  v6 = *a4;
  v20 = v19;
  v16 = v15;
  v7 = (v4 & 1) == 0;
  v19[0] = GameData_1ff6f10;
  v19[1] = a1;
  v8 = *((char**)a4 + 2);
  if (v7) {
    v5 = a3 + 1;
  }
  v21 = v5;
  v17[0] = GameData_1ff6f90;
  v17[1] = a1;
  v15[0] = GameData_1ff6f90;
  v15[1] = a1;
  if ((v6 & 1) != 0) {
    v9 = v8;
  }
  else {
    v9 = a4 + 1;
  }
  v18 = v17;
  ScoutBaseProc_f6c060_alt1(a2, &v21, v9, v19, v17, v15);
  if (v16 == v15) {
    v11 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_12;
    }
    v11 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v16 + v11))(v16, v10);
LABEL_12:
  if (v18 == v17) {
    v12 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_17;
    }
    v12 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v18 + v12))(v18, v10);
LABEL_17:
  result = (__int64)v20;
  if (v20 == v19) {
    v14 = 32;
  }
  else {
    if (v20 == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64))(*v20 + v14))(v20, v10);
}

__int64 ScoutBaseProc_f6c060(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v6 = *a2;
  if (*a2 != 0) {
    v10 = a1;
    v11 = msg_MessageManager_instance__ptr[0];
    if (a3 != 0) {
      v12 = a3;
    }
    else {
      v12 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v12);
    v13 = *v11;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v20[0] = GameData_212e348 + 2;
    v20[1] = 0xFFFF0001FFFF0000LL;
    v20[2] = 0xFFFF0004FFFF0002LL;
    v20[3] = 0xFFFF0006FFFF0005LL;
    v35 = 8;
    v21 = -65529;
    v22 = -65528;
    v14 = GameRoutine_a4dbe0(v13, v6, 0, v20);
    a1 = v10;
  }
  else {
    v14 = 0;
  }
  v20[0] = v14;
  v15 = HubTalkNatives_e14270(a1, v20);
  if (v15 != 0) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v17, "MID_Sys_Yes", a4, a6);
    BasicMenuCursor_16e0c00(v15, v17);
    v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, "MID_Sys_No", a5, a6);
    BasicMenuCursor_16e0c00(v15, v18);
  }
  return v15;
}

__int64 game_menu_ScoutBaseProc_ShowItemDialog(__int64* a1, __int64 a2, char a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[3];
  char v18;
  _QWORD* v19;
  const char* v20;

  v4 = *a1;
  v20 = "MID_LGV_Scout_Terms_Confirm_m01_001";
  v7 = GameRoutine_67ed20(v4);
  v17[1] = a1;
  v17[2] = a2;
  v18 = a3;
  v17[0] = GameData_1ff7090;
  v16 = v15;
  v19 = v17;
  v15[0] = GameData_1ff7110;
  v15[1] = a1;
  v13[0] = GameData_1ff7110;
  v13[1] = a1;
  v14 = v13;
  v8 = GameRoutine_f6c320(a2, &v20, v7, v17, v15, v13);
  if (v14 == v13) {
    v9 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_6;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v14 + v9))((__int64)v14);
LABEL_6:
  if (v16 == v15) {
    v10 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_11;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v16 + v10))((__int64)v16);
LABEL_11:
  if (v19 == v17) {
    v11 = 32;
    goto LABEL_15;
  }
  if (v19 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v19 + v11))((__int64)v19);
  }
  return v8;
}

__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 8) = 1;
  return 2;
}

__int64 game_menu_ScoutBaseProc_ShowYesNoDialog_lambda1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 8) = 0;
  return 3;
}

__int64 game_menu_ScoutBaseProc_ShowItemDialog_lambda1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 12) = 1;
  GameData_2262bf8 = 0;
  return 3;
}

#pragma GCC visibility pop
