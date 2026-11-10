#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 BasicMenuCursor_16e0e00(void);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_159a5c0(_QWORD, _QWORD);
__int64 GameRoutine_163c120(_QWORD, _QWORD);
__int64 GameRoutine_16a5f40(_QWORD, _QWORD);
__int64 GameRoutine_1713a00(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ac4b3e;
extern __int64 (*GameData_2088750[])();
extern __int64 (*GameData_20887d0[])();
extern __int64 GameData_20ace58;
extern __int64 GameData_212c610;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 ProcBattleHintInfo_Unknown24(__int64 a1);
void* ProcBattleHintInfo_Unknown67(__int64 a1);
__int64 game_menu_anonymous_ProcBattleHintInfo_OnBuild(__int64* a1);
__int64 ProcBattleHintInfo_Unknown104(__int64 a1, char a2);
__int64 ProcBattleHintInfo_Unknown106(__int64 a1, char a2);
__int64 ProcBattleHintInfo_Unknown114(__int64 a1);
const char* ProcBattleHintInfo_Unknown139(__int64 a1);
const char* ProcBattleHintInfo_Unknown140(__int64 a1);
__int64 ProcBattleHintInfo_Unknown144(__int64 a1, __int64 a2, char a3);
__int64 ProcBattleHintInfo_Unknown12(__int64 a1, __int64 a2, char a3);
const char* ProcBattleHintInfo_Unknown3(__int64 a1);
const char* ProcBattleHintInfo_Unknown5(__int64 a1);
unsigned __int64 ProcBattleHintInfo_16a64c0(unsigned __int64 result,
                                            __int64 a2);
__int64 ProcBattleHintInfo_16a64c0_alt1(_QWORD, _QWORD) __asm__(
    "ProcBattleHintInfo_16a64c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_874520();
__int64 ProcBattleHintInfo_Unknown142(__int64 result, __int64* a2);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcBattleHintInfo_OnBuild_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcBattleHintInfo_OnBuild_closure0_Invoke(PSEUDO_X8 x8_,
                                                               __int64 a1,
                                                               int* a2);

__int64 ProcBattleHintInfo_Unknown24(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1224) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

void* ProcBattleHintInfo_Unknown67(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1224) == 1) {
    return &GameData_1ac4b3e;
  }
  else {
    return nullptr;
  }
}

__int64 game_menu_anonymous_ProcBattleHintInfo_OnBuild(__int64* a1)
{
  char** v1;
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  int v11;
  char* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  int v21;
  char v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  v1 = (char**)(a1 + 150);
  if (a1[150] == a1[151]) {
    GameRoutine_159a5c0(a1 + 150, 1);
  }
  if (game_GameModeData_instance_ == 0) {
    v4 = (char*)a1[151];
    v5 = (char*)a1[150];
  LABEL_10:
    *((_DWORD*)a1 + 268) = 954437177 * ((unsigned __int64)(v4 - v5) >> 3) - 1;
    *(__int64*)((char*)a1 + 1076) = 0;
    GameRoutine_1560070(&v17, a1 + 106, "L_PageTab");
    v19[0] = GameData_20887d0;
    v19[1] = a1;
    v6 = *a1;
    v23 = v19;
    v7 = (*(__int64 (**)(__int64*))(v6 + 192))(a1);
    game_menu_PageTab_SetupLabel(a1 + 134, &v17, v19, v7, 14, 15);
    if (v23 == v19) {
      v8 = 32;
    }
    else {
      if (v23 == nullptr) {
      LABEL_15:
        if (v18 != 0) {
          std___1___shared_weak_count___release_weak(v18);
        }
        v9 = *v1;
        goto LABEL_18;
      }
      v8 = 40;
    }
    (*(void (**)(void))(*v23 + v8))();
    goto LABEL_15;
  }
  v3 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  v4 = (char*)a1[151];
  v5 = (char*)a1[150];
  if (v3 == 0) {
    goto LABEL_10;
  }
  if (v5 != v4) {
    while (v3 != *(_QWORD*)v5) {
      v5 += 72;
      if (v5 == v4) {
        goto LABEL_19;
      }
    }
    a1[134] = 0;
    *((_DWORD*)a1 + 270) = 0;
    v13 = v5;
    GameRoutine_1560070(&v24, a1 + 106, "L_PageTab");
    v20 = v13;
    v19[0] = GameData_2088750;
    v19[1] = a1;
    v14 = *a1;
    v23 = v19;
    v15 = (*(__int64 (**)(__int64*))(v14 + 192))(a1);
    game_menu_PageTab_SetupLabel(a1 + 134, &v24, v19, v15, 14, 15);
    if (v23 == v19) {
      v16 = 32;
    }
    else {
      if (v23 == nullptr) {
      LABEL_25:
        if (v25 != 0) {
          std___1___shared_weak_count___release_weak(v25);
        }
        v9 = v13;
      LABEL_18:
        GameRoutine_16a5f40(a1, v9);
        goto LABEL_19;
      }
      v16 = 40;
    }
    (*(void (**)(void))(*v23 + v16))();
    goto LABEL_25;
  }
LABEL_19:
  v10 = LayoutAccessor_155fbe0(a1 + 106, "L_KeyHelp");
  v11 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
  v22 = 0;
  v23 = nullptr;
  v19[0] = "StatusChange";
  v19[1] = "MID_KeyHelp_StatusChange";
  LOBYTE(v20) = 1;
  HIDWORD(v20) = 2;
  v21 = v11;
  return GameRoutine_1593d90(v10, v19);
}

