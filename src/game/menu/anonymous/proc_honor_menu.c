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
__int64 ProcHonorMenu_Unknown85(__int64 a1);
__int64 ProcHonorMenu_Unknown93(__int64 result);
__int64 ProcHonorMenu_Unknown139(_BYTE* a1, __int64* a2);

__int64 ProcHonorMenu_Unknown85(__int64 a1)
{
  const char* v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
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

  v1 = "MID_SysMenu_Honor";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = "MID_SysMenu_Honor_Part3";
  }
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v3 = *msg_MessageManager_instance__ptr[0];
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v6[0] = msg_TagSelector_vtable;
  v6[1] = 0xFFFF0001FFFF0000LL;
  v6[2] = 0xFFFF0004FFFF0002LL;
  v6[3] = 0xFFFF0006FFFF0005LL;
  v21 = 8;
  v7 = -65529;
  v8 = -65528;
  result = GameRoutine_a4dbe0(v3, v1, 0, v6);
  if (result != 0) {
    v5 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 848, "L_MenuHeader/T_Txt");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v5, 0);
    }
  }
  return result;
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
