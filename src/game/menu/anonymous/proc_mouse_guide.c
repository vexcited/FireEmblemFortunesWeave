#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566d90(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_1567980(_QWORD);
__int64 GameRoutine_17a7290(_QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20d0e78[])();
extern __int64 (*GameData_20d0ef8[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMouseGuide_Unknown96(__int64 a1);
__int64 ProcMouseGuide_Unknown112(__int64 a1);
__int64 ProcMouseGuide_Unknown140(__int64 a1, __int64* a2);
__int64 ProcMouseGuide_Unknown142(__int64 result);

__int64 ProcMouseGuide_Unknown96(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  if ((*(_BYTE*)(a1 + 1065) & 1) == 0) {
    GameRoutine_1567980(100);
  }
  v3 = v7;
  v7[0] = GameData_20d0e78;
  v7[1] = a1;
  v8 = v7;
  if (game_gameui_Footer_instance_ == 0) {
    goto LABEL_14;
  }
  v9[0] = GameData_20d0e78;
  v9[1] = a1;
  v10 = v9;
  GameRoutine_654050(v9, game_gameui_Footer_instance_ + 448);
  if (v10 == v9) {
    v4 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v10 + v4))(v10, v2);

LABEL_11:
  v3 = v8;
  if (v8 == v7) {
  LABEL_14:
    v5 = 32;
    goto LABEL_15;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v3 + v5))(v3, v2);
  }
  return GameRoutine_17a7290(a1);
}

__int64 ProcMouseGuide_Unknown112(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  _BYTE v13[32];
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  const char* v17;

  if (*(_BYTE*)(game_g_game_setting + 807) != 1 ||
      (*(_BYTE*)(game_g_game_setting + 804) & 1) == 0 &&
          (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
           (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
           (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0)) {
    if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
      return 1;
    }
    if ((*(_BYTE*)(game_g_game_setting + 900) & 1) == 0) {
      v7 = 1;
      if (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0) {
        return v7;
      }
      if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
        return 1;
      }
    }
  }
  v15 = v1;
  v16 = v2;
  v3 = *(_QWORD*)(a1 + 152);
  v17 = "MID_MouseCalibration_Message";
  v12 = v11;
  v11[0] = GameData_20d0ef8;
  v11[1] = a1;
  if (v3 == 0) {
    v3 = a1;
  }
  v4 = GameRoutine_667ea0(v3);
  if (v4 != 0) {
    v6 = v4;
    if (v12 != nullptr) {
      if (v12 == v11) {
        v14 = v13;
        (*(void (**)(_QWORD*, _BYTE*))(*v12 + 24LL))(v12, v13);
      }
      else {
        v14 = (_BYTE*)(*(__int64 (**)(_QWORD*, __int64))(*v12 + 16LL))(v12, v5);
      }
    }
    else {
      v14 = nullptr;
    }
    GameRoutine_6680e0(v13, v6 + 1248);
    if (v14 == v13) {
      v9 = 32;
    }
    else {
      if (v14 == nullptr) {
        goto LABEL_25;
      }
      v9 = 40;
    }
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v14 + v9))(v14, v5);
  }

LABEL_25:
  if (v12 == v11) {
    v10 = 32;
    goto LABEL_29;
  }
  if (v12 != nullptr) {
    v10 = 40;
  LABEL_29:
    (*(void (**)(_QWORD*, __int64))(*v12 + v10))(v12, v5);
  }
  return 12;
}

__int64 ProcMouseGuide_Unknown140(__int64 a1, __int64* a2)
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
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_50;
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
        goto LABEL_51;
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
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_HelpDetail";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 2;
    *(_DWORD*)(v16 + 24) = result;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_HelpDetail";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 2;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 >= v20) {
    v22 = *a2;
    v23 = v19 - *a2;
    v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
    if (v24 > 0x666666666666666LL) {
      goto LABEL_50;
    }
    v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
    if (2 * v25 > v24) {
      v24 = 2 * v25;
    }
    if (v25 >= 0x333333333333333LL) {
      v26 = 0x666666666666666LL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 > 0x666666666666666LL) {
        goto LABEL_51;
      }
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
    }
    else {
      v28 = 0;
    }
    v29 = v28 + v23;
    *(_QWORD*)v29 = "MouseCalib";
    *(_QWORD*)(v29 + 8) = "MID_KeyHelp_MouseCalibration";
    *(_BYTE*)(v29 + 28) = 0;
    *(_QWORD*)(v29 + 32) = 0;
    *(_BYTE*)(v29 + 16) = 1;
    v30 = v28 + 40 * v26;
    v21 = v28 + v23 + 40;
    *(_DWORD*)(v29 + 20) = 11;
    *(_DWORD*)(v29 + 24) = result;
    memcpy(v28, v22, v23);
    *a2 = v28;
    a2[1] = v21;
    a2[2] = v30;
    if (v22 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
    }
  }
  else {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = "MouseCalib";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_MouseCalibration";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 11;
    *(_DWORD*)(v19 + 24) = result;
  }
  a2[1] = v21;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v32 = a2[1];
  v33 = a2[2];
  if (v32 < v33) {
    *(_BYTE*)(v32 + 28) = 0;
    *(_QWORD*)(v32 + 32) = 0;
    *(_QWORD*)v32 = "MouseReset";
    *(_QWORD*)(v32 + 8) = "MID_KeyHelp_MouseReset";
    v34 = v32 + 40;
    *(_BYTE*)(v32 + 16) = 1;
    *(_DWORD*)(v32 + 20) = 27;
    *(_DWORD*)(v32 + 24) = result;
    goto LABEL_49;
  }
  v35 = *a2;
  v36 = v32 - *a2;
  v37 = 1 - 0x3333333333333333LL * (v36 >> 3);
  if (v37 > 0x666666666666666LL) {
  LABEL_50:
    GameRoutine_874520(result);
  }
  v38 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v33 - v35) >> 3);
  if (2 * v38 > v37) {
    v37 = 2 * v38;
  }
  if (v38 >= 0x333333333333333LL) {
    v39 = 0x666666666666666LL;
  }
  else {
    v39 = v37;
  }
  if (v39 != 0) {
    if (v39 <= 0x666666666666666LL) {
      v40 = result;
      v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v39,
                                           16, 0);
      LODWORD(result) = v40;
      goto LABEL_45;
    }
  LABEL_51:
    GameRoutine_60a210(result);
  }
  v41 = 0;

LABEL_45:
  v42 = v41 + v36;
  *(_QWORD*)v42 = "MouseReset";
  *(_QWORD*)(v42 + 8) = "MID_KeyHelp_MouseReset";
  *(_BYTE*)(v42 + 28) = 0;
  *(_QWORD*)(v42 + 32) = 0;
  *(_BYTE*)(v42 + 16) = 1;
  v43 = v41 + 40 * v39;
  v34 = v41 + v36 + 40;
  *(_DWORD*)(v42 + 20) = 27;
  *(_DWORD*)(v42 + 24) = result;
  result = memcpy(v41, v35, v36);
  *a2 = v41;
  a2[1] = v34;
  a2[2] = v43;
  if (v35 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v35);
  }

LABEL_49:
  a2[1] = v34;
  return result;
}

__int64 ProcMouseGuide_Unknown142(__int64 result)
{
  if (*(_BYTE*)(result + 1065) == 1) {
    if (game_gameui_Header_instance_ != 0) {
      GameRoutine_1566d90(game_gameui_Header_instance_, 0);
    }
    result = game_gameui_Footer_instance_;
    if (game_gameui_Footer_instance_ != 0) {
      return GameRoutine_1567000(game_gameui_Footer_instance_, 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
