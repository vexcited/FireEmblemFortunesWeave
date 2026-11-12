#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157bfb0(_QWORD, _QWORD);
__int64 GameRoutine_1584020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_174d580(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_185c1a0(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_90c9e0(_QWORD);
__int64 GameRoutine_90cb60(_QWORD);
__int64 GameRoutine_957180(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a96635;
extern __int64 GameData_21ca2f8;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 MiracleMenuItem_Equip_IsActive(__int64 a1);
__int64 MiracleMenuItem_Equip_OnSelect(__int64 a1);
__int64 MiracleMenuItem_Equip_OnDeselect(__int64 a1);
unsigned __int64 MiracleMenuItem_Equip_DrawText_alt1(_QWORD* a1) __asm__(
    "MiracleMenuItem_Equip_DrawText");
bool MiracleMenuItem_Equip_IsFixed(__int64 a1);
__int64 GameRoutine_743a00(_QWORD);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
extern __int64 GameData_21cf830;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64* GameData_212cfd0[8];
__int64 anonymous_MiracleMenuItem_Equip_ACall_closure_Invoke(__int64 a1);
_QWORD* GameRoutine_743a00_alt1(_QWORD* result) __asm__("GameRoutine_743a00");
_QWORD* ScoutBaseProc_f6c060(__int64, _BYTE**, const char*, __int64, __int64,
                             __int64);
__int64* game_820d50(int);
__int64 LayoutAccessor_1566d90_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1566d90");
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
bool GameRoutine_90c9e0_alt1(__int64) __asm__("GameRoutine_90c9e0");
bool game_90cb60(__int64);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 (*GameData_20ed8a0[])();
extern __int64 (*GameData_20ed920[])();
extern __int64 GameData_21cd108;
__int64 anonymous_MiracleMenuItem_Equip_ACall(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_174d580(__int64, char*, __int64, float);
__int64 GameHr_957180(__int64);
__int64 GameRoutine_157bfb0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_157bfb0");
__int64 GameRoutine_1584020_alt1(__int64, __int64,
                                 char) __asm__("GameRoutine_1584020");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
const char*
GameRoutine_185c1a0_alt1(const char* result) __asm__("GameRoutine_185c1a0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
unsigned __int64 MiracleMenuItem_Equip_DrawText(__int64 a1);

__int64 MiracleMenuItem_Equip_IsActive(__int64 a1)
{
  char v2;
  char v3;
  char v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = GameRoutine_90c9e0(*(_QWORD*)(a1 + 96));
  v3 = GameRoutine_90cb60(*(_QWORD*)(a1 + 96));
  v4 = v2 & v3;
  if ((v2 & 1) == 0 && (v3 & 1) != 0) {
    v5 = true;
    v6 = *GameData_212ce90[0];
    v7 = GameRoutine_820d50(1);
    if (game_GameModeData_instance_ != 0) {
      v8 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v7);
      if (v8 != 0) {
        v5 = *(_DWORD*)(v8 + 32) == 0;
      }
    }
    v4 = *(char*)(v6 + 28) < 0 && v5;
  }
  return v4 & 1;
}

__int64 MiracleMenuItem_Equip_OnSelect(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_185c1a0(a1);
}

__int64 MiracleMenuItem_Equip_OnDeselect(__int64 a1)
{
  __int64 v2;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_185c1a0(a1);
}

__int64 anonymous_MiracleMenuItem_Equip_ACall(__int64 a1)
{
  _BOOL4 v2;
  _BOOL4 v3;
  _BOOL4 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  bool v10;
  int v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  const char* v23;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
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
  } v24_;

  v2 = GameRoutine_90c9e0_alt1(*(_QWORD*)(a1 + 96));
  v3 = game_90cb60(*(_QWORD*)(a1 + 96));
  if (v2 || !v3) {
    if (!v2 || !v3) {
      return 1;
    }
  LABEL_10:
    if (GameRoutine_90c9e0_alt1(*(_QWORD*)(a1 + 96))) {
      GameRoutine_743a00_alt1((_QWORD*)GameData_21cd108);
      v9 = GameData_21cd108;
      *(_BYTE*)(GameData_21cd108 + 20) = 15;
      *(_DWORD*)(v9 + 40) = **(_DWORD**)(a1 + 96);
      v10 = GameRoutine_90c9e0_alt1(*(_QWORD*)(a1 + 96));
      if (GameData_21cf830 != 0) {
        if (v10) {
          v11 = 27;
        }
        else {
          v11 = 26;
        }
        *(_DWORD*)(GameData_21cf830 + 152) = v11;
      }
      if (game_gameui_Header_instance_ != 0) {
        LayoutAccessor_1566d90_alt1(game_gameui_Header_instance_, 0);
      }
      if (game_gameui_Footer_instance_ != 0) {
        LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
      }
      return 4;
    }
    v12 = *(_QWORD*)(a1 + 8);
    v23 = "MID_MiracleMenu_Confirm";
    v13 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 96) + 16LL) + 32LL);
    v24_.v26 = -1;
    v24_.v27 = -1;
    v24_.v28 = -1;
    v24_.v29 = -1;
    v24_.v30 = -1;
    v24_.v31 = -1;
    v24_.v32 = -1;
    v24_.v33 = -1;
    v24_.v34 = -1;
    v24_.v35 = -1;
    v24_.v36 = -1;
    v24_.v37 = -1;
    v14 = *msg_MessageManager_instance__ptr[0];
    v24_.v24[2] = 0xFFFF0004FFFF0002LL;
    v24_.v24[3] = 0xFFFF0006FFFF0005LL;
    v24_.v38 = 8;
    v15 = GameRoutine_a4dbe0_alt1(v14, v13, 0);
    v24_.v25 = v24_.v24;
    v24_.v24[0] = GameData_20ed8a0;
    v24_.v24[1] = a1;
    v21_.v22 = v21_.v21;
    v21_.v21[0] = GameData_20ed920;
    v19_.v19[0] = GameData_20ed920;
    v19_.v20 = v19_.v19;
    ScoutBaseProc_f6c060(v12, (_BYTE**)&v23, v15, (__int64)v24_.v24,
                         (__int64)v21_.v21, (__int64)v19_.v19);
    if (v19_.v20 == v19_.v19) {
      v16 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_28;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v16))((__int64)v19_.v20);
  LABEL_28:
    if (v21_.v22 == v21_.v21) {
      v17 = 32;
    }
    else {
      if (v21_.v22 == nullptr) {
        goto LABEL_33;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*v21_.v22 + v17))((__int64)v21_.v22);
  LABEL_33:
    if (v24_.v25 == v24_.v24) {
      v18 = 32;
    }
    else {
      if (v24_.v25 == nullptr) {
        return 12;
      }
      v18 = 40;
    }
    (*(void (**)(__int64))(*v24_.v25 + v18))((__int64)v24_.v25);
    return 12;
  }
  v4 = true;
  v5 = *GameData_212ce90[0];
  v6 = game_820d50(1);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v6);
    if (v7 != 0) {
      v4 = *(_DWORD*)(v7 + 32) == 0;
    }
  }
  result = 1;
  if (v4 && *(char*)(v5 + 28) < 0) {
    goto LABEL_10;
  }
  return result;
}

