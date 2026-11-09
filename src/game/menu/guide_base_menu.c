#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_163c120(_QWORD, _QWORD);
__int64 GameRoutine_1713a00(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_20ace58;
extern __int64 GameData_212c610;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 GuideBaseMenu_Unknown139(__int64 a1, __int64* a2);
__int64 GuideBaseMenu_17129d0(__int64 a1, char a2);
__int64 GuideBaseMenu_1712a70(__int64 a1, char a2);
__int64 GuideBaseMenu_1712b30(__int64 a1);

__int64 GuideBaseMenu_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "Tutorial";
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_Tutorial";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 10;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "Tutorial";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_Tutorial";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 10;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 GuideBaseMenu_17129d0(__int64 a1, char a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  v2 = *(_QWORD*)(a1 + 152);
  if (v2 == 0) {
    v2 = a1;
  }
  result = *(_QWORD*)(v2 + 32);
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

__int64 GuideBaseMenu_1712a70(__int64 a1, char a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;

  v2 = *(_QWORD*)(a1 + 152);
  if (v2 == 0) {
    v2 = a1;
  }
  result = *(_QWORD*)(v2 + 32);
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

__int64 GuideBaseMenu_1712b30(__int64 a1)
{
  GameRoutine_163c120(a1, 1);
  return 11;
}

#pragma GCC visibility pop