__int64 ProcBattleHintInfo_Unknown104(__int64 a1, char a2)
{
  __int64 result;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  if (*(_DWORD*)(a1 + 1224) != 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 == 0) {
    v3 = a1;
  }
  result = *(_QWORD*)(v3 + 32);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212c610, &GameData_20ace58, 0);
    if (result != 0) {
      v5 = result;
      if ((game_menu_PageTab_Move(result + 1072, 0xFFFFFFFFLL, a2 & 1) & 1) !=
          0) {
        v6 = *(_QWORD*)(v5 + 1088);
        v7 = *(int*)(v5 + 1076);
        if (v7 < (*(_QWORD*)(v5 + 1096) - v6) >> 2) {
          v7 = *(int*)(v6 + 4 * v7);
        }
        GameRoutine_1713a00(v5,
                            *(unsigned int*)(*(_QWORD*)(v5 + 1200) + 4 * v7));
        return 2;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 ProcBattleHintInfo_Unknown106(__int64 a1, char a2)
{
  __int64 result;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  if (*(_DWORD*)(a1 + 1224) != 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 == 0) {
    v3 = a1;
  }
  result = *(_QWORD*)(v3 + 32);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212c610, &GameData_20ace58, 0);
    if (result != 0) {
      v5 = result;
      if ((game_menu_PageTab_Move(result + 1072, 1, a2 & 1) & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 1088);
        v7 = *(int*)(v5 + 1076);
        if (v7 < (*(_QWORD*)(v5 + 1096) - v6) >> 2) {
          v7 = *(int*)(v6 + 4 * v7);
        }
        GameRoutine_1713a00(v5,
                            *(unsigned int*)(*(_QWORD*)(v5 + 1200) + 4 * v7));
        return 2;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 ProcBattleHintInfo_Unknown114(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1224) != 0) {
    return BasicMenuCursor_16e0e00();
  }
  GameRoutine_163c120(a1, 1);
  return 11;
}

const char* ProcBattleHintInfo_Unknown139(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1224) == 1) {
    return "MID_PerchMenu_BattleHint";
  }
  else {
    return nullptr;
  }
}

const char* ProcBattleHintInfo_Unknown140(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1224) == 1) {
    return "MID_GuideMenu_BattleHint_Help";
  }
  else {
    return nullptr;
  }
}

