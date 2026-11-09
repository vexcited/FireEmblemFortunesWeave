#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1212820(_QWORD);
__int64 GameRoutine_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                            __int64, __int64, __int64, int);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 GameRoutine_6e91b0(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_996d60(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_2054ee0[])();
extern __int64 (*GameData_2055430[])();
extern __int64 (*game_map_anonymous_SubDiscardMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_SubEquipMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_SubOpenMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_SubUseMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* game_g_empty_item_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
bool ItemMenuItem_15c1e60(__int64 a1);
__int64 ItemMenuItem_15c1fe0(__int64 a1);
__int64 ItemMenuItem_Unknown58(__int64 a1);
bool ItemMenuItem_15c2230(__int64 a1);
__int64 ItemMenuItem_Unknown70(__int64 a1, __int64 a2);
bool ItemMenuItem_Unknown71(__int64 a1);

bool ItemMenuItem_15c1e60(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  v1 = *(int*)(a1 + 40);
  if ((_DWORD)v1 == -1) {
    v2 = &game_g_empty_item;
  }
  else {
    v2 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
  return (*((_BYTE*)v2 + 3) & 0x20) == 0 && *(_WORD*)v2 != 0;
}

__int64 ItemMenuItem_15c1fe0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int16* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  char v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v27 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v27);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v5 = *(int*)(a1 + 40);
  v6 = *(_QWORD*)(a1 + 88);
  v7 = game_g_empty_item_ptr;
  if ((_DWORD)v5 == -1) {
    v8 = (unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v8 = (unsigned __int16*)(v6 + 8 * v5 + 828);
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  GameRoutine_15792c0(v4, v8, 0, 1u, v6, (__int64)"L_Icon", (__int64)"T_Txt",
                      v9 & 1);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v28 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v28);
  if (v12 == nullptr) {
  LABEL_13:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_14:
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v14 = *(int*)(a1 + 40);
  if ((_DWORD)v14 == -1) {
    v15 = v7;
  }
  else {
    v15 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v14 + 828);
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)v15);
  v17 = *((_DWORD*)v15 + 1);
  v18 = *((unsigned __int8*)v15 + 2);
  v19 = (v17 & 0xF) * *(unsigned __int8*)(v16 + 87);
  v20 = 64;
  if ((v13 & 1) != 0) {
    v20 = 60;
  }
  v21 = 72;
  if ((v13 & 1) != 0) {
    v21 = 36;
  }
  if (v19 <= v18) {
    v22 = v20;
  }
  else {
    v22 = v21;
  }
  v23 = *(_DWORD*)((char*)GameData_212da30 + v22);
  result = ui_LayoutAccessor_FindTextBox(v12, "T_Num");
  if (result != 0) {
    result = Pane_58f8a0(result, v25, v26);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v23;
    }
  }
  return result;
}

__int64 ItemMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v4;
  __int64* v5;
  __int64 v7;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  v4 = game_g_empty_item_ptr;
  if ((_DWORD)v1 == -1) {
    v5 = game_g_empty_item_ptr;
  }
  else {
    v5 = (__int64*)(v2 + 8 * v1 + 828);
  }
  if ((GameRoutine_6e8bc0(v5, v2) & 1) != 0) {
    return 1;
  }
  v7 = *(int*)(a1 + 40);
  if ((_DWORD)v7 == -1) {
    return GameRoutine_6e91b0(v4);
  }
  else {
    return GameRoutine_6e91b0(*(_QWORD*)(a1 + 88) + 8 * v7 + 828);
  }
}

bool ItemMenuItem_15c2230(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(unsigned __int16*)(v1 + 1952);
  v3 = *(_QWORD*)(*GameData_212c878[0] + 64);
  if (*(_WORD*)(v1 + 1952) != 0) {
    v2 = *(_QWORD*)(v3 + 8 * v2);
  }
  v4 = *(int*)(a1 + 40);
  v5 = (__int64*)(v1 + 8 * v4 + 828);
  if ((_DWORD)v4 == -1) {
    v5 = &game_g_empty_item;
  }
  return v2 == *(_QWORD*)(v3 + 8LL * *(unsigned __int16*)v5);
}

