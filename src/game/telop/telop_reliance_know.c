#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameSituation_906320(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_telop_1376180(PSEUDO_X8, const char***,
                                                   __int64);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD);
__int64 game_821090(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
__int64 TelopRelianceKnow_Unknown33(__int64 a1);

__int64 TelopRelianceKnow_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[2];
  __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  int v28;
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

  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v23 = GameData_212e348 + 2;
  v24 = 0xFFFF0001FFFF0000LL;
  v25 = 0xFFFF0004FFFF0002LL;
  v26 = 0xFFFF0006FFFF0005LL;
  v41 = 8;
  v27 = -65529;
  v28 = -65528;
  v3 = GameRoutine_a4dbe0(v2, "MID_Sys_Known_NewBond", 0, &v23);
  if (v3 != 0) {
    v4 = v3;
    v5 = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Title");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  if (ui_LayoutAccessor_FindAlignment(a1 + 168, "A_Title") != 0) {
    Alignment_56b600();
    v6 = *(_QWORD*)(a1 + 176);
    if (v6 != 0) {
      v7 = std___1___shared_weak_count_lock(v6);
      if (v7 != 0) {
        v8 = v7;
        if (*(_QWORD*)(a1 + 168) != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
    }
  }
  v9 = *(_QWORD*)(a1 + 824);
  v22[0] = 0;
  v22[1] = v9;
  GameSituation_906320((void*)(&v23), game_GameModeData_instance_ + 136, v22);
  if ((v31 & 0x19E) == 0 &&
      (v30 == 0 || (v31 & 0x60) == 0 || (*(_BYTE*)(v30 + 36) & 2) == 0)) {
    game_telop_1376180((void*)(&v23), (const char***)(a1 + 832), a1 + 168);
    if (v24 != 0) {
      v17 = std___1___shared_weak_count_lock(v24);
      v18 = v23;
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak(v24);
      }
      if (v17 != 0 && v18 != nullptr) {
        TextBoxEx_188ab20(v18, "MID_Sys_Known_Unlock_Scout");
      }
      else if (v17 == 0) {
        goto LABEL_12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
LABEL_12:
  v10 = *(_QWORD*)(a1 + 824);
  if ((*(_BYTE*)(v10 + 49) & 4) != 0) {
    v11 = *(_QWORD*)(v10 + 24);
    LODWORD(v23) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1BCLL) +
                              game_g_shared_system_skills_ptr) &
                   0xFFF;
    if ((game_HasSkill(v11, &v23) & 1) == 0) {
      game_telop_1376180((void*)(&v23), (const char***)(a1 + 832), a1 + 168);
      if (v24 != 0) {
        v12 = std___1___shared_weak_count_lock(v24);
        v13 = v23;
        if (v24 != 0) {
          std___1___shared_weak_count___release_weak(v24);
        }
        if (v12 != 0 && v13 != nullptr) {
          v14 = game_821090(11);
          if (game_GameModeData_instance_ != 0) {
            v15 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v14);
            v16 = "MID_Sys_Known_Unlock_InviteDining";
            if (v15 != 0 && *(int*)(v15 + 32) > 0) {
              v16 = "MID_Sys_Known_Unlock_InviteFacility";
            }
          }
          else {
            v16 = "MID_Sys_Known_Unlock_InviteDining";
          }
          TextBoxEx_188ab20(v13, v16);
        }
        else if (v12 == 0) {
          goto LABEL_42;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
      }
    }
  }
LABEL_42:
  v19 = game_util_Format("L_Txt%02d", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 168, v19);
  v20 = game_util_Format("L_Txt%02d", 1);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 168, v20);
}

#pragma GCC visibility pop
