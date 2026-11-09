#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_facility_anonymous_ObeliskDestinyMenuItem_vtable[])();
extern __int64 (*game_menu_EmptyMenuItem_vtable[])();
extern __int64 GameData_21c9c20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskDestinyMenu_Unknown91(_QWORD* a1, int a2);
__int64 ProcObeliskDestinyMenu_Unknown128(__int64 a1);
__int64 ProcObeliskDestinyMenu_Unknown143(_BYTE* a1, __int64* a2);

__int64 ProcObeliskDestinyMenu_Unknown91(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;

  switch (a2) {
  case 12:
    v5 = a1[42];
    if (v5 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 64LL))(v5, 1);
    }
    result = (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1);
    break;
  case 11:
  LABEL_6:
    result = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    break;
  case 10:
    v3 = a1[42];
    if (v3 != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 64LL))(v3, 1);
    }
    goto LABEL_6;
  default:
    result = (*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
    break;
  }
  if (*((_BYTE*)a1 + 1064) != 1) {
    goto LABEL_23;
  }
  v6 = *(__int64**)(GameData_21c9c20 + 64);
  v7 = *(__int64**)(GameData_21c9c20 + 72);
  if (v6 == v7) {
    goto LABEL_23;
  }
  v8 = 0;
  do {
    if (game_GameModeData_instance_ != 0) {
      v9 = *v6;
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(*v6 + 24) + 32LL);
      if ((result == 0 || *(_BYTE*)(result + 32) != 4) &&
          game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48),
            *(_QWORD*)(v9 + 24) + 32LL);
        if (result != 0 && *(_BYTE*)(result + 32) != 0) {
          v8 += *(unsigned __int16*)(v9 + 64);
        }
      }
    }
    ++v6;
  } while (v6 != v7);
  if (v8 == 0) {
  LABEL_23:
    *((_BYTE*)a1 + 1064) = 0;
    return GameRoutine_1567590("AllRecieve", 1);
  }
  return result;
}

__int64 ProcObeliskDestinyMenu_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_menu_EmptyMenuItem_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  result = *(_QWORD*)(a1 + 344);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v6 = *(__int64**)(GameData_21c9c20 + 64);
  v7 = *(__int64**)(GameData_21c9c20 + 72);
  if (v6 != v7) {
    v8 = 0;
    do {
      v9 = *v6++;
      v10 = fw_memory_HeapManager_Allocate(*v2, 96, 16, 0);
      *(_WORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 82) = 1;
      *(_QWORD*)v10 = game_facility_anonymous_ObeliskDestinyMenuItem_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      *(_QWORD*)(v10 + 88) = v9;
      *(_DWORD*)(v10 + 40) = v8;
      result = GameRoutine_16e0c00(a1, v10);
      ++v8;
    } while (v6 != v7);
  }
  return result;
}

__int64 ProcObeliskDestinyMenu_Unknown143(_BYTE* a1, __int64* a2)
{
  __int64 result;
  char v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
  if (a1[1064] != 0) {
    v5 = 3;
  }
  else {
    v5 = 1;
  }
  v6 = a2[1];
  v7 = a2[2];
  if (v6 >= v7) {
    v9 = *a2;
    v10 = v6 - *a2;
    v11 = 1 - 0x3333333333333333LL * (v10 >> 3);
    if (v11 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v7 - v9) >> 3);
    if (2 * v13 > v11) {
      v11 = 2 * v13;
    }
    if (v13 >= 0x333333333333333LL) {
      v14 = 0x666666666666666LL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v15 = result;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v14, 16, 0);
      LODWORD(result) = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + v10;
    *(_QWORD*)v17 = "AllRecieve";
    *(_QWORD*)(v17 + 8) = "MID_KeyHelp_AllReceive";
    *(_BYTE*)(v17 + 28) = v5;
    v8 = v16 + v10 + 40;
    *(_QWORD*)(v17 + 32) = 0;
    *(_BYTE*)(v17 + 16) = 1;
    *(_DWORD*)(v17 + 20) = 6;
    *(_DWORD*)(v17 + 24) = result;
    result = memcpy(v16, v9, v10);
    *a2 = v16;
    a2[1] = v8;
    a2[2] = v16 + 40 * v14;
    if (v9 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18);
    }
  }
  else {
    *(_BYTE*)(v6 + 28) = v5;
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)v6 = "AllRecieve";
    *(_QWORD*)(v6 + 8) = "MID_KeyHelp_AllReceive";
    v8 = v6 + 40;
    *(_BYTE*)(v6 + 16) = 1;
    *(_DWORD*)(v6 + 20) = 6;
    *(_DWORD*)(v6 + 24) = result;
  }
  a2[1] = v8;
  return result;
}

#pragma GCC visibility pop
