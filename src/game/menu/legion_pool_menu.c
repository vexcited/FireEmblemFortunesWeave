#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_185c940(_QWORD*);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20eea68;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21f1e08;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern int game_g_shared_system_skills;
__int64 LegionPoolMenu_Unknown139(_QWORD* a1);
__int64 LegionPoolMenu_Unknown93(__int64 result);
bool LegionPoolMenu_Unknown144(__int64 a1, _QWORD* a2);
extern __int64 GameData_21ca060;
extern __int64 GameData_21caa2c;
_QWORD* game_menu_LegionPoolMenu_UpdateEquipList_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2);
bool game_menu_LegionPoolMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64* game_820d50(int);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
bool GameRoutine_822320_alt1(unsigned int) __asm__("GameRoutine_822320");
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 game_gameui_Help_SetLegion(__int64*, unsigned __int8*, __int64);
__int64 game_menu_DeployPoolMenu_Apply(_QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__attribute__((swiftcall)) void GameRoutine_1612340(PSEUDO_X8, __int64*,
                                                    __int64*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 FloatingHelp_18af980(__int64, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
bool GameRoutine_19eff60(_QWORD*, _QWORD*);
bool game_159e890(__int64, char, __int64);
extern _QWORD GameData_1c11e88[7];
extern __int64 (*GameData_20ef340[])();
extern __int64 (*ui_Event_vtable[])();
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d890[2];
void Element_1886580(__int64, char);
void GameHr_157e0f0(__int64*, __int64, _BYTE*);
void GameHr_18af120(_QWORD*, __int64*);
void LayoutAccessor_1572ac0(__int64*, __int64, unsigned int, unsigned int);
__int64 game_menu_LegionPoolMenu_UpdateEquipList(__int64 a1, __int64 (*a2)());
__int64 LegionPoolMenu_Unknown94(__int64 a1);
bool game_menu_LegionPoolMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           __int64* a3);

__int64 LegionPoolMenu_Unknown139(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64* v8;
    __int64 v9;
  } v8_;

  game_menu_DeployPoolMenu_Apply(a1);
  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20eea68, 0);
    if (result != 0) {
      v3 = *(unsigned int*)(result + 40);
      v4 = (unsigned __int8*)GameData_212ceb0;
      if ((int)v3 >= 0) {
        v4 = (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                          GameData_212cf80[0] +
                                                      8LL) +
                                           48LL) +
                                8 * v3);
      }
      LayoutAccessor_1560070((void*)(&v8_.v8), a1 + 106, "L_Help");
      result = v8_.v9;
      if (v8_.v9 != 0) {
        v5 = a1[133];
        v6 = std___1___shared_weak_count_lock_alt1(v8_.v9);
        if (v6 != 0) {
          v7 = v6;
          if (v8_.v8 != nullptr) {
            game_gameui_Help_SetLegion(v8_.v8, v4, v5);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak_alt1(v7);
          }
        }
        result = v8_.v9;
        if (v8_.v9 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v8_.v9);
        }
      }
    }
  }
  return result;
}

