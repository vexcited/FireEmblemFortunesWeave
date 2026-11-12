#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a06510(_QWORD, _QWORD);
__int64 GameRoutine_1a071f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_80e330(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 ObeliskDestinyMenuItem_ACall(_QWORD* a1);
bool ObeliskDestinyMenuItem_IsActive(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16eb610(_QWORD*, unsigned int, const char*, __int64, __int64,
                       unsigned int, int);
__int64 GameRoutine_174d580(__int64, const char*, __int64, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_990a70(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 ui_LayoutAccessor_empty_;
extern __int64 ui_Manager_instance_;
extern char* GameData_2116648[6];
extern char GameData_1a9f09e;
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void game_gameui_157cff0(__int64*, __int64, int, char);
void game_gameui_157d1a0(__int64*, __int64, unsigned int);
__int64 ObeliskDestinyMenuItem_OnSelect(__int64 a1);
__int64 ObeliskDestinyMenuItem_OnDeselect(__int64 a1);
__int64 ObeliskDestinyMenuItem_DrawText(__int64 result);

__int64 ObeliskDestinyMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_7;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v11 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v11;
  if (v11 == nullptr) {
  LABEL_7:
    v7 = &ui_LayoutAccessor_empty_;
  }
LABEL_8:
  LayoutAccessor_1560070((void*)(&v12_.v12), v7, "L_KeyHelp");
  result = v12_.v13;
  if (v12_.v13 == 0) {
    return result;
  }
  v9 = std___1___shared_weak_count_lock(v12_.v13);
  v10 = v12_.v12;
  result = v12_.v13;
  if (v12_.v13 != 0) {
    result = std___1___shared_weak_count___release_weak(v12_.v13);
  }
  if (v9 != 0 && v10 != nullptr) {
    GameHr_1562680((__int64)v10, "Accent_Select", 0x1.0000000000000p+0f);
    result = ui_LayoutAccessor_FindAlignment(v10, (__int64)"A_Txt");
    if (result != 0) {
      result = Alignment_56b600(result);
    }
  }
  else if (v9 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 ObeliskDestinyMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_7;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v11 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v11;
  if (v11 == nullptr) {
  LABEL_7:
    v7 = &ui_LayoutAccessor_empty_;
  }
LABEL_8:
  LayoutAccessor_1560070((void*)(&v12_.v12), v7, "L_KeyHelp");
  result = v12_.v13;
  if (v12_.v13 == 0) {
    return result;
  }
  v9 = std___1___shared_weak_count_lock(v12_.v13);
  v10 = v12_.v12;
  result = v12_.v13;
  if (v12_.v13 != 0) {
    result = std___1___shared_weak_count___release_weak(v12_.v13);
  }
  if (v9 != 0 && v10 != nullptr) {
    LayoutAccessor_1562cf0((__int64)v10, "Accent_Default");
    result = ui_LayoutAccessor_FindAlignment(v10, (__int64)"A_Txt");
    if (result != 0) {
      result = Alignment_56b600(result);
    }
  }
  else if (v9 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 ObeliskDestinyMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (game_GameModeData_instance_ == 0) {
    return 1;
  }
  v2 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(a1[11] + 24LL) + 32LL);
  if (v2 == 0 || (unsigned int)*(unsigned __int8*)(v2 + 32) - 1 > 2) {
    return 1;
  }
  if (game_GameModeData_instance_ != 0) {
    v3 = a1[11];
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        *(_QWORD*)(v3 + 24) + 32LL);
    if (v4 != 0 && (unsigned int)*(unsigned __int8*)(v4 + 32) - 1 <= 2) {
      if (game_GameModeData_instance_ != 0) {
        v5 = *(_DWORD*)(game_GameModeData_instance_ + 80) +
             *(unsigned __int16*)(v3 + 64);
        v6 = v5 & ~(v5 >> 31);
        if (v6 >= 99999) {
          v6 = 99999;
        }
        *(_DWORD*)(game_GameModeData_instance_ + 80) = v6;
      }
      game_VariableManager_SetFlag(*(_QWORD*)(v3 + 24) + 32LL, 4);
    }
  }
  (*(void (**)(_QWORD*))(*a1 + 96LL))(a1);
  v7 = a1[1];
  if (*(_QWORD*)(v7 + 152) != 0) {
    v8 = *(_QWORD*)(v7 + 152);
  }
  else {
    v8 = a1[1];
  }
  v9 = GameRoutine_1a071f0(v8, "MID_AchieveMenu_Receive_Result", a1[11]);
  GameRoutine_1a06510(v9 + 824, *(unsigned __int16*)(a1[11] + 64LL));
  GameRoutine_80e330(v9, "FF_Positive1");
  return 12;
}

__int64 ObeliskDestinyMenuItem_DrawText(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  _BYTE* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  char v19;
  signed int v20;
  __int64 v21;
  signed int v22;
  int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  float v30;
  int v31;
  char v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  atomic_ullong* v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  const char* v47;
  _QWORD v48[2];
  struct {
    __int64* v49;
    __int64 v50;
    unsigned __int64 v51;
    unsigned __int64 v52;
    int v53;
    int v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v49_;

  if (*(_QWORD*)(result + 88) != 0) {
    v1 = (_QWORD*)result;
    result = *(_QWORD*)(result + 56);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v2 = (__int64*)v1[6];
        v3 = result;
        if (v2 == nullptr) {
          goto LABEL_86;
        }
        v4 = v1[11];
        if (*(_QWORD*)(v4 + 32) != 0) {
          v5 = msg_MessageManager_instance__ptr[0];
          v6 = *(_BYTE*)(v4 + 56) == 3 ? 2 : 1;
          GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                        *(_DWORD*)(v4 + 60), v6);
          v7 = *(_BYTE**)(v4 + 32);
          v8 = *v5;
          v49_.v55 = -1;
          v49_.v56 = -1;
          v49_.v57 = -1;
          v49_.v58 = -1;
          v49_.v59 = -1;
          v49_.v60 = -1;
          v49_.v61 = -1;
          v49_.v62 = -1;
          v49_.v63 = -1;
          v49_.v64 = -1;
          v49_.v65 = -1;
          v49_.v66 = -1;
          v49_.v49 = GameData_212e348 + 2;
          v49_.v50 = 0xFFFF0001FFFF0000LL;
          v49_.v51 = 0xFFFF0004FFFF0002LL;
          v49_.v52 = 0xFFFF0006FFFF0005LL;
          v49_.v67 = 8;
          v49_.v53 = -65529;
          v49_.v54 = -65528;
          v9 = GameRoutine_a4dbe0(v8, v7, 0);
          if (v9 != nullptr) {
            v10 = (__int64)v9;
            v11 = ui_LayoutAccessor_FindTextBox(v2, (__int64)"T_Txt");
            if (v11 != 0) {
              GameRoutine_156c5d0(v11, v10, 0);
            }
          }
        }
        v12 = ui_LayoutAccessor_FindPane(v2, (__int64)"Icon");
        if (v12 != 0) {
          v13 =
              __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
          if (v13 != 0) {
            if ((unsigned int)*(unsigned __int8*)(v1[11] + 40LL) - 1 > 5) {
              v14 = &GameData_1a9f09e;
            }
            else {
              v14 = GameData_2116648[(
                  unsigned __int8)(*(_BYTE*)(v1[11] + 40LL) - 1)];
            }
            Manager_136a920(ui_Manager_instance_ + 1264, v13, 0, 7u, v14);
          }
        }
        v16 =
            game_GameModeData_instance_ != 0 &&
            (v15 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)(*(_QWORD*)(v1[11] + 24LL) + 32LL))) != 0 &&
            *(_BYTE*)(v15 + 32) == 4;
        ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)"IconStatus",
                                         v16);
        v19 =
            game_GameModeData_instance_ != 0 &&
            (v17 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)(*(_QWORD*)(v1[11] + 24LL) + 32LL))) != 0 &&
            *(_BYTE*)(v17 + 32) != 0 &&
            (game_GameModeData_instance_ == 0 ||
             (v18 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)(v1[11] + 24LL) + 32LL))) ==
                 0 ||
             *(_BYTE*)(v18 + 32) != 4);
        ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)"L_KeyHelp",
                                         v19);
        v20 = game_990a70(v1[11]);
        v21 = v1[11];
        v22 = *(_DWORD*)(v21 + 60);
        v23 = *(unsigned __int8*)(v21 + 56);
        if (v20 >= v22) {
          v24 = v22;
        }
        else {
          v24 = v20;
        }
        if (v23 == 3) {
          game_gameui_157cff0(v2, (__int64)"T_Num", v24, 0);
          game_gameui_157cff0(v2, (__int64)"T_MaxNum",
                              *(_DWORD*)(v1[11] + 60LL), 0);
        }
        else {
          game_gameui_157d1a0(v2, (__int64)"T_Num", v24);
          game_gameui_157d1a0(v2, (__int64)"T_MaxNum",
                              *(_DWORD*)(v1[11] + 60LL));
        }
        v25 = ui_LayoutAccessor_FindAlignment(v2, (__int64)"A_Num");
        if (v25 != 0) {
          Alignment_56b600(v25);
        }
        LayoutAccessor_1560070((void*)(&v49_.v49), v2, "L_Gauge");
        if (v49_.v50 == 0) {
        LABEL_67:
          GameHr_16eb610(v1, 3u, "L_Cost", (__int64)"Icon", (__int64)"T_Num",
                         *(unsigned __int16*)(v1[11] + 64LL), 0);
          v39 = v1[7];
          if (v39 == 0) {
            goto LABEL_72;
          }
          v40 = std___1___shared_weak_count_lock(v39);
          if (v40 == 0) {
            goto LABEL_72;
          }
          v41 = v40;
          v42 = (atomic_ullong*)(v40 + 8);
          v43 = (__int64*)v1[6];
          if (atomic_fetch_add(v42, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            v44 = v43;
            (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
            std___1___shared_weak_count___release_weak(v41);
            v43 = v44;
          }
          if (v43 == nullptr) {
          LABEL_72:
            v43 = ui_LayoutAccessor_empty__ptr[0];
          }
          LayoutAccessor_1560070((void*)(&v49_.v49), v43, "L_KeyHelp");
          result = v49_.v50;
          if (v49_.v50 == 0) {
            goto LABEL_86;
          }
          v45 = std___1___shared_weak_count_lock(v49_.v50);
          v46 = v49_.v49;
          result = v49_.v50;
          if (v49_.v50 != 0) {
            result = std___1___shared_weak_count___release_weak(v49_.v50);
          }
          if (v45 != 0 && v46 != nullptr) {
            if (*(_QWORD**)(v1[1] + 336LL) == v1) {
              v47 = "Accent_Select";
            }
            else {
              v47 = "Accent_Default";
            }
            GameHr_1562680((__int64)v46, v47, 0x1.0000000000000p+0f);
            result = ui_LayoutAccessor_FindAlignment(v46, (__int64)"A_Txt");
            if (result != 0) {
              result = Alignment_56b600(result);
            }
          }
          else if (v45 == 0) {
          LABEL_86:
            if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
              return std___1___shared_weak_count___release_weak(v3);
            }
            return result;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
            result = std___1___shared_weak_count___release_weak(v45);
          }
          goto LABEL_86;
        }
        v26 = std___1___shared_weak_count_lock(v49_.v50);
        v27 = (__int64)v49_.v49;
        if (v26 != 0) {
          v28 = v49_.v49;
        }
        else {
          v28 = nullptr;
        }
        if (v49_.v50 != 0) {
          std___1___shared_weak_count___release_weak(v49_.v50);
        }
        if (v28 == nullptr) {
        LABEL_64:
          if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            std___1___shared_weak_count___release_weak(v26);
          }
          goto LABEL_67;
        }
        v48[0] = v28;
        v48[1] = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                                    memory_order_relaxed);
        }
        v29 = game_990a70(v1[11]);
        v30 = 0x1.0000000000000p+0f;
        v31 = *(_DWORD*)(v1[11] + 60LL);
        if (v31 >= 1 && v31 >= v29) {
          v30 = (float)v29 / (float)(unsigned int)v31;
        }
        GameRoutine_174d580((__int64)v48, "GaugeUp", 7, v30);
        if (v26 != 0) {
          std___1___shared_weak_count___release_weak(v26);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                                    memory_order_relaxed);
          v32 = (*(__int64 (**)(_QWORD*))(*v1 + 464LL))(v1);
          v33 = std___1___shared_weak_count_lock(v26);
          if (v33 != 0) {
            v34 = v33;
            v35 = (v32 & 1) != 0 ? "Default" : "Disable";
            LayoutAccessor_1562cf0(v27, v35);
            if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
              std___1___shared_weak_count___release_weak(v34);
            }
          }
          std___1___shared_weak_count___release_weak(v26);
          v36 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_62;
          }
        }
        else {
          (*(void (**)(_QWORD*))(*v1 + 464LL))(v1);
          v36 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_62;
          }
        }
        v37 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(v36 + 48),
            (unsigned __int64*)(*(_QWORD*)(v1[11] + 24LL) + 32LL));
        if (v37 != 0) {
          v38 = *(_BYTE*)(v37 + 32) != 4;
        LABEL_63:
          LayoutAccessor_155e830(v27, v38);
          goto LABEL_64;
        }
      LABEL_62:
        v38 = 1;
        goto LABEL_63;
      }
    }
  }
  return result;
}

bool ObeliskDestinyMenuItem_IsActive(__int64 a1)
{
  __int64 v1;

  if (game_GameModeData_instance_ == 0) {
    return true;
  }
  v1 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(*(_QWORD*)(a1 + 88) + 24LL) +
                                       32LL);
  return v1 == 0 || *(_BYTE*)(v1 + 32) != 4;
}

#pragma GCC visibility pop
