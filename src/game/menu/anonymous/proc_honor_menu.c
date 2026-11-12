#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1abbb9c;
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64
ProcHonorMenu_Unknown85_alt1(__int64 a1) __asm__("ProcHonorMenu_Unknown85");
__int64 ProcHonorMenu_Unknown93(__int64 result);
__int64 ProcHonorMenu_Unknown139(_BYTE* a1, __int64* a2);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void ProcHonorMenu_Unknown85(__int64 a1);

void ProcHonorMenu_Unknown85(__int64 a1)
{
  char* v1;
  char* v3;
  __int64 v4;
  __int64 v5;

  v1 = "MID_SysMenu_Honor";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = "MID_SysMenu_Honor_Part3";
  }
  v3 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v1, 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                            (__int64)"L_MenuHeader/T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0_alt1(v5, v4, 0);
    }
  }
}

__int64 ProcHonorMenu_Unknown93(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    GameRoutine_887920(&v2, &GameData_1abbb9c);
    return GameRoutine_162aea0(v1, &v2);
  }
  return result;
}

__int64 ProcHonorMenu_Unknown139(_BYTE* a1, __int64* a2)
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

  result = GuideBaseMenu_Unknown139();
  if (a1[1068] == 1) {
    result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
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
      *(_QWORD*)v16 = &GameData_1a9f09e;
      *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Cancel";
      *(_BYTE*)(v16 + 28) = 0;
      *(_QWORD*)(v16 + 32) = 0;
      *(_BYTE*)(v16 + 16) = 1;
      v17 = v15 + 40 * v13;
      *(_DWORD*)(v16 + 20) = 1;
      *(_DWORD*)(v16 + 24) = result;
      v7 = v15 + v9 + 40;
      result = memcpy(v15, v8, v9);
      *a2 = v15;
      a2[1] = v7;
      a2[2] = v17;
      if (v8 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
      }
    }
    else {
      *(_BYTE*)(v5 + 28) = 0;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Cancel";
      v7 = v5 + 40;
      *(_BYTE*)(v5 + 16) = 1;
      *(_DWORD*)(v5 + 20) = 1;
      *(_DWORD*)(v5 + 24) = result;
    }
    a2[1] = v7;
  }
  return result;
}

#pragma GCC visibility pop
