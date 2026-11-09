#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_18560c0(int);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1ad89f9;
extern _UNKNOWN GameData_1aef9e3;
extern __int64 (*game_menu_anonymous_FacilityBlacksmithMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_FacilityItemMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_FacilityTempleMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_FacilityWeaponMenuItem_vtable[])();
extern __int64 GameData_20ecfd8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c970[153];
extern __int64* GameData_212e030[4];
__int64 SystemMenuItem_Facility_Unknown25(__int64 a1);

__int64 SystemMenuItem_Facility_Unknown25(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  bool v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;

  v1 = *(unsigned __int8*)(a1 + 84);
  result = 1;
  if (v1 != 1 || (*(_BYTE*)(a1 + 82) & 1) == 0) {
    return result;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v47 = a1;
  v49 = 0;
  v5 = *(_QWORD*)(v4 + 152);
  v48 = 1;
  if (v5 != 0) {
    v6 = v5;
  }
  else {
    v6 = v4;
  }
  v7 = GameRoutine_16eb960(v6, &v47);
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  *(_WORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_BYTE*)(v9 + 82) = 1;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_QWORD*)v9 = game_menu_anonymous_FacilityWeaponMenuItem_vtable;
  *(_QWORD*)(v9 + 8) = 0;
  v10 = game_HashString(&GameData_1ad89f9);
  v11 = GameData_212c970[0];
  if (v10 == 0) {
    goto LABEL_30;
  }
  v12 = *(_QWORD*)(*GameData_212c970[0] + 96);
  if (v12 == 0 || *(_QWORD*)(*GameData_212c970[0] + 112) == 0) {
    goto LABEL_30;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = v10;
    if (v10 >= v12) {
      v15 = v10 % v12;
    }
  }
  else {
    v15 = v14 & v10;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(*GameData_212c970[0] + 88) + 8 * v15);
  if (v16 == nullptr || (v17 = (_QWORD*)*v16) == nullptr) {
  LABEL_30:
    v19 = 0;
    goto LABEL_31;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v20 = v17[1];
      if (v20 == v10) {
        if (v17[2] == v10) {
          goto LABEL_88;
        }
      }
      else if ((v20 & v14) != v15) {
        goto LABEL_30;
      }
      v17 = (_QWORD*)*v17;
      v19 = 0;
      if (v17 == nullptr) {
        goto LABEL_31;
      }
    }
  }
  while (1) {
    v18 = v17[1];
    if (v18 == v10) {
      break;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_30;
    }
  LABEL_20:
    v17 = (_QWORD*)*v17;
    if (v17 == nullptr) {
      goto LABEL_30;
    }
  }
  if (v17[2] != v10) {
    goto LABEL_20;
  }

LABEL_88:
  v19 = v17[3];

LABEL_31:
  *(_QWORD*)(v9 + 144) = v19;
  v21 = GameRoutine_820d50(16);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_38;
  }
  v22 = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v21);
  if (v22 != 0 && *(_DWORD*)(v22 + 32) != 0) {
    goto LABEL_39;
  }
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_38;
  }
  v23 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v23 == 2) {
  LABEL_39:
    v24 = false;
  }
  else {
    if (v23 == 3) {
      v24 = *(_DWORD*)(game_GameModeData_instance_ + 64) != 1;
      goto LABEL_40;
    }
  LABEL_38:
    v24 = true;
  }