__int64 LegionPoolMenu_Unknown93(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result + 848;
    v3 = result;
    v4 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    GameRoutine_18aee60(v4, v2);
    GameRoutine_18ae960(v1, 1);
    result = *(_QWORD*)(v1 + 240);
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_QWORD*)(v1 + 160) = v3;
    *(_BYTE*)(v1 + 257) = 0;
    *(_DWORD*)(v1 + 248) = -1;
    v5 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 game_menu_LegionPoolMenu_UpdateEquipList(__int64 a1, __int64 (*a2)())
{
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  __int64 v15;
  __int64 v16;
  __int64 v17[2];
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64 (**v22)();
    __int64 v23;
    __int64 v24;
  } v22_;

  LayoutAccessor_1560070((void*)(&v20_.v20), (__int64*)(a1 + 848),
                         "L_UnitEquipInfo/L_UnitInfo");
  v18_.v18[0] = GameData_20ef340;
  v18_.v18[1] = a1;
  v18_.v19 = v18_.v18;
  v4 = game_159e890((__int64)a2, 0, (__int64)v18_.v18);
  if (v20_.v21 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v20_.v21);
    if (v5 != 0) {
      v6 = v5;
      if (v20_.v20 != nullptr) {
        LayoutAccessor_1572ac0(v20_.v20, (__int64)a2, 0, v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  if (v18_.v19 == v18_.v18) {
    v7 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v7))((__int64)v18_.v19);
LABEL_12:
  if (v20_.v21 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v20_.v21);
  }
  v8 = LayoutAccessor_155fbe0((__int64*)(a1 + 848),
                              "L_UnitEquipInfo/L_MenuItem_Info");
  GameHr_157e0f0(v8, (__int64)"MID_DeployMenu_Legion", nullptr);
  LayoutAccessor_1560070((void*)(&v22_.v22), (__int64*)(a1 + 848),
                         "L_UnitEquipInfo/L_AnimalInfo");
  if (v22_.v23 != 0) {
    v9 = std___1___shared_weak_count_lock_alt1(v22_.v23);
    v10 = (__int64)v22_.v22;
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v22_.v23);
    }
    if (v9 != 0 && v10 != 0) {
      LayoutAccessor_155e830(v10, 0);
    }
    else if (v9 == 0) {
      goto LABEL_23;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
LABEL_23:
  v17[0] = (__int64)"L_UnitEquipInfo/L_LegionInfo";
  v17[1] = 28;
  GameRoutine_1612340((void*)(&v22_.v22), (__int64*)(a1 + 848), v17);
  result = v22_.v23;
  if (v22_.v23 == 0) {
    return result;
  }
  v12 = std___1___shared_weak_count_lock_alt1(v22_.v23);
  v13 = (__int64)v22_.v22;
  result = v22_.v23;
  if (v12 != 0) {
    v14 = v22_.v22;
  }
  else {
    v14 = nullptr;
  }
  if (v22_.v23 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v22_.v23);
  }
  if (v14 != nullptr) {
    *(_QWORD*)(v13 + 1064) = a2;
    *(_DWORD*)(v13 + 1072) = 3;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 40LL))(v13, 1);
    Element_1886580(v13, 1);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 384LL))(v13);
    if (v12 == 0) {
      return result;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v22_.v24 = 0;
    v22_.v22 = ui_Event_vtable;
    LODWORD(v22_.v23) = 20;
    v15 = std___1___shared_weak_count_lock_alt1(v12);
    if (v15 != 0) {
      v16 = v15;
      (*((void (**)(__int64* __return_ptr, __int64 (**)(void),
                    __int64 (***)(void)))v14[9] +
         2))(v17, v14 + 9, &v22_.v22);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
    }
    result = std___1___shared_weak_count___release_weak_alt1(v12);
  }
  else if (v12 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

__int64 LegionPoolMenu_Unknown94(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  char v4[4];
  struct {
    __int64* v5;
    int v6;
    char gap20_[4];
    __int64 v7;
  } v5_;

  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  result = LayoutAccessor_155e830(a1 + 848, 0);
  v3 = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v5_.v7 = 0;
      v5_.v5 = GameData_212d890[0] + 2;
      v5_.v6 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
          (void*)(v4), GameData_21f1e08 + 8, &v5_.v5);
    }
    v3[20] = 0;
    GameHr_18af120(v3, (__int64*)(a1 + 848));
    return FloatingHelp_18af980((__int64)v3, (__int64*)(a1 + 848));
  }
  return result;
}

bool LegionPoolMenu_Unknown144(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  int v16;

  if (a2 == nullptr) {
    return false;
  }
  v3 = GameRoutine_820d50(7);
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
      return false;
    }
  }
  if ((GameRoutine_822320(3) & 1) == 0) {
    return false;
  }
  v5 = a2[218];
  v6 = a2[219] - v5;
  v16 = game_g_shared_system_skills & 0xFFF;
  v7 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
        game_g_shared_system_skills) &
       1) != 0 &&
      (game_HasActiveSkill_843420(&v16, a2 + 218) & 1) != 0) {
    v8 = a2[55];
    v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
    if (((1 << v9) & 0xF1) != 0) {
      return false;
    }
  }
  v10 = a2[55];
  if (v10 == 0) {
    return false;
  }
  v11 = *(unsigned __int8*)(v10 + 16);
  v12 = v11 > 7;
  v13 = (1 << v11) & 0x91;
  return !v12 && v13 != 0 && *(_BYTE*)(a2[50] + 96LL) == 1;
}

_QWORD* game_menu_LegionPoolMenu_UpdateEquipList_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  _QWORD* result;
  int v16;

  result = (_QWORD*)*a2;
  if (*a2 != 0) {
    v2 = (_QWORD*)*a2;
    v3 = game_820d50(7);
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v3);
      if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
        return nullptr;
      }
    }
    if (!GameRoutine_822320_alt1(3u)) {
      return nullptr;
    }
    v5 = v2[218];
    v6 = v2[219] - v5;
    v16 = game_g_shared_system_skills & 0xFFF;
    v7 = ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) &
         0x7F;
    if (v7 + 1 <= v6 >> 2 &&
        ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
          game_g_shared_system_skills) &
         1) != 0 &&
        game_HasActiveSkill_843420_alt1(&v16, (__int64)(v2 + 218))) {
      v8 = v2[55];
      v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
      if (((1 << v9) & 0xF1) != 0) {
        return nullptr;
      }
    }
    v10 = v2[55];
    if (v10 == 0) {
      return nullptr;
    }
    v11 = *(unsigned __int8*)(v10 + 16);
    v12 = v11 > 7;
    v13 = (1 << v11) & 0x91;
    if (v12 || v13 == 0) {
      return nullptr;
    }
    else {
      return (_QWORD*)(*(_BYTE*)(v2[50] + 96LL) == 1);
    }
  }
  return result;
}