__int64 ItemMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int16* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  bool v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int16* v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  unsigned int v39;
  unsigned __int16* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  int v50;
  bool v51;
  __int64 v52;
  __int64 result;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD v57[4];
  _QWORD* v58;
  __int64 v59;

  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v6 = *(_QWORD*)(a1 + 88);
  v7 = *(int*)(a1 + 40);
  *(_WORD*)(v5 + 16) = 0;
  v8 = v5;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_BYTE*)(v5 + 80) = 1;
  *(_QWORD*)v5 = game_map_anonymous_SubOpenMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 144) = v6;
  *(_DWORD*)(v5 + 40) = v7;
  v9 = (unsigned __int16*)(v6 + 8 * v7 + 828);
  v10 = GameData_212c878[0];
  v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v9);
  if (*(_BYTE*)(v11 + 72) == 14) {
    v12 = *(unsigned __int8*)(v11 + 73);
    LOBYTE(v13) = 0;
    if (v12 > 0x11) {
      goto LABEL_14;
    }
    if (((1 << v12) & 0x800C) != 0) {
      LODWORD(v13) =
          *(unsigned __int8*)(v11 + 88) >> ((*((_BYTE*)v9 + 3) & 8) != 0);
      if ((_DWORD)v13 == 0) {
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    if (((1 << v12) & 0x10030) != 0) {
    LABEL_13:
      LOBYTE(v13) = v12 == 17;
      goto LABEL_14;
    }
    if (v12 != 17) {
      goto LABEL_14;
    }
    v13 = *(_QWORD*)(v11 + 376);
    if (v13 == 0) {
      goto LABEL_14;
    }
    v14 = *((_DWORD*)v9 + 1);
    if ((v14 & 0x3FF0) != 0) {
      v15 = v9;
      v16 = GameRoutine_996d60(v13, ((v14 >> 4) & 0x3FF) - 1, 1000);
      if (v16 != 0) {
        v13 = *(_QWORD*)(v16 + 40);
        v9 = v15;
        if (v13 == 0) {
          goto LABEL_14;
        }
        v12 =
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *v15) +
                                73LL);
        goto LABEL_13;
      }
      LOBYTE(v13) = 0;
      v9 = v15;
    LABEL_14:
      *(_BYTE*)(v8 + 81) = v13;
      *(_BYTE*)(v8 + 82) = GameRoutine_6e91b0(v9) & 1;
      GameRoutine_16e0c00(a2, v8);
      v17 = fw_memory_HeapManager_Allocate(*v4, 224, 16, 0);
      v18 = *(_QWORD*)(a1 + 88);
      v19 = *(int*)(a1 + 40);
      *(_WORD*)(v17 + 16) = 0;
      *(_QWORD*)(v17 + 48) = 0;
      *(_QWORD*)(v17 + 56) = 0;
      v20 = v17;
      *(_QWORD*)(v17 + 64) = 0;
      *(_QWORD*)(v17 + 72) = 0;
      *(_BYTE*)(v17 + 82) = 1;
      *(_QWORD*)(v17 + 128) = 0;
      *(_WORD*)(v17 + 80) = 257;
      v57[0] = GameData_2054ee0;
      v57[1] = a1;
      v58 = v57;
      *(_QWORD*)(v17 + 168) = a1;
      *(_QWORD*)v17 = game_map_anonymous_SubEquipMenuItem_vtable;
      *(_QWORD*)(v17 + 8) = 0;
      *(_QWORD*)(v17 + 160) = GameData_2054ee0;
      *(_QWORD*)(v17 + 192) = v17 + 160;
      *(_QWORD*)(v17 + 144) = v18;
      *(_DWORD*)(v17 + 40) = v19;
      v21 = v18 + 8 * v19;
      v22 = *(_BYTE*)(v21 + 831);
      *(_BYTE*)(v17 + 208) = (v22 & 1) == 0;
      v27 =
          (v22 & 0x20) == 0 &&
          (*(_BYTE*)((v23 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                       8LL * *(unsigned __int16*)(v21 + 828))) +
                     336) &
           8) == 0 &&
          ((v24 = *(unsigned __int8*)(v23 + 72),
            v25 = (1LL << *(_BYTE*)(v23 + 73)) & 0x7DC, v24 <= 7)
               ? (v26 = v25 == 0)
               : (v26 = true),
           v26) &&
          ((1LL << v24) & 0x20FF) != 0;
      *(_BYTE*)(v17 + 81) = v27;
      *(_BYTE*)(v17 + 82) = GameRoutine_6e8bc0(v21 + 828, v18) & 1;
      GameRoutine_16e0c00(a2, v20);
      if (v58 == v57) {
        v29 = 32;
      }
      else {
        if (v58 == nullptr) {
          goto LABEL_28;
        }
        v29 = 40;
      }
      (*(void (**)(_QWORD*, __int64))(*v58 + v29))(v58, v28);
    LABEL_28:
      v30 = fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
      v31 = *(_QWORD*)(a1 + 88);
      v32 = *(int*)(a1 + 40);
      *(_WORD*)(v30 + 16) = 0;
      v33 = v30;
      *(_QWORD*)(v30 + 48) = 0;
      *(_QWORD*)(v30 + 56) = 0;
      *(_QWORD*)(v30 + 64) = 0;
      *(_QWORD*)(v30 + 72) = 0;
      *(_BYTE*)(v30 + 80) = 1;
      *(_QWORD*)(v30 + 128) = 0;
      *(_QWORD*)v30 = game_map_anonymous_SubUseMenuItem_vtable;
      *(_QWORD*)(v30 + 8) = 0;
      v34 = *v10;
      *(_QWORD*)(v30 + 144) = v31;
      *(_DWORD*)(v30 + 40) = v32;
      v35 = (unsigned __int16*)(v31 + 8 * v32 + 828);
      v36 = *(_QWORD*)(*(_QWORD*)(v34 + 64) + 8LL * *v35);
      if (*(_BYTE*)(v36 + 72) != 14) {
        goto LABEL_38;
      }
      v37 = *(unsigned __int8*)(v36 + 73);
      LOBYTE(v38) = 0;
      if (v37 > 0x11) {
        goto LABEL_41;
      }
      if (((1 << v37) & 0x800C) != 0) {
        LODWORD(v38) =
            *(unsigned __int8*)(v36 + 88) >> ((*((_BYTE*)v35 + 3) & 8) != 0);
        if ((_DWORD)v38 != 0) {
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      if (((1 << v37) & 0x10030) != 0) {
      LABEL_40:
        LOBYTE(v38) = v37 != 17;
        goto LABEL_41;
      }
      if (v37 == 17) {
        v38 = *(_QWORD*)(v36 + 376);
        if (v38 != 0) {
          v39 = *((_DWORD*)v35 + 1);
          if ((v39 & 0x3FF0) != 0) {
            v40 = v35;
            v41 = GameRoutine_996d60(v38, ((v39 >> 4) & 0x3FF) - 1, 1000);
            if (v41 == 0) {
              LOBYTE(v38) = 0;
              v35 = v40;
              goto LABEL_41;
            }
            v38 = *(_QWORD*)(v41 + 40);
            v35 = v40;
            if (v38 != 0) {
              v37 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                                   8LL * *v40) +
                                        73LL);
              goto LABEL_40;
            }
            goto LABEL_41;
          }
        LABEL_38:
          LOBYTE(v38) = 0;
        }
      }
    LABEL_41:
      *(_BYTE*)(v33 + 81) = v38;
      *(_BYTE*)(v33 + 82) = GameRoutine_6e91b0(v35) & 1;
      GameRoutine_16e0c00(a2, v33);
      v42 = fw_memory_HeapManager_Allocate(*v4, 208, 16, 0);
      v43 = *(_QWORD*)(a1 + 88);
      v44 = *(int*)(a1 + 40);
      *(_WORD*)(v42 + 16) = 0;
      *(_QWORD*)(v42 + 48) = 0;
      *(_QWORD*)(v42 + 56) = 0;
      v45 = v42;
      *(_QWORD*)(v42 + 64) = 0;
      *(_QWORD*)(v42 + 72) = 0;
      *(_BYTE*)(v42 + 82) = 1;
      *(_QWORD*)(v42 + 128) = 0;
      *(_WORD*)(v42 + 80) = 257;
      v57[0] = GameData_2055430;
      v57[1] = a1;
      v58 = v57;
      *(_QWORD*)(v42 + 168) = a1;
      *(_QWORD*)v42 = game_map_anonymous_SubDiscardMenuItem_vtable;
      *(_QWORD*)(v42 + 8) = 0;
      *(_QWORD*)(v42 + 160) = GameData_2055430;
      *(_QWORD*)(v42 + 192) = v42 + 160;
      *(_QWORD*)(v42 + 144) = v43;
      v46 = v43 + 8 * v44;
      *(_DWORD*)(v42 + 40) = v44;
      v47 = *(unsigned __int16*)(v46 + 828);
      if (*(_WORD*)(v46 + 828) == 0 ||
          (*((_BYTE*)(v48 = (__int64*)(v46 + 828)) + 3) & 0x10) != 0 ||
          (v49 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8 * v47)) != 0 &&
              ((unsigned int)*(unsigned __int8*)(v49 + 72) - 5 < 2 ||
               ((v50 = *(_DWORD*)(v49 + 336)) & 1) != 0 ||
               (v50 & 2) != 0 && (v59 = *v48, (unsigned int)GameRoutine_1212820(
                                                  &v59) == 1))) {
        v51 = false;
      }
      else {
        v55 = GameRoutine_820d50(15);
        v51 = game_GameModeData_instance_ == 0 ||
              (v56 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v55)) == 0 ||
              *(_DWORD*)(v56 + 32) == 0;
      }
      *(_BYTE*)(v45 + 81) = v51;
      GameRoutine_16e0c00(a2, v45);
      result = (__int64)v58;
      if (v58 == v57) {
        v54 = 32;
      }
      else {
        if (v58 == nullptr) {
          return result;
        }
        v54 = 40;
      }
      return (*(__int64 (**)(_QWORD*, __int64))(*v58 + v54))(v58, v52);
    }
  }
  LOBYTE(v13) = 0;
  goto LABEL_14;
}