__int64 ProcBattleHintInfo_Unknown142(__int64 result, __int64* a2)
{
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  if (*(_DWORD*)(result + 1224) == 0) {
    v3 = result;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 192LL))(result);
    v5 = a2[1];
    v6 = a2[2];
    if (v5 >= v6) {
      v8 = *a2;
      v9 = v5 - *a2;
      v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
      if (v10 > 0x666666666666666LL) {
        goto LABEL_38;
      }
      v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
      if (2 * v11 > v10) {
        v10 = 2 * v11;
      }
      if (v11 >= 0x333333333333333LL) {
        v12 = 0x666666666666666LL;
      }
      else {
        v12 = v10;
      }
      if (v12 != 0) {
        if (v12 > 0x666666666666666LL) {
          goto LABEL_39;
        }
        v13 = v4;
        v14 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                  40 * v12, 16, 0);
        v4 = v13;
      }
      else {
        v14 = 0;
      }
      v15 = v14 + v9;
      *(_QWORD*)v15 = "Tutorial";
      *(_QWORD*)(v15 + 8) = "MID_KeyHelp_Tutorial";
      *(_BYTE*)(v15 + 28) = 0;
      *(_QWORD*)(v15 + 32) = 0;
      *(_BYTE*)(v15 + 16) = 1;
      v16 = v14 + 40 * v12;
      v7 = v14 + v9 + 40;
      *(_DWORD*)(v15 + 20) = 10;
      *(_DWORD*)(v15 + 24) = v4;
      memcpy(v14, v8, v9);
      *a2 = v14;
      a2[1] = v7;
      a2[2] = v16;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v17);
      }
    }
    else {
      *(_BYTE*)(v5 + 28) = 0;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = "Tutorial";
      *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Tutorial";
      v7 = v5 + 40;
      *(_BYTE*)(v5 + 16) = 1;
      *(_DWORD*)(v5 + 20) = 10;
      *(_DWORD*)(v5 + 24) = v4;
    }
    result = v3;
    a2[1] = v7;
  }
  if (*(_BYTE*)(result + 1456) != 1) {
    return result;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 192LL))(result);
  v18 = a2[1];
  v19 = a2[2];
  if (v18 >= v19) {
    v21 = *a2;
    v22 = v18 - *a2;
    v23 = 1 - 0x3333333333333333LL * (v22 >> 3);
    if (v23 <= 0x666666666666666LL) {
      v24 = fw_memory_g_heap_manager_ptr;
      v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v19 - v21) >> 3);
      if (2 * v25 > v23) {
        v23 = 2 * v25;
      }
      if (v25 >= 0x333333333333333LL) {
        v26 = 0x666666666666666LL;
      }
      else {
        v26 = v23;
      }
      if (v26 == 0) {
        v28 = 0;
      LABEL_32:
        v29 = v28 + v22;
        *(_QWORD*)v29 = &GameData_1a9f09e;
        *(_QWORD*)(v29 + 8) = "MID_KeyHelp_Cancel";
        *(_BYTE*)(v29 + 28) = 0;
        *(_QWORD*)(v29 + 32) = 0;
        *(_BYTE*)(v29 + 16) = 1;
        v30 = v28 + 40 * v26;
        *(_DWORD*)(v29 + 20) = 1;
        *(_DWORD*)(v29 + 24) = result;
        v20 = v28 + v22 + 40;
        result = memcpy(v28, v21, v22);
        *a2 = v28;
        a2[1] = v20;
        a2[2] = v30;
        if (v21 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
            v31 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v31);
        }
        goto LABEL_36;
      }
      if (v26 <= 0x666666666666666LL) {
        v27 = result;
        v28 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v26, 16, 0);
        LODWORD(result) = v27;
        goto LABEL_32;
      }
    LABEL_39:
      GameRoutine_60a210();
    }
  LABEL_38:
    GameRoutine_874520();
  }
  *(_BYTE*)(v18 + 28) = 0;
  *(_QWORD*)(v18 + 32) = 0;
  *(_QWORD*)v18 = &GameData_1a9f09e;
  *(_QWORD*)(v18 + 8) = "MID_KeyHelp_Cancel";
  v20 = v18 + 40;
  *(_BYTE*)(v18 + 16) = 1;
  *(_DWORD*)(v18 + 20) = 1;
  *(_DWORD*)(v18 + 24) = result;
LABEL_36:
  a2[1] = v20;
  return result;
}