unsigned __int64 MiracleMenuItem_Equip_DrawText(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  __int64 v20;
  bool v21;
  bool v22;
  bool v23;
  bool v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  _DWORD* v30;
  int v31;
  int v32;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  atomic_ullong* v47;
  __int64* v48;
  float v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  atomic_ullong* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  atomic_ullong* v63;
  __int64* v64;
  unsigned __int64 result;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64* v74;
  __int64* v75;
  __int64* v76;
  _QWORD* v77;
  _QWORD* v78;
  unsigned __int64 v79;
  __int64 v80;
  struct {
    __int64 v81;
    __int64 v82;
  } v81_;
  struct {
    __int64 v83;
    __int64 v84;
  } v83_;
  struct {
    __int64* v85;
    __int64 v86;
    unsigned __int64 v87;
    unsigned __int64 v88;
    int v89;
    int v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
  } v85_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v38 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak_alt1(v38);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = *(const char**)(*(_QWORD*)(*(_QWORD*)(a1 + 96) + 16LL) + 32LL);
  v85_.v91 = -1;
  v85_.v92 = -1;
  v85_.v93 = -1;
  v85_.v94 = -1;
  v85_.v95 = -1;
  v85_.v96 = -1;
  v85_.v97 = -1;
  v85_.v98 = -1;
  v85_.v99 = -1;
  v85_.v100 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v85_.v101 = -1;
  v85_.v102 = -1;
  v85_.v85 = GameData_212e348 + 2;
  v85_.v86 = 0xFFFF0001FFFF0000LL;
  v85_.v87 = 0xFFFF0004FFFF0002LL;
  v85_.v88 = 0xFFFF0006FFFF0005LL;
  v85_.v103 = 8;
  v85_.v89 = -65529;
  v85_.v90 = -65528;
  v7 = GameRoutine_a4dbe0_alt2(v6, v5, 0);
  if (v7 != nullptr) {
    v8 = (__int64)v7;
    v9 = ui_LayoutAccessor_FindTextBox_alt1(v4, "T_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0_alt1(v9, v8, 0);
    }
  }
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock_alt1(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v39 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt1(v12);
  v14 = v39;
  if (v39 == nullptr) {
  LABEL_13:
    v14 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_14:
  GameRoutine_157bfb0_alt1(v14, *(_QWORD*)(a1 + 96));
  GameRoutine_185c1a0_alt1((const char*)a1);
  v15 = *(_QWORD*)(a1 + 56);
  if (v15 == 0) {
    goto LABEL_18;
  }
  v16 = std___1___shared_weak_count_lock_alt1(v15);
  if (v16 == 0) {
    goto LABEL_18;
  }
  v17 = v16;
  v18 = (atomic_ullong*)(v16 + 8);
  v19 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v40 = v19;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    v19 = v40;
    if (v40 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if (v19 == nullptr) {
  LABEL_18:
    v19 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_19:
  LayoutAccessor_1560070((void*)(&v83_.v83), v19, "L_MiracleLV/L_Lv");
  v20 = *(_QWORD*)(a1 + 96);
  v21 = GameRoutine_90c9e0_alt1(v20);
  v22 = game_90cb60(*(_QWORD*)(a1 + 96));
  v23 = v21 && v22;
  if (!v21 && v22) {
    v24 = true;
    v25 = *GameData_212ce90[0];
    v26 = game_820d50(1);
    if (game_GameModeData_instance_ != 0) {
      v27 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v26);
      if (v27 != 0) {
        v24 = *(_DWORD*)(v27 + 32) == 0;
      }
    }
    v23 = *(char*)(v25 + 28) < 0 && v24;
  }
  GameRoutine_1584020_alt1((__int64)&v83_.v83, v20, v23);
  if (v83_.v84 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v83_.v84);
  }
  v28 = *(_QWORD*)(a1 + 96);
  v29 = *(_DWORD*)(v28 + 4);
  v30 = *(_DWORD**)(*(_QWORD*)(v28 + 16) + 24LL);
  v31 = v30[105];
  v32 = v30[103];
  if (v31 > 2 && v32 <= v29) {
    if ((unsigned int)v31 > 3) {
      v37 = 4;
      goto LABEL_61;
    }
  }
  else if (v31 > 1 && (signed __int32)v30[102] <= v29) {
    v32 = v30[102];
    if ((unsigned int)v31 > 2) {
      v37 = 3;
      goto LABEL_61;
    }
  }
  else {
    if (v31 >= 1 && (signed __int32)v30[101] <= v29) {
      v36 = 1;
    }
    else {
      v36 = (int)v30[104];
    }
    v32 = v30[v36 + 100];
    if (v31 >= 1 && (signed __int32)v30[101] <= v29) {
      if ((unsigned int)v31 > 1) {
        v37 = 2;
      LABEL_61:
        v43 = v30[v37 + 100];
        v44 = *(_QWORD*)(a1 + 56);
        if (v44 == 0) {
          goto LABEL_67;
        }
        goto LABEL_64;
      }
    }
    else {
      v42 = (int)v30[104];
      if ((int)v42 < v31) {
        v37 = v42 + 1;
        goto LABEL_61;
      }
    }
  }
  v43 = 0;
  v44 = *(_QWORD*)(a1 + 56);
  if (v44 == 0) {
    goto LABEL_67;
  }
LABEL_64:
  v45 = std___1___shared_weak_count_lock_alt1(v44);
  if (v45 == 0) {
    goto LABEL_67;
  }
  v46 = v45;
  v47 = (atomic_ullong*)(v45 + 8);
  v48 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v47, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v48 != nullptr) {
      goto LABEL_68;
    }
    goto LABEL_67;
  }
  v74 = v48;
  (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
  std___1___shared_weak_count___release_weak_alt1(v46);
  v48 = v74;
  if (v74 == nullptr) {
  LABEL_67:
    v48 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_68:
  LayoutAccessor_1560070((void*)(&v81_.v81), v48, "L_MiracleLV/L_Gauge");
  v49 = 0x1.0000000000000p+0f;
  if (v43 >= 1) {
    v50 = v43 - v32;
    if (v43 != v32) {
      if (v29 <= v32) {
        v51 = v32;
      }
      else {
        v51 = v29;
      }
      v52 = v51 - v32;
      if (v50 < v52) {
        v52 = v43 - v32;
      }
      v49 = (float)v52 / (float)v50;
    }
  }
  GameHr_174d580((__int64)&v81_.v81, "GaugeUp", 7, v49);
  if (v81_.v82 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v81_.v82);
  }
  v53 = *(_QWORD*)(a1 + 56);
  if (v53 == 0) {
    goto LABEL_82;
  }
  v54 = std___1___shared_weak_count_lock_alt1(v53);
  if (v54 == 0) {
    goto LABEL_82;
  }
  v55 = v54;
  v56 = (atomic_ullong*)(v54 + 8);
  v57 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v56, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v75 = v57;
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    std___1___shared_weak_count___release_weak_alt1(v55);
    v57 = v75;
    if (v75 != nullptr) {
      goto LABEL_83;
    }
    goto LABEL_82;
  }
  if (v57 == nullptr) {
  LABEL_82:
    v57 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_83:
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v57, "L_MiracleLV/L_Gauge",
                                        v43 != 0);
  v58 = *(_QWORD*)(a1 + 88);
  v59 = v58;
  if (v58 != 0) {
    goto LABEL_84;
  }
  result = game_HashString_alt1((__int64)&GameData_1a96635);
  if (result == 0) {
    return result;
  }
  v70 = *GameData_212cc60[0];
  v71 = *(_QWORD*)(*GameData_212cc60[0] + 96);
  if (v71 == 0 || *(_QWORD*)(v70 + 112) == 0) {
    return result;
  }
  v72 = v71 - 1;
  if ((v71 & (v71 - 1)) != 0) {
    v73 = result;
    if (result >= v71) {
      v73 = result % v71;
    }
  }
  else {
    v73 = v72 & result;
  }
  v77 = *(_QWORD**)(*(_QWORD*)(v70 + 88) + 8 * v73);
  if (v77 == nullptr) {
    return result;
  }
  v78 = (_QWORD*)*v77;
  if (v78 == nullptr) {
    return result;
  }
  if ((v71 & v72) == 0) {
    while (1) {
      v80 = v78[1];
      if (v80 == result) {
        if (v78[2] == result) {
          goto LABEL_134;
        }
      }
      else if ((v80 & v72) != v73) {
        return result;
      }
      v78 = (_QWORD*)*v78;
      if (v78 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v79 = v78[1];
    if (v79 == result) {
      break;
    }
    if (v79 >= v71) {
      v79 %= v71;
    }
    if (v79 != v73) {
      return result;
    }
  LABEL_123:
    v78 = (_QWORD*)*v78;
    if (v78 == nullptr) {
      return result;
    }
  }
  if (v78[2] != result) {
    goto LABEL_123;
  }
LABEL_134:
  v59 = v78[3];
  if (v59 == 0) {
    return result;
  }
LABEL_84:
  v60 = *(_QWORD*)(a1 + 56);
  if (v60 == 0 || (v61 = std___1___shared_weak_count_lock_alt1(v60)) == 0) {
  LABEL_88:
    v64 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_89;
  }
  v62 = v61;
  v63 = (atomic_ullong*)(v61 + 8);
  v64 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v63, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v76 = v64;
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    std___1___shared_weak_count___release_weak_alt1(v62);
    v64 = v76;
    if (v76 != nullptr) {
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  if (v64 == nullptr) {
    goto LABEL_88;
  }
LABEL_89:
  LayoutAccessor_1560070((void*)(&v85_.v85), v64, "L_MiracleLV");
  result = v85_.v86;
  if (v85_.v86 == 0) {
    return result;
  }
  v66 = std___1___shared_weak_count_lock_alt1(v85_.v86);
  v67 = v85_.v85;
  result = v85_.v86;
  if (v85_.v86 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v85_.v86);
  }
  if (v66 != 0 && v67 != nullptr) {
    v68 = ui_LayoutAccessor_FindPane_alt1(v67, "IconGod");
    if (v68 != 0) {
      v69 = __dynamic_cast(v68, GameData_212d670[0], GameData_212d678[0], 0);
      result = GameHr_957180(v59);
      if (v69 != 0) {
        result = Manager_136a920(ui_Manager_instance_ + 1264, v69, 0, 7u,
                                 (_BYTE*)result);
      }
      if (v58 == 0) {
      LABEL_114:
        result = ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v67,
                                                       "N_MiracleLv", 0);
      }
    }
    else {
      result = GameHr_957180(v59);
      if (v58 == 0) {
        goto LABEL_114;
      }
    }
  LABEL_115:
    if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
      return std___1___shared_weak_count___release_weak_alt1(v66);
    }
  }
  else if (v66 != 0) {
    goto LABEL_115;
  }
  return result;
}

bool MiracleMenuItem_Equip_IsFixed(__int64 a1)
{
  return GameData_21ca2f8 != 0 &&
         **(_DWORD**)(a1 + 96) == *(char*)(GameData_21ca2f8 + 28);
}

__int64 anonymous_MiracleMenuItem_Equip_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  char v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212cfd0[0];
  GameRoutine_743a00(*GameData_212cfd0[0]);
  v3 = *v2;
  *(_BYTE*)(v3 + 20) = 15;
  *(_DWORD*)(v3 + 40) = **(_DWORD**)(v1 + 96);
  v4 = GameRoutine_90c9e0(*(_QWORD*)(v1 + 96));
  if (GameData_21cf830 != 0) {
    if ((v4 & 1) != 0) {
      v5 = 27;
    }
    else {
      v5 = 26;
    }
    *(_DWORD*)(GameData_21cf830 + 152) = v5;
  }
  if (game_gameui_Header_instance_ != 0) {
    LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return 4;
}

#pragma GCC visibility pop