LABEL_40:
  *(_BYTE*)(v9 + 81) = v24;
  *(_BYTE*)(v9 + 82) = *(_QWORD*)(v9 + 144) != 0;
  GameRoutine_16e0c00(v7, v9);
  v25 = fw_memory_HeapManager_Allocate(*v8, 160, 16, 0);
  *(_WORD*)(v25 + 16) = 0;
  *(_DWORD*)(v25 + 40) = 0;
  *(_QWORD*)(v25 + 48) = 0;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  *(_BYTE*)(v25 + 82) = 1;
  *(_QWORD*)(v25 + 128) = 0;
  *(_WORD*)(v25 + 80) = 257;
  *(_QWORD*)v25 = game_menu_anonymous_FacilityItemMenuItem_vtable;
  *(_QWORD*)(v25 + 8) = 0;
  v26 = game_HashString(&GameData_1aef9e3);
  if (v26 == 0) {
    goto LABEL_64;
  }
  v27 = *(_QWORD*)(*v11 + 96);
  if (v27 == 0 || *(_QWORD*)(*v11 + 112) == 0) {
    goto LABEL_64;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v26;
    if (v26 >= v27) {
      v30 = v26 % v27;
    }
  }
  else {
    v30 = v29 & v26;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(*v11 + 88) + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_64:
    v34 = 0;
    goto LABEL_65;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v35 = v32[1];
      if (v35 == v26) {
        if (v32[2] == v26) {
          goto LABEL_89;
        }
      }
      else if ((v35 & v29) != v30) {
        goto LABEL_64;
      }
      v32 = (_QWORD*)*v32;
      v34 = 0;
      if (v32 == nullptr) {
        goto LABEL_65;
      }
    }
  }
  while (2) {
    v33 = v32[1];
    if (v33 != v26) {
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_64;
      }
    }
    else if (v32[2] == v26) {
    LABEL_89:
      v34 = v32[3];
    LABEL_65:
      *(_QWORD*)(v25 + 144) = v34;
      v36 = GameRoutine_820d50(17);
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_72;
      }
      v37 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v36);
      if (v37 != 0 && *(_DWORD*)(v37 + 32) != 0) {
        goto LABEL_73;
      }
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_72;
      }
      v38 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      if (v38 == 2) {
      LABEL_73:
        v39 = false;
      }
      else {
        if (v38 == 3) {
          v39 = *(_DWORD*)(game_GameModeData_instance_ + 64) != 1;
          goto LABEL_74;
        }
      LABEL_72:
        v39 = true;
      }
    LABEL_74:
      *(_BYTE*)(v25 + 81) = v39;
      *(_BYTE*)(v25 + 82) = v34 != 0;
      GameRoutine_16e0c00(v7, v25);
      v40 = fw_memory_HeapManager_Allocate(*v8, 144, 16, 0);
      *(_WORD*)(v40 + 16) = 0;
      *(_DWORD*)(v40 + 40) = 0;
      *(_QWORD*)(v40 + 48) = 0;
      *(_QWORD*)(v40 + 56) = 0;
      *(_QWORD*)(v40 + 64) = 0;
      *(_QWORD*)(v40 + 72) = 0;
      *(_BYTE*)(v40 + 80) = 1;
      *(_BYTE*)(v40 + 82) = 1;
      *(_QWORD*)(v40 + 128) = 0;
      *(_QWORD*)v40 = game_menu_anonymous_FacilityBlacksmithMenuItem_vtable;
      *(_QWORD*)(v40 + 8) = 0;
      v41 = GameRoutine_821090(9);
      v42 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v43 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v41);
        if (v43 == 0 || *(int*)(v43 + 32) < 1) {
          goto LABEL_81;
        }
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_82;
        }
        v44 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v44 == 2) {
        LABEL_81:
          v42 = 0;
        }
        else {
          if (v44 == 3) {
            v42 = *(_DWORD*)(game_GameModeData_instance_ + 64) != 1;
            goto LABEL_83;
          }
        LABEL_82:
          v42 = 1;
        }
      }
    LABEL_83:
      *(_BYTE*)(v40 + 81) = v42;
      GameRoutine_16e0c00(v7, v40);
      v45 = fw_memory_HeapManager_Allocate(*v8, 144, 16, 0);
      v46 = *(_QWORD*)(a1 + 8);
      if (v46 != 0) {
        v46 = __dynamic_cast(v46, GameData_212e030[0], &GameData_20ecfd8, 0);
        if (v46 != 0) {
          LODWORD(v46) = *(_DWORD*)(v46 + 1068);
        }
      }
      *(_WORD*)(v45 + 16) = 0;
      *(_DWORD*)(v45 + 40) = 0;
      *(_QWORD*)(v45 + 48) = 0;
      *(_QWORD*)(v45 + 56) = 0;
      *(_QWORD*)(v45 + 64) = 0;
      *(_QWORD*)(v45 + 72) = 0;
      *(_QWORD*)(v45 + 128) = 0;
      *(_BYTE*)(v45 + 80) = 1;
      *(_BYTE*)(v45 + 82) = 1;
      *(_QWORD*)v45 = game_menu_anonymous_FacilityTempleMenuItem_vtable;
      *(_QWORD*)(v45 + 8) = 0;
      *(_BYTE*)(v45 + 81) = GameRoutine_18560c0(v46) & 1;
      GameRoutine_16e0c00(v7, v45);
      return 10;
    }
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_64;
    }
    continue;
  }
}

#pragma GCC visibility pop