__int64 ProcBattleHintInfo_Unknown144(__int64 a1, __int64 a2, char a3)
{
  __int64 v4;
  unsigned __int64 v5;

  if (*(int*)(a1 + 1072) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v4 = *(_QWORD*)(a1 + 1088);
  v5 = *(int*)(a1 + 1076);
  if (v5 < (*(_QWORD*)(a1 + 1096) - v4) >> 2) {
    LODWORD(v5) = *(_DWORD*)(v4 + 4 * v5);
  }
  GameRoutine_16a5f40(a1, *(_QWORD*)(a1 + 1200) + 72LL * (int)v5);
  return 13;
}

__int64 ProcBattleHintInfo_Unknown12(__int64 a1, __int64 a2, char a3)
{
  __int64 v4;
  unsigned __int64 v5;

  if (*(int*)(a1 + 896) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 896, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v4 = *(_QWORD*)(a1 + 912);
  v5 = *(int*)(a1 + 900);
  if (v5 < (*(_QWORD*)(a1 + 920) - v4) >> 2) {
    LODWORD(v5) = *(_DWORD*)(v4 + 4 * v5);
  }
  GameRoutine_16a5f40(a1 - 176, *(_QWORD*)(a1 + 1024) + 72LL * (int)v5);
  return 13;
}

const char* ProcBattleHintInfo_Unknown3(__int64 a1)
{
  if (*(_DWORD*)(a1 + 168) == 1) {
    return "MID_PerchMenu_BattleHint";
  }
  else {
    return nullptr;
  }
}

const char* ProcBattleHintInfo_Unknown5(__int64 a1)
{
  if (*(_DWORD*)(a1 + 168) == 1) {
    return "MID_GuideMenu_BattleHint_Help";
  }
  else {
    return nullptr;
  }
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcBattleHintInfo_OnBuild_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    ProcBattleHintInfo_16a64c0_alt1(a2, *(_QWORD*)(a1 + 16));
    return;
  }
}

unsigned __int64 ProcBattleHintInfo_16a64c0(unsigned __int64 result, __int64 a2)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  unsigned __int64 v20;
  unsigned __int64 v21;
  int v22;
  int v23;
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
  __int64 v36;

  v2 = *(_DWORD*)(a2 + 64);
  v3 = (_QWORD*)result;
  if (v2 != 2) {
    if (v2 == 1) {
      if ((*(_BYTE*)(a2 + 40) & 1) != 0) {
        v7 = *(_QWORD*)(a2 + 56);
      }
      else {
        v7 = a2 + 41;
      }
      if (v7 != 0) {
        v6 = v7;
      }
      else {
        v6 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      v5 = v6;
    }
    else {
      if (v2 != 0) {
        *(_WORD*)result = 0;
        return result;
      }
      v24 = -1;
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v4 = *msg_MessageManager_instance__ptr[0];
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v19[0] = GameData_212e348 + 2;
      v19[1] = 0xFFFF0001FFFF0000LL;
      v20 = 0xFFFF0004FFFF0002LL;
      v21 = 0xFFFF0006FFFF0005LL;
      v36 = 8;
      v22 = -65529;
      v23 = -65528;
      v5 = GameRoutine_a4dbe0(v4, "MID_BattleHintMenu_MainBattle", 0, v19);
      v6 = v5;
    }
    result = strlen(v5);
    if (result < 0xFFFFFFFFFFFFFFF7LL) {
      v8 = result;
      if (result >= 0x17) {
        if ((result | 7) == 0x17) {
          v13 = 26;
        }
        else {
          v13 = (result | 7) + 1;
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
        v3[1] = v8;
        v3[2] = v14;
        *v3 = v13 | 1;
        v9 = (char*)v14;
      }
      else {
        *(_BYTE*)v3 = 2 * result;
        v9 = (char*)v3 + 1;
        if (result == 0) {
          goto LABEL_28;
        }
      }
      result = memmove(v9, v6, v8);
    LABEL_28:
      v9[v8] = 0;
      return result;
    }
  LABEL_40:
    String_60a1d0();
  }
  if ((*(_BYTE*)(a2 + 40) & 1) != 0) {
    v10 = *(_BYTE**)(a2 + 56);
  }
  else {
    v10 = (_BYTE*)(a2 + 41);
  }
  if (v10 != nullptr && *v10 != 0) {
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v11 = *msg_MessageManager_instance__ptr[0];
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
    v19[0] = GameData_212e348 + 2;
    v19[1] = 0xFFFF0001FFFF0000LL;
    v20 = 0xFFFF0004FFFF0002LL;
    v21 = 0xFFFF0006FFFF0005LL;
    v36 = 8;
    v22 = -65529;
    v23 = -65528;
    v12 = GameRoutine_a4dbe0(v11, v10, 0, v19);
  }
  else {
    v12 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  result = strlen(v12);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_40;
  }
  v15 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (result | 7) + 1;
    }
    v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v17, 16, 0);
    v3[1] = v15;
    v3[2] = v18;
    *v3 = v17 | 1;
    v16 = (char*)v18;
  }
  else {
    *(_BYTE*)v3 = 2 * result;
    v16 = (char*)v3 + 1;
    if (result == 0) {
      goto LABEL_39;
    }
  }
  result = memmove(v16, v12, v15);
LABEL_39:
  v16[v15] = 0;
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcBattleHintInfo_OnBuild_closure0_Invoke(PSEUDO_X8 x8_,
                                                               __int64 a1,
                                                               int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    ProcBattleHintInfo_16a64c0_alt1(
        a3, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1200LL) + 72LL * *a2);
    return;
  }
}

#pragma GCC visibility pop
