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
unsigned __int64 MiracleMenuItem_Equip_DrawText(_QWORD* a1);
bool MiracleMenuItem_Equip_IsFixed(__int64 a1);
__int64 GameRoutine_743a00(_QWORD);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
extern __int64 GameData_21cf830;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64* GameData_212cfd0[8];
__int64 anonymous_MiracleMenuItem_Equip_ACall_closure_Invoke(__int64 a1);

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

unsigned __int64 MiracleMenuItem_Equip_DrawText(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64* v16;
  __int64 v17;
  char v18;
  char v19;
  char v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _DWORD* v27;
  int v28;
  int v29;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  atomic_ullong* v43;
  __int64* v44;
  long double v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  atomic_ullong* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  atomic_ullong* v57;
  __int64* v58;
  unsigned __int64 result;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64* v70;
  _QWORD* v71;
  _QWORD* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;

  if (a1[7] == 0) {
    goto LABEL_5;
  }
  v2 = std___1___shared_weak_count_lock();
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v3 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v35 = v2;
  (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
  std___1___shared_weak_count___release_weak(v35);
  if (v3 == nullptr) {
  LABEL_5:
    v3 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v4 = *(_QWORD*)(*(_QWORD*)(a1[12] + 16LL) + 32LL);
  v85 = -1;
  v86 = -1;
  v87 = -1;
  v88 = -1;
  v89 = -1;
  v90 = -1;
  v91 = -1;
  v92 = -1;
  v93 = -1;
  v94 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v95 = -1;
  v96 = -1;
  v79 = GameData_212e348 + 2;
  v80 = 0xFFFF0001FFFF0000LL;
  v81 = 0xFFFF0004FFFF0002LL;
  v82 = 0xFFFF0006FFFF0005LL;
  v97 = 8;
  v83 = -65529;
  v84 = -65528;
  v6 = GameRoutine_a4dbe0(v5, v4, 0, &v79);
  if (v6 != 0) {
    v7 = v6;
    v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
    if (v8 != 0) {
      GameRoutine_156c5d0(v8, v7, 0);
    }
  }
  if (a1[7] == 0) {
    goto LABEL_13;
  }
  v9 = std___1___shared_weak_count_lock();
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v36 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  v12 = v36;
  if (v36 == nullptr) {
  LABEL_13:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_14:
  GameRoutine_157bfb0(v12, a1[12]);
  GameRoutine_185c1a0(a1);
  if (a1[7] == 0) {
    goto LABEL_18;
  }
  v13 = std___1___shared_weak_count_lock();
  if (v13 == 0) {
    goto LABEL_18;
  }
  v14 = v13;
  v15 = (atomic_ullong*)(v13 + 8);
  v16 = (__int64*)a1[6];
  if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v37 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
    v16 = v37;
    if (v37 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if (v16 == nullptr) {
  LABEL_18:
    v16 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_19:
  GameRoutine_1560070((void*)&v77, v16, "L_MiracleLV/L_Lv");
  v17 = a1[12];
  v18 = GameRoutine_90c9e0(v17);
  v19 = GameRoutine_90cb60(a1[12]);
  v20 = v18 & v19;
  if ((v18 & 1) == 0 && (v19 & 1) != 0) {
    v21 = true;
    v22 = *GameData_212ce90[0];
    v23 = GameRoutine_820d50(1);
    if (game_GameModeData_instance_ != 0) {
      v24 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v23);
      if (v24 != 0) {
        v21 = *(_DWORD*)(v24 + 32) == 0;
      }
    }
    v20 = *(char*)(v22 + 28) < 0 && v21;
  }
  GameRoutine_1584020(&v77, v17, v20 & 1);
  if (v78 != 0) {
    std___1___shared_weak_count___release_weak(v78);
  }
  v25 = a1[12];
  v26 = *(_DWORD*)(v25 + 4);
  v27 = *(_DWORD**)(*(_QWORD*)(v25 + 16) + 24LL);
  v28 = v27[105];
  v29 = v27[103];
  if (v28 > 2 && v29 <= v26) {
    if ((unsigned int)v28 > 3) {
      v34 = 4;
      goto LABEL_61;
    }
  }
  else if (v28 > 1 && v27[102] <= v26) {
    v29 = v27[102];
    if ((unsigned int)v28 > 2) {
      v34 = 3;
      goto LABEL_61;
    }
  }
  else {
    if (v28 >= 1 && v27[101] <= v26) {
      v33 = 1;
    }
    else {
      v33 = (int)v27[104];
    }
    v29 = v27[v33 + 100];
    if (v28 >= 1 && v27[101] <= v26) {
      if ((unsigned int)v28 > 1) {
        v34 = 2;
      LABEL_61:
        v40 = v27[v34 + 100];
        if (a1[7] == 0) {
          goto LABEL_67;
        }
        goto LABEL_64;
      }
    }
    else {
      v39 = (int)v27[104];
      if ((int)v39 < v28) {
        v34 = v39 + 1;
        goto LABEL_61;
      }
    }
  }
  v40 = 0;
  if (a1[7] == 0) {
    goto LABEL_67;
  }

LABEL_64:
  v41 = std___1___shared_weak_count_lock();
  if (v41 == 0) {
    goto LABEL_67;
  }
  v42 = v41;
  v43 = (atomic_ullong*)(v41 + 8);
  v44 = (__int64*)a1[6];
  if (atomic_fetch_add(v43, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v44 != nullptr) {
      goto LABEL_68;
    }
    goto LABEL_67;
  }
  v68 = v44;
  (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
  std___1___shared_weak_count___release_weak(v42);
  v44 = v68;
  if (v68 == nullptr) {
  LABEL_67:
    v44 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_68:
  GameRoutine_1560070((void*)&v75, v44, "L_MiracleLV/L_Gauge");
  LODWORD(v45) = 1.0;
  if (v40 >= 1) {
    v46 = v40 - v29;
    if (v40 != v29) {
      if (v26 <= v29) {
        v47 = v29;
      }
      else {
        v47 = v26;
      }
      v48 = v47 - v29;
      if (v46 < v48) {
        v48 = v40 - v29;
      }
      *(float*)&v45 = (float)v48 / (float)v46;
    }
  }
  GameRoutine_174d580(&v75, "GaugeUp", 7, v45);
  if (v76 != 0) {
    std___1___shared_weak_count___release_weak(v76);
  }
  if (a1[7] == 0) {
    goto LABEL_82;
  }
  v49 = std___1___shared_weak_count_lock();
  if (v49 == 0) {
    goto LABEL_82;
  }
  v50 = v49;
  v51 = (atomic_ullong*)(v49 + 8);
  v52 = (__int64*)a1[6];
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v69 = v52;
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
    v52 = v69;
    if (v69 != nullptr) {
      goto LABEL_83;
    }
    goto LABEL_82;
  }
  if (v52 == nullptr) {
  LABEL_82:
    v52 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_83:
  ui_LayoutAccessor_SetPaneVisible(v52, "L_MiracleLV/L_Gauge", v40 != 0);
  v53 = a1[11];
  v54 = v53;
  if (v53 != 0) {
    goto LABEL_84;
  }
  result = game_HashString(&GameData_1a96635);
  if (result == 0) {
    return result;
  }
  v64 = *GameData_212cc60[0];
  v65 = *(_QWORD*)(*GameData_212cc60[0] + 96);
  if (v65 == 0 || *(_QWORD*)(v64 + 112) == 0) {
    return result;
  }
  v66 = v65 - 1;
  if ((v65 & (v65 - 1)) != 0) {
    v67 = result;
    if (result >= v65) {
      v67 = result % v65;
    }
  }
  else {
    v67 = v66 & result;
  }
  v71 = *(_QWORD**)(*(_QWORD*)(v64 + 88) + 8 * v67);
  if (v71 == nullptr) {
    return result;
  }
  v72 = (_QWORD*)*v71;
  if (v72 == nullptr) {
    return result;
  }
  if ((v65 & v66) == 0) {
    while (1) {
      v74 = v72[1];
      if (v74 == result) {
        if (v72[2] == result) {
          goto LABEL_134;
        }
      }
      else if ((v74 & v66) != v67) {
        return result;
      }
      v72 = (_QWORD*)*v72;
      if (v72 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v73 = v72[1];
    if (v73 == result) {
      break;
    }
    if (v73 >= v65) {
      v73 %= v65;
    }
    if (v73 != v67) {
      return result;
    }
  LABEL_123:
    v72 = (_QWORD*)*v72;
    if (v72 == nullptr) {
      return result;
    }
  }
  if (v72[2] != result) {
    goto LABEL_123;
  }

LABEL_134:
  v54 = v72[3];
  if (v54 == 0) {
    return result;
  }

LABEL_84:
  if (a1[7] == 0 || (v55 = std___1___shared_weak_count_lock()) == 0) {
  LABEL_88:
    v58 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_89;
  }
  v56 = v55;
  v57 = (atomic_ullong*)(v55 + 8);
  v58 = (__int64*)a1[6];
  if (atomic_fetch_add(v57, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v70 = v58;
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak(v56);
    v58 = v70;
    if (v70 != nullptr) {
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  if (v58 == nullptr) {
    goto LABEL_88;
  }

LABEL_89:
  GameRoutine_1560070((void*)&v79, v58, "L_MiracleLV");
  result = v80;
  if (v80 == 0) {
    return result;
  }
  v60 = std___1___shared_weak_count_lock();
  v61 = v79;
  result = v80;
  if (v80 != 0) {
    result = std___1___shared_weak_count___release_weak(v80);
  }
  if (v60 != 0 && v61 != nullptr) {
    v62 = ui_LayoutAccessor_FindPane(v61, "IconGod");
    if (v62 != 0) {
      v63 = __dynamic_cast(v62, GameData_212d670[0], GameData_212d678[0], 0);
      result = GameRoutine_957180(v54);
      if (v63 != 0) {
        result =
            GameRoutine_136a920(ui_Manager_instance_ + 1264, v63, 0, 7, result);
      }
      if (v53 == 0) {
      LABEL_114:
        result = ui_LayoutAccessor_SetPaneVisible(v61, "N_MiracleLv", 0);
      }
    }
    else {
      result = GameRoutine_957180(v54);
      if (v53 == 0) {
        goto LABEL_114;
      }
    }
  LABEL_115:
    if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
      return std___1___shared_weak_count___release_weak(v60);
    }
  }
  else if (v60 != 0) {
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
