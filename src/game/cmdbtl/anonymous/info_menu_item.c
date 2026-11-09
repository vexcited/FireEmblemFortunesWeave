#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_1855a20(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_cmdbtl_anonymous_InfoSubMenuItem_Reliance_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_InfoSubMenuItem_Roster_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_InfoSubMenuItem_Troop_vtable[])();
extern __int64 GameData_210ba90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d658[6];
extern __int64* GameData_212d6a0[2];
extern __int64* GameData_212d6c8[2];
extern __int64* GameData_212e030[4];
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64 InfoMenuItem_Unknown25(__int64 a1);

__int64 InfoMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  int v30;
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
  int v43;
  __int64 v44;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e030[0], &GameData_210ba90, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v5 = GameRoutine_820d50(11);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v5)) != 0) {
    v7 = *(_DWORD*)(v6 + 32) == 0;
    result = 1;
    if (!v7) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    v42 = a1;
    v44 = 0;
    v10 = *(_QWORD*)(v9 + 152);
    v43 = 1;
    if (v10 != 0) {
      v11 = v10;
    }
    else {
      v11 = v9;
    }
    v12 = GameRoutine_16eb960(v11, &v42);
    v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         176, 16, 0);
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    v15 = (_QWORD*)v14;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = game_cmdbtl_anonymous_InfoSubMenuItem_Troop_vtable;
    *(_QWORD*)(v14 + 8) = 0;
    v16 = *(_DWORD*)(v4 + 1080);
    *(_QWORD*)(v14 + 152) = 0;
    *(_QWORD*)(v14 + 160) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_DWORD*)(v14 + 144) = v16;
    v17 = *(_QWORD*)(v4 + 1088);
    v18 = *(_QWORD*)(v4 + 1096);
    v19 = v18 - v17;
    if (v18 != v17) {
      if (v19 < 0) {
        goto LABEL_30;
      }
      v20 = fw_memory_HeapManager_Allocate(*v13, v18 - v17, 16, 0);
      v21 = v20 + v19;
      v15[19] = v20;
      v15[21] = v20 + v19;
      memcpy(v20, v17, v19);
      v15[20] = v21;
    }
    GameRoutine_16e0c00(v12, v15);
    v14 = fw_memory_HeapManager_Allocate(*v13, 176, 16, 0);
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    v22 = (_QWORD*)v14;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = game_cmdbtl_anonymous_InfoSubMenuItem_Roster_vtable;
    *(_QWORD*)(v14 + 8) = 0;
    v23 = *(_DWORD*)(v4 + 1080);
    *(_QWORD*)(v14 + 152) = 0;
    *(_QWORD*)(v14 + 160) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_DWORD*)(v14 + 144) = v23;
    v24 = *(_QWORD*)(v4 + 1088);
    v25 = *(_QWORD*)(v4 + 1096);
    v26 = v25 - v24;
    if (v25 != v24) {
      if (v26 < 0) {
        goto LABEL_30;
      }
      v27 = fw_memory_HeapManager_Allocate(*v13, v25 - v24, 16, 0);
      v28 = v27 + v26;
      v22[19] = v27;
      v22[21] = v27 + v26;
      memcpy(v27, v24, v26);
      v22[20] = v28;
    }
    GameRoutine_16e0c00(v12, v22);
    v14 = fw_memory_HeapManager_Allocate(*v13, 176, 16, 0);
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    v29 = (_QWORD*)v14;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = game_cmdbtl_anonymous_InfoSubMenuItem_Reliance_vtable;
    *(_QWORD*)(v14 + 8) = 0;
    v30 = *(_DWORD*)(v4 + 1080);
    *(_QWORD*)(v14 + 152) = 0;
    *(_QWORD*)(v14 + 160) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_DWORD*)(v14 + 144) = v30;
    v31 = *(_QWORD*)(v4 + 1088);
    v32 = *(_QWORD*)(v4 + 1096);
    v33 = v32 - v31;
    if (v32 == v31) {
    LABEL_22:
      GameRoutine_16e0c00(v12, v29);
      if ((*(_BYTE*)(a1 + 83) & 1) == 0) {
        v36 = fw_memory_HeapManager_Allocate(*v13, 144, 16, 0);
        v37 = *(_QWORD*)(a1 + 8);
        if (v37 != 0 && (v38 = __dynamic_cast(v37, GameData_212e030[0],
                                              GameData_212d6a0[0], 0)) != 0) {
          v39 = *(unsigned int*)(v38 + 1068);
        }
        else {
          v39 = 0;
        }
        GameRoutine_1855a20(v36, v39);
        GameRoutine_16e0c00(v12, v36);
      }
      v40 = fw_memory_HeapManager_Allocate(*v13, 144, 16, 0);
      *(_QWORD*)(v40 + 16) = 0;
      *(_QWORD*)(v40 + 24) = 0;
      *(_QWORD*)(v40 + 32) = 0;
      *(_QWORD*)(v40 + 40) = 0;
      *(_QWORD*)(v40 + 80) = 0;
      *(_QWORD*)(v40 + 88) = 0;
      *(_QWORD*)(v40 + 96) = 0;
      *(_QWORD*)(v40 + 104) = 0;
      *(_QWORD*)(v40 + 112) = 0;
      *(_QWORD*)(v40 + 120) = 0;
      *(_QWORD*)(v40 + 128) = 0;
      *(_QWORD*)(v40 + 136) = 0;
      *(_BYTE*)(v40 + 17) = 0;
      *(_QWORD*)(v40 + 48) = 0;
      *(_QWORD*)(v40 + 56) = 0;
      *(_QWORD*)(v40 + 64) = 0;
      *(_QWORD*)(v40 + 72) = 0;
      *(_WORD*)(v40 + 80) = 257;
      *(_BYTE*)(v40 + 82) = 1;
      *(_QWORD*)v40 = GameData_212d658[0] + 2;
      *(_QWORD*)(v40 + 8) = 0;
      GameRoutine_16e0c00(v12, v40);
      v41 = fw_memory_HeapManager_Allocate(*v13, 144, 16, 0);
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
      *(_QWORD*)v41 = GameData_212d6c8[0] + 2;
      *(_QWORD*)(v41 + 8) = 0;
      GameRoutine_16e0c00(v12, v41);
      return 10;
    }
    if ((v33 & 0x8000000000000000LL) == 0) {
      v34 = fw_memory_HeapManager_Allocate(*v13, v32 - v31, 16, 0);
      v35 = v34 + v33;
      v29[19] = v34;
      v29[21] = v34 + v33;
      memcpy(v34, v31, v33);
      v29[20] = v35;
      goto LABEL_22;
    }
  LABEL_30:
    GameRoutine_688200(v14);
  }
  return result;
}

#pragma GCC visibility pop