bool game_menu_LegionPoolMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v7;

  v2 = *(unsigned int*)(*(_QWORD*)a2 + 40LL);
  if (**(_BYTE**)(a1 + 8) != 0) {
    v3 = &GameData_21caa2c;
    if ((int)v2 >= 0) {
      v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                            8LL) +
                                 48LL) +
                      8 * v2);
    }
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                               8LL * *(unsigned __int8*)v3) +
                    64LL);
    if (v4 == 0) {
      return **(unsigned __int8**)(a1 + 8) == (_DWORD)v4;
    }
    v5 = *(unsigned __int8*)(v4 + 250);
    if (v5 <= 9) {
      if (v5 == 7) {
        LODWORD(v4) = 1;
        return **(unsigned __int8**)(a1 + 8) == (_DWORD)v4;
      }
      if (v5 != 8) {
        goto LABEL_21;
      }
      LODWORD(v4) = 2;
    }
    else {
      if (v5 != 10 && v5 != 31) {
        if (v5 == 42) {
          LODWORD(v4) = 4;
          return **(unsigned __int8**)(a1 + 8) == (_DWORD)v4;
        }
      LABEL_21:
        LODWORD(v4) = 0;
        return **(unsigned __int8**)(a1 + 8) == (_DWORD)v4;
      }
      LODWORD(v4) = 3;
    }
    return **(unsigned __int8**)(a1 + 8) == (_DWORD)v4;
  }
  v7 = &GameData_21caa2c;
  if ((int)v2 >= 0) {
    v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v2);
  }
  return *(_BYTE*)v7 != 0;
}

