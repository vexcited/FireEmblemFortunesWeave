#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1212820(_QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 GameRoutine_6e91b0(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_996d60(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 (*GameData_2055be0[])();
extern __int64 (*GameData_2056130[])();
extern __int64 (*game_map_anonymous_CmdBtlSubEquipMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_CmdBtlSubOpenMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_CmdBtlSubUseMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_SubDiscardMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_SubEquipMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
extern __int64* game_g_empty_item_ptr;
__int64 CmdBtlItemMenuItem_IsActive(__int64 a1);
__int64 CmdBtlItemMenuItem_Unknown70_alt1(__int64 a1, __int64 a2) __asm__(
    "CmdBtlItemMenuItem_Unknown70");
bool CmdBtlItemMenuItem_Unknown71(__int64 a1);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
extern __int64 GameData_20543b0;
extern __int64* GameData_212e030[4];
__int64
game_map_anonymous_CmdBtlItemMenuItem_CreateSubMenu_closure0_Invoke(__int64 a1);
__int64* game_820d50(int);
__int64 UnitItem_6e91b0(__int64, __int64);
__int64 UnitUtil_1212820(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_996d60(__int64, int, int);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
__int64 CmdBtlItemMenuItem_Unknown70(__int64 a1, _QWORD* a2);

__int64 CmdBtlItemMenuItem_IsActive(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  v4 = game_g_empty_item_ptr;
  if ((_DWORD)v1 == -1) {
    v5 = game_g_empty_item_ptr;
  }
  else {
    v5 = (__int64*)(v2 + 8 * v1 + 828);
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v5);
  if (*(_BYTE*)(v6 + 72) == 14 && (*(_BYTE*)(v6 + 73) & 0xFE) != 2) {
    return 0;
  }
  if ((GameRoutine_6e8bc0(v5, v2) & 1) != 0) {
    return 1;
  }
  v8 = *(int*)(a1 + 40);
  if ((_DWORD)v8 == -1) {
    return GameRoutine_6e91b0(v4);
  }
  else {
    return GameRoutine_6e91b0(*(_QWORD*)(a1 + 88) + 8 * v8 + 828);
  }
}

__int64 CmdBtlItemMenuItem_Unknown70(__int64 a1, _QWORD* a2)
{
  __int64* v4;
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
  __int64 v15;
  unsigned __int16* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  char v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  bool v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int16* v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  unsigned __int16* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  int v52;
  bool v53;
  __int64 v54;
  __int64 result;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  struct {
    _QWORD v59[4];
    _QWORD* v60;
  } v59_;
  __int64 v61;

  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(_QWORD*)(a1 + 88);
  v7 = *(int*)(a1 + 40);
  *(_QWORD*)(v5 + 8) = 0;
  v8 = v5;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_BYTE*)(v5 + 80) = 1;
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
      v15 = v6;
      v16 = v9;
      v17 = game_996d60(v13, ((v14 >> 4) & 0x3FF) - 1, 1000),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v17 != 0) {
        v13 = *(_QWORD*)(v17 + 40);
        v6 = v15;
        v9 = v16;
        if (v13 == 0) {
          goto LABEL_14;
        }
        v12 =
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *v16) +
                                73LL);
        goto LABEL_13;
      }
      LOBYTE(v13) = 0;
      v6 = v15;
      v9 = v16;
    LABEL_14:
      *(_BYTE*)(v8 + 81) = v13;
      *(_BYTE*)(v8 +
                82) = UnitItem_6e91b0((__int64)v9, v6) & 1,
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v54 =
                    COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)v8 = game_map_anonymous_CmdBtlSubOpenMenuItem_vtable;
      BasicMenuCursor_16e0c00(a2, v8),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v18 = fw_memory_HeapManager_Allocate_alt1(*v4, 224, 16, 0),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v19 = *(_QWORD*)(a1 + 88);
      v20 = *(int*)(a1 + 40);
      *(_WORD*)(v18 + 16) = 0;
      *(_QWORD*)(v18 + 48) = 0;
      *(_QWORD*)(v18 + 56) = 0;
      v21 = (_QWORD*)v18;
      *(_QWORD*)(v18 + 64) = 0;
      *(_QWORD*)(v18 + 72) = 0;
      *(_BYTE*)(v18 + 82) = 1;
      *(_QWORD*)(v18 + 128) = 0;
      *(_WORD*)(v18 + 80) = 257;
      v59_.v59[0] = GameData_2055be0;
      v59_.v59[1] = a1;
      v59_.v60 = v59_.v59;
      *(_QWORD*)(v18 + 168) = a1;
      *(_QWORD*)v18 = game_map_anonymous_SubEquipMenuItem_vtable;
      *(_QWORD*)(v18 + 8) = 0;
      *(_QWORD*)(v18 + 160) = GameData_2055be0;
      *(_QWORD*)(v18 + 192) = v18 + 160;
      *(_QWORD*)(v18 + 144) = v19;
      *(_DWORD*)(v18 + 40) = v20;
      v22 = v19 + 8 * v20;
      v23 = *(_BYTE*)(v22 + 831);
      *(_BYTE*)(v18 + 208) = (v23 & 1) == 0;
      v28 =
          (v23 & 0x20) == 0 &&
          (*(_BYTE*)((v24 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                       8LL * *(unsigned __int16*)(v22 + 828))) +
                     336) &
           8) == 0 &&
          ((v25 = *(unsigned __int8*)(v24 + 72),
            v26 = (1LL << *(_BYTE*)(v24 + 73)) & 0x7DC, v25 <= 7)
               ? (v27 = v26 == 0)
               : (v27 = true),
           v27) &&
          ((1LL << v25) & 0x20FF) != 0;
      *(_BYTE*)(v18 + 81) = v28;
      *(_BYTE*)(v18 +
                82) = UnitItem_6e8bc0((unsigned __int16*)(v22 + 828), v19),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v54 =
                    COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *v21 = game_map_anonymous_CmdBtlSubEquipMenuItem_vtable;
      BasicMenuCursor_16e0c00(a2, (__int64)v21),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v59_.v60 == v59_.v59) {
        v30 = 32;
      }
      else {
        if (v59_.v60 == nullptr) {
          goto LABEL_28;
        }
        v30 = 40;
      }
      (*(void (**)(_QWORD*, __int64))(*v59_.v60 + v30))(v59_.v60, v29),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_28:
      v31 = fw_memory_HeapManager_Allocate_alt1(*v4, 160, 16, 0),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v32 = *(_QWORD*)(a1 + 88);
      v33 = *(int*)(a1 + 40);
      v34 = *v10;
      v35 = v31;
      *(_QWORD*)(v31 + 8) = 0;
      *(_WORD*)(v31 + 16) = 0;
      *(_QWORD*)(v31 + 48) = 0;
      *(_QWORD*)(v31 + 56) = 0;
      *(_QWORD*)(v31 + 64) = 0;
      *(_QWORD*)(v31 + 72) = 0;
      *(_BYTE*)(v31 + 80) = 1;
      *(_QWORD*)(v31 + 128) = 0;
      *(_QWORD*)(v31 + 144) = v32;
      *(_DWORD*)(v31 + 40) = v33;
      v36 = (unsigned __int16*)(v32 + 8 * v33 + 828);
      v37 = *(_QWORD*)(*(_QWORD*)(v34 + 64) + 8LL * *v36);
      if (*(_BYTE*)(v37 + 72) != 14) {
        goto LABEL_38;
      }
      v38 = *(unsigned __int8*)(v37 + 73);
      LOBYTE(v39) = 0;
      if (v38 > 0x11) {
        goto LABEL_41;
      }
      if (((1 << v38) & 0x800C) != 0) {
        LODWORD(v39) =
            *(unsigned __int8*)(v37 + 88) >> ((*((_BYTE*)v36 + 3) & 8) != 0);
        if ((_DWORD)v39 != 0) {
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      if (((1 << v38) & 0x10030) != 0) {
      LABEL_40:
        LOBYTE(v39) = v38 != 17;
        goto LABEL_41;
      }
      if (v38 == 17) {
        v39 = *(_QWORD*)(v37 + 376);
        if (v39 != 0) {
          v40 = *((_DWORD*)v36 + 1);
          if ((v40 & 0x3FF0) != 0) {
            v41 = v32;
            v42 = v36;
            v43 = game_996d60(v39, ((v40 >> 4) & 0x3FF) - 1, 1000),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v43 == 0) {
              LOBYTE(v39) = 0;
              v32 = v41;
              v36 = v42;
              goto LABEL_41;
            }
            v39 = *(_QWORD*)(v43 + 40);
            v32 = v41;
            v36 = v42;
            if (v39 != 0) {
              v38 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                                   8LL * *v42) +
                                        73LL);
              goto LABEL_40;
            }
            goto LABEL_41;
          }
        LABEL_38:
          LOBYTE(v39) = 0;
        }
      }
    LABEL_41:
      *(_BYTE*)(v35 + 81) = v39;
      *(_BYTE*)(v35 +
                82) = UnitItem_6e91b0((__int64)v36, v32) & 1,
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v54 =
                    COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)v35 = game_map_anonymous_CmdBtlSubUseMenuItem_vtable;
      BasicMenuCursor_16e0c00(a2, v35),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v44 = fw_memory_HeapManager_Allocate_alt1(*v4, 208, 16, 0),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v45 = *(_QWORD*)(a1 + 88);
      v46 = *(int*)(a1 + 40);
      *(_WORD*)(v44 + 16) = 0;
      *(_QWORD*)(v44 + 48) = 0;
      *(_QWORD*)(v44 + 56) = 0;
      v47 = v44;
      *(_QWORD*)(v44 + 64) = 0;
      *(_QWORD*)(v44 + 72) = 0;
      *(_BYTE*)(v44 + 82) = 1;
      *(_QWORD*)(v44 + 128) = 0;
      *(_WORD*)(v44 + 80) = 257;
      v59_.v59[0] = GameData_2056130;
      v59_.v59[1] = a1;
      v59_.v60 = v59_.v59;
      *(_QWORD*)(v44 + 168) = a1;
      *(_QWORD*)v44 = game_map_anonymous_SubDiscardMenuItem_vtable;
      *(_QWORD*)(v44 + 8) = 0;
      *(_QWORD*)(v44 + 160) = GameData_2056130;
      *(_QWORD*)(v44 + 192) = v44 + 160;
      *(_QWORD*)(v44 + 144) = v45;
      v48 = v45 + 8 * v46;
      *(_DWORD*)(v44 + 40) = v46;
      v49 = *(unsigned __int16*)(v48 + 828);
      if (*(_WORD*)(v48 + 828) == 0 ||
          (*((_BYTE*)(v50 = (__int64*)(v48 + 828)) + 3) & 0x10) != 0 ||
          (v51 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8 * v49)) != 0 &&
              ((unsigned int)*(unsigned __int8*)(v51 + 72) - 5 < 2 ||
               ((v52 = *(_DWORD*)(v51 + 336)) & 1) != 0 ||
               (v52 & 2) != 0 && (v61 = *v50, (unsigned int)UnitUtil_1212820(
                                                  (__int64)&v61) == 1))) {
        v53 = false;
      }
      else {
        v57 = game_820d50(15),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v53 = game_GameModeData_instance_ == 0 ||
              (v58 = game_GameVariableTable_Find_alt1(
                   *(_QWORD**)(game_GameModeData_instance_ + 48),
                   (unsigned __int64*)v57)) == 0 ||
              *(_DWORD*)(v58 + 32) == 0,
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      *(_BYTE*)(v47 + 81) = v53;
      BasicMenuCursor_16e0c00(a2, v47),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (__int64)v59_.v60;
      if (v59_.v60 == v59_.v59) {
        v56 = 32;
      }
      else {
        if (v59_.v60 == nullptr) {
          return result;
        }
        v56 = 40;
      }
      return (*(__int64 (**)(_QWORD*, __int64))(*v59_.v60 + v56))(v59_.v60,
                                                                  v54);
    }
  }
  LOBYTE(v13) = 0;
  goto LABEL_14;
}

bool CmdBtlItemMenuItem_Unknown71(__int64 a1)
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

__int64

game_map_anonymous_CmdBtlItemMenuItem_CreateSubMenu_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  int v6;
  __int64 v7;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (v1 == 0) {
    return 5;
  }
  v2 = __dynamic_cast(v1, GameData_212e030[0], &GameData_20543b0, 0);
  if (v2 == 0) {
    return 5;
  }
  v3 = *(_QWORD**)(v2 + 232);
  v4 = *(_QWORD**)(v2 + 240);
  if (v3 != v4) {
    v5 = v2;
    v6 = 0;
    do {
      v7 = *v3;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) != 0) {
        v6 += (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1;
      }
      ++v3;
    } while (v3 != v4);
    if (v6 != 0) {
      game_menu_BasicMenu_Unknown16defa0(v5);
      return 5;
    }
  }
  return 4;
}

#pragma GCC visibility pop
