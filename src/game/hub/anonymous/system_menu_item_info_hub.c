#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_1855a20(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_hub_anonymous_DungeonMenuItem_Info_Reliance_vtable[])();
extern __int64 (*game_hub_anonymous_DungeonMenuItem_Info_Roster_vtable[])();
extern __int64 (*game_hub_anonymous_DungeonMenuItem_Info_Troop_vtable[])();
extern __int64 (*game_hub_anonymous_HubMenuItem_Info_Dispatch_vtable[])();
extern __int64 GameData_1ad2a61;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d648[8];
extern __int64* GameData_212d650[7];
extern __int64* GameData_212d658[6];
extern __int64* GameData_212d6a0[2];
extern __int64* GameData_212d6c0[3];
extern __int64* GameData_212d6c8[2];
extern __int64* GameData_212e030[4];
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64 SystemMenuItem_Info_Hub_Unknown25(__int64 a1);

__int64 SystemMenuItem_Info_Hub_Unknown25(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BOOL4 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v46[2];

  v2 = GameRoutine_820d50(11);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) != 0) {
    v4 = *(_DWORD*)(v3 + 32) == 0;
    result = 1;
    if (!v4) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 8);
    v45 = a1;
    *(_QWORD*)((char*)v46 + 4) = 0;
    v7 = *(_QWORD*)(v6 + 152);
    LODWORD(v46[0]) = 1;
    if (v7 != 0) {
      v8 = v7;
    }
    else {
      v8 = v6;
    }
    v9 = GameRoutine_16eb960(v8, &v45);
    v10 = *(_QWORD*)(a1 + 8);
    v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v10 == 0 ||
        (v12 = __dynamic_cast(v10, GameData_212e030[0], GameData_212d6a0[0],
                              0)) == 0 ||
        *(_DWORD*)(v12 + 1068) != 2) {
      v34 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      *(_QWORD*)(v34 + 16) = 0;
      *(_QWORD*)(v34 + 24) = 0;
      *(_QWORD*)(v34 + 32) = 0;
      *(_QWORD*)(v34 + 40) = 0;
      *(_QWORD*)(v34 + 80) = 0;
      *(_QWORD*)(v34 + 88) = 0;
      *(_QWORD*)(v34 + 96) = 0;
      *(_QWORD*)(v34 + 104) = 0;
      *(_QWORD*)(v34 + 112) = 0;
      *(_QWORD*)(v34 + 120) = 0;
      *(_QWORD*)(v34 + 128) = 0;
      *(_QWORD*)(v34 + 136) = 0;
      *(_BYTE*)(v34 + 17) = 0;
      *(_QWORD*)(v34 + 48) = 0;
      *(_QWORD*)(v34 + 56) = 0;
      *(_QWORD*)(v34 + 64) = 0;
      *(_QWORD*)(v34 + 72) = 0;
      *(_WORD*)(v34 + 80) = 257;
      *(_BYTE*)(v34 + 82) = 1;
      *(_QWORD*)v34 = GameData_212d6c0[0] + 2;
      *(_QWORD*)(v34 + 8) = 0;
      GameRoutine_16e0c00(v9, v34);
      v35 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      *(_QWORD*)(v35 + 16) = 0;
      *(_QWORD*)(v35 + 24) = 0;
      *(_QWORD*)(v35 + 32) = 0;
      *(_QWORD*)(v35 + 40) = 0;
      *(_QWORD*)(v35 + 80) = 0;
      *(_QWORD*)(v35 + 88) = 0;
      *(_QWORD*)(v35 + 96) = 0;
      *(_QWORD*)(v35 + 104) = 0;
      *(_QWORD*)(v35 + 112) = 0;
      *(_QWORD*)(v35 + 120) = 0;
      *(_QWORD*)(v35 + 128) = 0;
      *(_QWORD*)(v35 + 136) = 0;
      *(_BYTE*)(v35 + 17) = 0;
      *(_QWORD*)(v35 + 48) = 0;
      *(_QWORD*)(v35 + 56) = 0;
      *(_QWORD*)(v35 + 64) = 0;
      *(_QWORD*)(v35 + 72) = 0;
      *(_WORD*)(v35 + 80) = 257;
      *(_BYTE*)(v35 + 82) = 1;
      *(_QWORD*)v35 = GameData_212d648[0] + 2;
      *(_QWORD*)(v35 + 8) = 0;
      GameRoutine_16e0c00(v9, v35);
      v36 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      *(_QWORD*)(v36 + 16) = 0;
      *(_QWORD*)(v36 + 24) = 0;
      *(_QWORD*)(v36 + 32) = 0;
      *(_QWORD*)(v36 + 40) = 0;
      v28 = (_QWORD*)v36;
      *(_QWORD*)(v36 + 80) = 0;
      *(_QWORD*)(v36 + 88) = 0;
      *(_QWORD*)(v36 + 96) = 0;
      *(_QWORD*)(v36 + 104) = 0;
      *(_QWORD*)(v36 + 112) = 0;
      *(_QWORD*)(v36 + 120) = 0;
      *(_QWORD*)(v36 + 128) = 0;
      *(_QWORD*)(v36 + 136) = 0;
      *(_BYTE*)(v36 + 17) = 0;
      *(_QWORD*)(v36 + 48) = 0;
      *(_QWORD*)(v36 + 56) = 0;
      *(_QWORD*)(v36 + 64) = 0;
      *(_QWORD*)(v36 + 72) = 0;
      *(_WORD*)(v36 + 80) = 257;
      *(_BYTE*)(v36 + 82) = 1;
      *(_QWORD*)v36 = GameData_212d650[0] + 2;
      *(_QWORD*)(v36 + 8) = 0;
    LABEL_23:
      GameRoutine_16e0c00(v9, v28);
      v37 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      v38 = *(_QWORD*)(a1 + 8);
      if (v38 != 0 && (v39 = __dynamic_cast(v38, GameData_212e030[0],
                                            GameData_212d6a0[0], 0)) != 0) {
        v40 = *(unsigned int*)(v39 + 1068);
      }
      else {
        v40 = 0;
      }
      GameRoutine_1855a20(v37, v40);
      GameRoutine_16e0c00(v9, v37);
      v41 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      *(_QWORD*)(v41 + 16) = 0;
      *(_QWORD*)(v41 + 24) = 0;
      *(_QWORD*)(v41 + 32) = 0;
      *(_QWORD*)(v41 + 40) = 0;
      *(_QWORD*)(v41 + 80) = 0;
      *(_QWORD*)(v41 + 88) = 0;
      *(_QWORD*)(v41 + 96) = 0;
      *(_QWORD*)(v41 + 104) = 0;
      *(_QWORD*)(v41 + 112) = 0;
      *(_QWORD*)(v41 + 120) = 0;
      *(_QWORD*)(v41 + 128) = 0;
      *(_QWORD*)(v41 + 136) = 0;
      *(_BYTE*)(v41 + 17) = 0;
      *(_QWORD*)(v41 + 48) = 0;
      *(_QWORD*)(v41 + 56) = 0;
      *(_QWORD*)(v41 + 64) = 0;
      *(_QWORD*)(v41 + 72) = 0;
      *(_WORD*)(v41 + 80) = 257;
      *(_BYTE*)(v41 + 82) = 1;
      *(_QWORD*)v41 = GameData_212d658[0] + 2;
      *(_QWORD*)(v41 + 8) = 0;
      GameRoutine_16e0c00(v9, v41);
      v42 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      *(_QWORD*)(v42 + 16) = 0;
      *(_QWORD*)(v42 + 24) = 0;
      *(_QWORD*)(v42 + 32) = 0;
      *(_QWORD*)(v42 + 40) = 0;
      *(_QWORD*)(v42 + 80) = 0;
      *(_QWORD*)(v42 + 88) = 0;
      *(_QWORD*)(v42 + 96) = 0;
      *(_QWORD*)(v42 + 104) = 0;
      *(_QWORD*)(v42 + 112) = 0;
      *(_QWORD*)(v42 + 120) = 0;
      *(_QWORD*)(v42 + 128) = 0;
      *(_QWORD*)(v42 + 136) = 0;
      *(_BYTE*)(v42 + 17) = 0;
      *(_QWORD*)(v42 + 48) = 0;
      *(_QWORD*)(v42 + 56) = 0;
      *(_QWORD*)(v42 + 64) = 0;
      *(_QWORD*)(v42 + 72) = 0;
      *(_WORD*)(v42 + 80) = 257;
      *(_BYTE*)(v42 + 82) = 1;
      *(_QWORD*)v42 = GameData_212d6c8[0] + 2;
      *(_QWORD*)(v42 + 8) = 0;
      GameRoutine_16e0c00(v9, v42);
      v43 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
      *(_QWORD*)(v43 + 16) = 0;
      *(_QWORD*)(v43 + 24) = 0;
      *(_QWORD*)(v43 + 32) = 0;
      *(_QWORD*)(v43 + 40) = 0;
      *(_QWORD*)(v43 + 80) = 0;
      *(_QWORD*)(v43 + 88) = 0;
      *(_QWORD*)(v43 + 96) = 0;
      *(_QWORD*)(v43 + 104) = 0;
      *(_QWORD*)(v43 + 112) = 0;
      *(_QWORD*)(v43 + 120) = 0;
      *(_QWORD*)(v43 + 128) = 0;
      *(_QWORD*)(v43 + 136) = 0;
      *(_BYTE*)(v43 + 17) = 0;
      *(_QWORD*)(v43 + 48) = 0;
      *(_QWORD*)(v43 + 56) = 0;
      *(_QWORD*)(v43 + 64) = 0;
      *(_QWORD*)(v43 + 72) = 0;
      *(_WORD*)(v43 + 80) = 257;
      *(_BYTE*)(v43 + 82) = 1;
      *(_QWORD*)v43 = game_hub_anonymous_HubMenuItem_Info_Dispatch_vtable;
      *(_QWORD*)(v43 + 8) = 0;
      v46[0] = &GameData_1ad2a61;
      v45 = game_HashString(&GameData_1ad2a61);
      if (game_GameModeData_instance_ != 0) {
        v44 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v45);
        if (v44 != 0 && *(_DWORD*)(v44 + 32) != 0) {
          *(_BYTE*)(v43 + 81) = 0;
        }
      }
      GameRoutine_16e0c00(v9, v43);
      return 10;
    }
    v13 = fw_memory_HeapManager_Allocate(*v11, 176, 16, 0);
    v14 = (_QWORD*)v13;
    *(_QWORD*)(v13 + 16) = 0;
    *(_QWORD*)(v13 + 24) = 0;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 80) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_BYTE*)(v13 + 17) = 0;
    *(_QWORD*)v13 = game_hub_anonymous_DungeonMenuItem_Info_Troop_vtable;
    *(_QWORD*)(v13 + 8) = 0;
    v15 = *(_DWORD*)(a1 + 88);
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_WORD*)(v13 + 80) = 257;
    *(_BYTE*)(v13 + 82) = 1;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 160) = 0;
    *(_QWORD*)(v13 + 168) = 0;
    *(_DWORD*)(v13 + 144) = v15;
    v17 = *(_QWORD*)(a1 + 96);
    v16 = *(_QWORD*)(a1 + 104);
    v18 = v16 - v17;
    if (v16 != v17) {
      if (v18 < 0) {
        goto LABEL_33;
      }
      v19 = fw_memory_HeapManager_Allocate(*v11, v16 - v17, 16, 0);
      v20 = v19 + v18;
      v14[19] = v19;
      v14[21] = v19 + v18;
      memcpy(v19, v17, v18);
      v14[20] = v20;
    }
    GameRoutine_16e0c00(v9, v14);
    v13 = fw_memory_HeapManager_Allocate(*v11, 176, 16, 0);
    v21 = (_QWORD*)v13;
    *(_QWORD*)(v13 + 16) = 0;
    *(_QWORD*)(v13 + 24) = 0;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 80) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_BYTE*)(v13 + 17) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_QWORD*)v13 = game_hub_anonymous_DungeonMenuItem_Info_Roster_vtable;
    *(_QWORD*)(v13 + 8) = 0;
    v22 = *(_DWORD*)(a1 + 88);
    *(_WORD*)(v13 + 80) = 257;
    *(_BYTE*)(v13 + 82) = 1;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 160) = 0;
    *(_QWORD*)(v13 + 168) = 0;
    *(_DWORD*)(v13 + 144) = v22;
    v24 = *(_QWORD*)(a1 + 96);
    v23 = *(_QWORD*)(a1 + 104);
    v25 = v23 - v24;
    if (v23 != v24) {
      if (v25 < 0) {
        goto LABEL_33;
      }
      v26 = fw_memory_HeapManager_Allocate(*v11, v23 - v24, 16, 0);
      v27 = v26 + v25;
      v21[19] = v26;
      v21[21] = v26 + v25;
      memcpy(v26, v24, v25);
      v21[20] = v27;
    }
    GameRoutine_16e0c00(v9, v21);
    v13 = fw_memory_HeapManager_Allocate(*v11, 176, 16, 0);
    *(_QWORD*)(v13 + 80) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    v28 = (_QWORD*)v13;
    *(_QWORD*)(v13 + 16) = 0;
    *(_QWORD*)(v13 + 24) = 0;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_BYTE*)(v13 + 17) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 160) = 0;
    *(_WORD*)(v13 + 80) = 257;
    *(_QWORD*)(v13 + 168) = 0;
    *(_BYTE*)(v13 + 82) = 1;
    *(_QWORD*)v13 = game_hub_anonymous_DungeonMenuItem_Info_Reliance_vtable;
    *(_QWORD*)(v13 + 8) = 0;
    *(_DWORD*)(v13 + 144) = *(_DWORD*)(a1 + 88);
    v30 = *(_QWORD*)(a1 + 96);
    v29 = *(_QWORD*)(a1 + 104);
    v31 = v29 - v30;
    if (v29 == v30) {
      goto LABEL_23;
    }
    if ((v31 & 0x8000000000000000LL) == 0) {
      v32 = fw_memory_HeapManager_Allocate(*v11, v29 - v30, 16, 0);
      v33 = v32 + v31;
      v28[19] = v32;
      v28[21] = v32 + v31;
      memcpy(v32, v30, v31);
      v28[20] = v33;
      goto LABEL_23;
    }
  LABEL_33:
    GameRoutine_688200(v13);
  }
  return result;
}

#pragma GCC visibility pop