bool game_menu_LegionPoolMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                           __int64* a2,
                                                           __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  int v14;
  __int64 v15;
  bool v16;
  int v17;
  char v18;
  bool v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  unsigned int v33;
  __int64 v34;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64* v43;
    bool v44;
    char gap9_[7];
    __int64* v45;
    int v46;
    int v47;
    char v48;
  } v43_;
  struct {
    __int64* v49;
    char v50;
    char gap49_[7];
    __int64* v51;
    int v52;
    int v53;
    char v54;
  } v49_;

  v3 = *a2;
  v4 = *a3;
  v6 = *(unsigned int*)(*a2 + 40);
  v7 = GameData_212ceb0;
  v8 = GameData_212cf80[0];
  if ((int)v6 >= 0) {
    v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v6);
  }
  v9 = *(unsigned int*)(v4 + 40);
  v10 = GameData_212ceb0;
  if ((int)v9 >= 0) {
    v10 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                              48LL) +
                   8 * v9);
  }
  if (*((_BYTE*)v7 + 1) != 0) {
    v11 = game_UnitPool_Get((_BYTE*)v7 + 1);
  }
  else {
    v11 = nullptr;
  }
  if (*((_BYTE*)v10 + 1) != 0) {
    v12 = game_UnitPool_Get((_BYTE*)v10 + 1);
  }
  else {
    v12 = nullptr;
  }
  v13 = *(_DWORD*)(v3 + 104);
  v14 = *(_DWORD*)(v4 + 104);
  LODWORD(v15) = 0;
  v16 = v11 == nullptr && *((_DWORD*)v7 + 1) == 0;
  v17 = *(unsigned __int8*)(a1 + 8);
  v18 = !v16;
  v20 = v12 != nullptr || *((_DWORD*)v10 + 1) != 0;
  if (*(unsigned __int8*)(a1 + 8) > 4u) {
    if (*(unsigned __int8*)(a1 + 8) <= 6u) {
      if (v17 == 5) {
        v23 = 5;
      }
      else {
        v23 = 6;
      }
    }
    else if (v17 == 7) {
      v23 = 7;
    }
    else {
      if (v17 != 8) {
        v21 = 0;
        LODWORD(v22) = 0;
        if (v17 == 9) {
          v23 = 8;
          goto LABEL_52;
        }
      LABEL_60:
        v43_.v45 = v12;
        v49_.v49 = v7;
        v49_.v50 = v18;
        v49_.v51 = v11;
        v49_.v52 = v13;
        v49_.v53 = v22;
        v49_.v54 = v21;
        v43_.v43 = v10;
        v43_.v44 = v20;
        v43_.v46 = v14;
        v43_.v47 = v15;
        v43_.v48 = v21;
        return GameRoutine_19eff60(&v49_.v49, &v43_.v43);
      }
      v23 = 3;
    }
  LABEL_52:
    v22 = *(unsigned __int8*)v7;
    if (*(_BYTE*)v7 != 0) {
      LODWORD(v22) =
          *(__int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                 8 * v22) +
                      2 * v23 + 112);
    }
    v33 = v17 - 3;
    if (v33 > 6) {
      v34 = 1;
      v15 = *(unsigned __int8*)v10;
      if (*(_BYTE*)v10 == 0) {
      LABEL_59:
        v21 = 1;
        goto LABEL_60;
      }
    }
    else {
      v34 = GameData_1c11e88[(unsigned __int8)v33];
      v15 = *(unsigned __int8*)v10;
      if (*(_BYTE*)v10 == 0) {
        goto LABEL_59;
      }
    }
    LODWORD(v15) = *(
        __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) + 8 * v15) +
                  2 * v34 + 112);
    goto LABEL_59;
  }
  if (*(unsigned __int8*)(a1 + 8) > 2u) {
    if (v17 == 3) {
      v23 = 2;
    }
    else {
      v23 = 4;
    }
    goto LABEL_52;
  }
  if (v17 != 1) {
    v21 = 0;
    LODWORD(v22) = 0;
    if (v17 != 2) {
      goto LABEL_60;
    }
    v23 = 1;
    goto LABEL_52;
  }
  v24 = *(_QWORD*)(v3 + 96);
  v25 = *(unsigned int*)(v3 + 40);
  v26 = GameData_212ceb0;
  if ((int)v25 >= 0) {
    v26 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 8LL) + 48LL) + 8 * v25);
  }
  v27 = *(unsigned __int8*)v26;
  if (v27 == 0 ||
      *(_BYTE*)(*(_QWORD*)(v24 + 400) + 96LL) == 1 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8 * v27) +
                              50LL) <=
              (unsigned int)*(unsigned __int8*)(v24 + 552)) {
    v28 = *(unsigned int*)(v4 + 40);
    v29 = GameData_212ceb0;
    if ((int)v28 >= 0) {
      v29 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 8LL) + 48LL) +
                       8 * v28);
    }
    v30 = *(unsigned __int8*)v29;
    if (v30 != 0) {
      v31 = *(_QWORD*)(v4 + 96);
      if (*(_BYTE*)(*(_QWORD*)(v31 + 400) + 96LL) != 1 ||
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8 * v30) +
                              50LL) >
              (unsigned int)*(unsigned __int8*)(v31 + 552)) {
        return true;
      }
    }
  }
  v36 = GameData_212ceb0;
  if ((int)v25 >= 0) {
    v36 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 8LL) + 48LL) + 8 * v25);
  }
  v37 = *(unsigned __int8*)v36;
  if (v37 != 0) {
    if (*(_BYTE*)(*(_QWORD*)(v24 + 400) + 96LL) != 1 ||
        (v38 = *GameData_212c998[0],
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                        8 * v37) +
                             50LL) >
             (unsigned int)*(unsigned __int8*)(v24 + 552))) {
      v39 = *(unsigned int*)(v4 + 40);
      v40 = GameData_212ceb0;
      if ((int)v39 >= 0) {
        v40 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v8 + 8LL) + 48LL) +
                         8 * v39);
      }
      v41 = *(unsigned __int8*)v40;
      if (v41 == 0) {
        return false;
      }
      v42 = *(_QWORD*)(v4 + 96);
      v38 = *GameData_212c998[0];
      if (*(_BYTE*)(*(_QWORD*)(v42 + 400) + 96LL) == 1 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v38 + 64) + 8 * v41) +
                              50LL) <=
              (unsigned int)*(unsigned __int8*)(v42 + 552)) {
        return false;
      }
    }
  }
  else {
    v38 = *GameData_212c998[0];
  }
  v15 = *(_QWORD*)(v38 + 64);
  LODWORD(v22) =
      *(unsigned __int8*)(*(_QWORD*)(v15 + 8LL * *(unsigned __int8*)v7) + 50LL);
  LODWORD(v15) = *(
      unsigned __int8*)(*(_QWORD*)(v15 + 8LL * *(unsigned __int8*)v10) + 50LL);
  goto LABEL_59;
}

#pragma GCC visibility pop
