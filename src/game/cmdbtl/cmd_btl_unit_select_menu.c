#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1626520(__int64, __int64);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
extern __int64 (*GameData_206e870[])();
extern __int64 (*game_cmdbtl_anonymous_UnitMenuItem_vtable[])();
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 CmdBtlUnitSelectMenu_1638100(_DWORD* a1, __int64 a2);

__int64 CmdBtlUnitSelectMenu_1638100(_DWORD* a1, __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v34;
  __int64 v37;
  _QWORD v38[7];
  int v39;

  a1[356] = *(_DWORD*)a2;
  if ((*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
    v2 = 1;
  }
  else {
    v2 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  v34 = v2;
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  if (v3 != 0) {
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do {
      v14 = *(_QWORD*)(v3 + 432);
      v15 = *(_QWORD*)(a2 + 8);
      v16 = *(_QWORD*)(a2 + 16);
      if (v15 == v16) {
        v22 = false;
      }
      else {
        v37 = *(_QWORD*)(v3 + 432);
        v17 = v5;
        v18 = v6;
        v19 = v15 + 8;
        do {
          v20 = *(_QWORD*)(v19 - 8);
          v39 = 16;
          v38[0] = v20;
          v21 = game_UnitPool_Find_6ead60(v38, &v39);
          v22 = v3 == v21;
          v23 = v3 == v21 || v19 == v16;
          v19 += 8;
        } while (!v23);
        v6 = v18;
        v5 = v17;
        v14 = v37;
      }
      v24 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 104, 16, 0);
      *(_WORD*)(v24 + 16) = 0;
      *(_DWORD*)(v24 + 40) = 0;
      *(_QWORD*)(v24 + 48) = 0;
      *(_QWORD*)(v24 + 56) = 0;
      *(_QWORD*)(v24 + 64) = 0;
      *(_QWORD*)(v24 + 72) = 0;
      *(_QWORD*)(v24 + 88) = v3;
      *(_BYTE*)(v24 + 96) = v22;
      *(_BYTE*)(v24 + 97) = v8 < v34;
      *(_WORD*)(v24 + 80) = 257;
      *(_BYTE*)(v24 + 82) = 1;
      *(_QWORD*)v24 = game_cmdbtl_anonymous_UnitMenuItem_vtable;
      *(_QWORD*)(v24 + 8) = 0;
      GameRoutine_16e0c00(a1, v24);
      v25 = *(_QWORD*)(v3 + 392);
      v26 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v27 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      else {
        v27 = 0;
      }
      v11 = v25 == v27;
      v28 = *(_DWORD*)(v3 + 416);
      v29 = *(unsigned __int8*)(v3 + 501);
      if (v11) {
        v5 = v3;
      }
      if ((v28 & 0x80000) != 0) {
        v6 = v3;
      }
      if ((v28 & 0x100000) != 0) {
        v10 = *(unsigned __int8*)(v3 + 501);
      }
      else {
        v10 = -1;
      }
      if (game_GameModeData_instance_ != 0) {
        v26 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      ++v8;
      v3 = v14;
      v9 = (v4 != v29) | v7;
      if (v4 < 0) {
        v9 = v7;
      }
      else {
        v10 = v4;
      }
      v11 = v25 == v26;
      if (v25 == v26) {
        v12 = v4;
      }
      else {
        v12 = v10;
      }
      if (v11) {
        v13 = v7;
      }
      else {
        v13 = v9;
      }
      if ((v28 & 0x100000) != 0) {
        v4 = v12;
        v7 = v13;
      }
    } while (v14 != 0);
  }
  else {
    LOBYTE(v7) = 0;
    v6 = 0;
    v5 = 0;
  }
  v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0);
  v31 = v5;
  v32 = v30;
  *(_BYTE*)(v30 + 16) = v7 & 1;
  *(_QWORD*)(v30 + 24) = v31;
  *(_QWORD*)(v30 + 32) = v6;
  v38[4] = v30;
  *(_QWORD*)v30 = GameData_206e870;
  *(_QWORD*)(v30 + 8) = a1;
  GameRoutine_1626520((__int64)a1, (__int64)v38);
  (*(void (**)(__int64))(*(_QWORD*)v32 + 40LL))(v32);
  return (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 1032LL))(a1);
}

#pragma GCC visibility pop