bool ItemMenuItem_Unknown71(__int64 a1)
{
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  unsigned int v5;
  _BOOL4 v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int16* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  bool v17;
  _BOOL4 v18;
  __int64 v19;
  unsigned __int16* v20;
  __int64 v21;
  unsigned int v22;
  _BOOL4 v23;
  __int64 v24;
  unsigned int v25;
  unsigned __int16* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  _BOOL4 v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v2 = (unsigned __int16*)(*(_QWORD*)(a1 + 88) + 8LL * *(int*)(a1 + 40) + 828);
  v3 = GameData_212c878[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
  if (*(_BYTE*)(v4 + 72) != 14) {
  LABEL_13:
    v6 = false;
    goto LABEL_14;
  }
  v5 = *(unsigned __int8*)(v4 + 73);
  v6 = false;
  if (v5 > 0x11) {
    goto LABEL_14;
  }
  if (((1 << v5) & 0x800C) != 0) {
    if (*(unsigned __int8*)(v4 + 88) >> ((*((_BYTE*)v2 + 3) & 8) != 0) != 0) {
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  if (((1 << v5) & 0x10030) != 0) {
  LABEL_12:
    v6 = v5 == 17;
    goto LABEL_14;
  }
  if (v5 != 17) {
    goto LABEL_14;
  }
  v7 = *(_QWORD*)(v4 + 376);
  if (v7 == 0) {
    goto LABEL_13;
  }
  v8 = *((_DWORD*)v2 + 1);
  if ((v8 & 0x3FF0) == 0) {
    goto LABEL_13;
  }
  v9 = v2;
  v10 = GameRoutine_996d60(v7, ((v8 >> 4) & 0x3FF) - 1, 1000);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 40);
    v2 = v9;
    if (v11 != 0) {
      v5 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v9) +
                               73LL);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v6 = false;
  v2 = v9;

LABEL_14:
  GameRoutine_6e91b0(v2);
  v12 = *(_QWORD*)(a1 + 88);
  v13 = v12 + 8LL * *(int*)(a1 + 40);
  v18 = (*(_BYTE*)(v13 + 831) & 0x20) == 0 &&
        (*(_BYTE*)((v14 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                     8LL * *(unsigned __int16*)(v13 + 828))) +
                   336) &
         8) == 0 &&
        ((v15 = *(unsigned __int8*)(v14 + 72),
          v16 = (1LL << *(_BYTE*)(v14 + 73)) & 0x7DC, v15 <= 7)
             ? (v17 = v16 == 0)
             : (v17 = true),
         v17) &&
        ((1LL << v15) & 0x20FF) != 0;
  GameRoutine_6e8bc0(v13 + 828, v12);
  v19 = *(_QWORD*)(a1 + 88);
  v20 = (unsigned __int16*)(v19 + 8LL * *(int*)(a1 + 40) + 828);
  v21 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v20);
  if (*(_BYTE*)(v21 + 72) != 14) {
    goto LABEL_35;
  }
  v22 = *(unsigned __int8*)(v21 + 73);
  v23 = false;
  if (v22 <= 0x11) {
    if (((1 << v22) & 0x800C) != 0) {
      if (*(unsigned __int8*)(v21 + 88) >>
              ((*(_BYTE*)(v19 + 8LL * *(int*)(a1 + 40) + 831) & 8) != 0) !=
          0) {
        goto LABEL_34;
      }
      goto LABEL_35;
    }
    if (((1 << v22) & 0x10030) != 0) {
    LABEL_34:
      v23 = v22 != 17;
      goto LABEL_36;
    }
    if (v22 == 17) {
      v24 = *(_QWORD*)(v21 + 376);
      if (v24 != 0) {
        v25 = *(_DWORD*)(v19 + 8LL * *(int*)(a1 + 40) + 832);
        if ((v25 & 0x3FF0) != 0) {
          v26 = (unsigned __int16*)(v19 + 8LL * *(int*)(a1 + 40) + 828);
          v27 = GameRoutine_996d60(v24, ((v25 >> 4) & 0x3FF) - 1, 1000);
          if (v27 == 0) {
            v23 = false;
            v20 = v26;
            goto LABEL_36;
          }
          v28 = *(_QWORD*)(v27 + 40);
          v20 = v26;
          if (v28 != 0) {
            v22 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                                 8LL * *v26) +
                                      73LL);
            goto LABEL_34;
          }
        }
      }
    LABEL_35:
      v23 = false;
    }
  }

LABEL_36:
  GameRoutine_6e91b0(v20);
  v29 = *(_QWORD*)(a1 + 88) + 8LL * *(int*)(a1 + 40);
  v30 = *(unsigned __int16*)(v29 + 828);
  if (*(_WORD*)(v29 + 828) == 0 ||
      (*((_BYTE*)(v31 = (__int64*)(v29 + 828)) + 3) & 0x10) != 0 ||
      (v32 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v30)) != 0 &&
          ((unsigned int)*(unsigned __int8*)(v32 + 72) - 5 < 2 ||
           ((v33 = *(_DWORD*)(v32 + 336)) & 1) != 0 ||
           (v33 & 2) != 0 &&
               (v38 = *v31, (unsigned int)GameRoutine_1212820(&v38) == 1))) {
    v34 = false;
  }
  else {
    v36 = GameRoutine_820d50(15);
    v34 = game_GameModeData_instance_ == 0 ||
          (v37 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v36)) == 0 ||
          *(_DWORD*)(v37 + 32) == 0;
  }
  return v6 || v18 || v23 || v34;
}

#pragma GCC visibility pop
