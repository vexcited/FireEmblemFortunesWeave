#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1574c20(_QWORD);
__int64 GameRoutine_1574d80(_QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_16ce360(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16d09f0(_QWORD, _QWORD);
__int64 GameRoutine_16d0b10(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 PageTab_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_menu_UnitGridSelectMenu_Unknown88(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN* game_kNoUnitListFlags_ptr;
extern __int64 GameData_205d9f0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0b0[9];
extern __int64* GameData_212e0c8[6];
__int64 EquipUnitSelectMenu_15e82e0(__int64 a1);
__int64 EquipUnitSelectMenu_16cd2a0(__int64 a1, unsigned int a2);
__int64 EquipUnitSelectMenu_16cdaa0(_QWORD* a1, _QWORD* a2);
__int64 EquipUnitSelectMenu_16cdee0_alt1(__int64 a1) __asm__(
    "EquipUnitSelectMenu_16cdee0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* game_820d50(int);
__int64 PageTab_16e6880_alt1(__int64, int, int, int) __asm__("PageTab_16e6880");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_gameui_Util_CountAvailableArtsNum(__int64);
__int64 game_menu_UnitGridSelectMenu_Unknown88_alt1(_QWORD*) __asm__(
    "game_menu_UnitGridSelectMenu_Unknown88");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool GameRoutine_822320_alt1(unsigned __int8) __asm__("GameRoutine_822320");
void GameRoutine_16ce360_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_16ce360");
void GameRoutine_16d0b10_alt1(__int64*, _DWORD*) __asm__("GameRoutine_16d0b10");
__int64 EquipUnitSelectMenu_16cdee0(_QWORD* a1);

__int64 EquipUnitSelectMenu_15e82e0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int16* v10;
  __int64 v11;
  __int64 v12;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_205d9f0, 0);
    if (result != 0) {
      v3 = result;
      EquipUnitSelectMenu_16cdee0_alt1(a1);
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_UnitInfoDetail/L_UnitInfo");
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 664LL))(v3) & 1) != 0) {
        v5 = *(_QWORD*)(v3 + 88);
        if (v5 == 0 ||
            (v6 = *(_QWORD*)(game_UnitListSet_instance_ +
                             8LL * *(unsigned __int8*)(v3 + 96)),
             v7 = *(_QWORD**)v6, v8 = *(_QWORD**)(v6 + 8), v7 == v8)) {
        LABEL_8:
          v9 = nullptr;
        }
        else {
          while (1) {
            v9 = (_QWORD*)*v7;
            if (*(_QWORD*)*v7 == v5) {
              break;
            }
            v7 += 2;
            if (v7 == v8) {
              goto LABEL_8;
            }
          }
          v12 = v7[1];
          if (v12 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
              std___1___shared_weak_count___release_weak(v12);
            }
          }
        }
        v10 = (unsigned __int16*)(v9 + 6);
        if (v9 == nullptr) {
          v10 = (unsigned __int16*)game_kNoUnitListFlags_ptr;
        }
        v11 = *v10;
      }
      else {
        v11 = 0;
      }
      return GameRoutine_1574d80(v4, v11);
    }
  }
  return result;
}

__int64 EquipUnitSelectMenu_16cd2a0(__int64 a1, unsigned int a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  char* v28;

  v2 = *(char**)(a1 + 1328);
  v3 = *(char**)(a1 + 1336);
  v4 = v2;
  if (v2 != v3) {
    v5 = v3 - v2 - 4;
    v4 = *(char**)(a1 + 1328);
    if ((~(_BYTE)v5 & 0xC) == 0) {
    LABEL_6:
      if (v5 >= 0xC) {
        v4 += 8;
        while (1) {
          if (*((_DWORD*)v4 - 2) == a2) {
            if (v4 - 8 != v3) {
              return a2;
            }
            goto LABEL_20;
          }
          if (*((_DWORD*)v4 - 1) == a2) {
            v4 -= 4;
            goto LABEL_17;
          }
          if (*(_DWORD*)v4 == a2) {
            goto LABEL_17;
          }
          if (*((_DWORD*)v4 + 1) == a2) {
            break;
          }
          v7 = v4 + 8;
          v4 += 16;
          if (v7 == v3) {
            goto LABEL_20;
          }
        }
        if (v4 + 4 != v3) {
          return a2;
        }
      }
      goto LABEL_20;
    }
    v6 = ((unsigned __int8)((unsigned int)v5 >> 2) + 1) & 3;
    v4 = *(char**)(a1 + 1328);
    while (*(_DWORD*)v4 != a2) {
      v4 += 4;
      if (--v6 == 0) {
        goto LABEL_6;
      }
    }
  }

LABEL_17:
  if (v4 != v3) {
    return a2;
  }

LABEL_20:
  if ((int)a2 > 5) {
    if (a2 == 6) {
      if (v2 != v3) {
        v16 = v3 - v2 - 4;
        if ((~(_BYTE)v16 & 0xC) != 0) {
          v17 = ((unsigned __int8)((unsigned int)v16 >> 2) + 1) & 3;
          while (*(_DWORD*)v2 != 5) {
            v2 += 4;
            if (--v17 == 0) {
              goto LABEL_57;
            }
          }
        }
        else {
        LABEL_57:
          if (v16 < 0xC) {
            return 0;
          }
          for (v2 += 8;; v2 += 16) {
            if (*((_DWORD*)v2 - 2) == 5) {
              v2 -= 8;
              goto LABEL_105;
            }
            if (*((_DWORD*)v2 - 1) == 5) {
              v2 -= 4;
              goto LABEL_105;
            }
            if (*(_DWORD*)v2 == 5) {
              goto LABEL_105;
            }
            if (*((_DWORD*)v2 + 1) == 5) {
              break;
            }
            v18 = v2 + 8;
            if (v18 == v3) {
              return 0;
            }
          }
          v2 += 4;
        }
      }
    LABEL_105:
      if (v2 != v3) {
        return 5;
      }
      return 0;
    }
    if (a2 != 7) {
      goto LABEL_23;
    }
    v19 = *(char**)(a1 + 1328);
    if (v2 != v3) {
      v20 = v3 - v2 - 4;
      v19 = *(char**)(a1 + 1328);
      if ((~(_BYTE)v20 & 0xC) != 0) {
        v21 = ((unsigned __int8)((unsigned int)v20 >> 2) + 1) & 3;
        v19 = *(char**)(a1 + 1328);
        while (*(_DWORD*)v19 != 8) {
          v19 += 4;
          if (--v21 == 0) {
            goto LABEL_70;
          }
        }
      }
      else {
      LABEL_70:
        if (v20 < 0xC) {
          goto LABEL_23;
        }
        v19 += 8;
        while (1) {
          if (*((_DWORD*)v19 - 2) == 8) {
            v19 -= 8;
            goto LABEL_108;
          }
          if (*((_DWORD*)v19 - 1) == 8) {
            v19 -= 4;
            goto LABEL_108;
          }
          if (*(_DWORD*)v19 == 8) {
            goto LABEL_108;
          }
          if (*((_DWORD*)v19 + 1) == 8) {
            break;
          }
          v22 = v19 + 8;
          v19 += 16;
          if (v22 == v3) {
            goto LABEL_23;
          }
        }
        v19 += 4;
      }
    }
  LABEL_108:
    if (v19 != v3) {
      return 8;
    }
  LABEL_23:
    if (a2 == 8) {
      if (v2 == v3) {
        goto LABEL_94;
      }
      v9 = v3 - v2 - 4;
      if ((~(_BYTE)v9 & 0xC) != 0) {
        v10 = ((unsigned __int8)((unsigned int)v9 >> 2) + 1) & 3;
        while (*(_DWORD*)v2 != 7) {
          v2 += 4;
          if (--v10 == 0) {
            goto LABEL_29;
          }
        }
      LABEL_94:
        if (v2 != v3) {
          return 7;
        }
        return 0;
      }
    LABEL_29:
      if (v9 >= 0xC) {
        for (v2 += 8;; v2 += 16) {
          if (*((_DWORD*)v2 - 2) == 7) {
            v2 -= 8;
            goto LABEL_94;
          }
          if (*((_DWORD*)v2 - 1) == 7) {
            v2 -= 4;
            goto LABEL_94;
          }
          if (*(_DWORD*)v2 == 7) {
            goto LABEL_94;
          }
          if (*((_DWORD*)v2 + 1) == 7) {
            break;
          }
          v11 = v2 + 8;
          if (v11 == v3) {
            return 0;
          }
        }
        v2 += 4;
        goto LABEL_94;
      }
    }
    return 0;
  }
  if (a2 == 2) {
    if (v2 != v3) {
      v23 = v3 - v2 - 4;
      if ((~(_BYTE)v23 & 0xC) != 0) {
        v24 = ((unsigned __int8)((unsigned int)v23 >> 2) + 1) & 3;
        while (*(_DWORD*)v2 != 1) {
          v2 += 4;
          if (--v24 == 0) {
            goto LABEL_83;
          }
        }
      }
      else {
      LABEL_83:
        if (v23 < 0xC) {
          return 0;
        }
        for (v2 += 8;; v2 += 16) {
          if (*((_DWORD*)v2 - 2) == 1) {
            v2 -= 8;
            return v2 != v3;
          }
          if (*((_DWORD*)v2 - 1) == 1) {
            v2 -= 4;
            return v2 != v3;
          }
          if (*(_DWORD*)v2 == 1) {
            return v2 != v3;
          }
          if (*((_DWORD*)v2 + 1) == 1) {
            break;
          }
          v25 = v2 + 8;
          if (v25 == v3) {
            return 0;
          }
        }
        v2 += 4;
      }
    }
    return v2 != v3;
  }
  if (a2 == 3) {
    v12 = *(char**)(a1 + 1328);
    if (v2 != v3) {
      v13 = v3 - v2 - 4;
      v12 = *(char**)(a1 + 1328);
      if ((~(_BYTE)v13 & 0xC) != 0) {
        v14 = ((unsigned __int8)((unsigned int)v13 >> 2) + 1) & 3;
        v12 = *(char**)(a1 + 1328);
        while (*(_DWORD*)v12 != 2) {
          v12 += 4;
          if (--v14 == 0) {
            goto LABEL_44;
          }
        }
      }
      else {
      LABEL_44:
        if (v13 < 0xC) {
        LABEL_116:
          if (v2 != v3) {
            v26 = v3 - v2 - 4;
            if ((~(_BYTE)v26 & 0xC) != 0) {
              v27 = ((unsigned __int8)((unsigned int)v26 >> 2) + 1) & 3;
              while (*(_DWORD*)v2 != 1) {
                v2 += 4;
                if (--v27 == 0) {
                  goto LABEL_121;
                }
              }
            }
            else {
            LABEL_121:
              if (v26 < 0xC) {
                return 0;
              }
              for (v2 += 8;; v2 += 16) {
                if (*((_DWORD*)v2 - 2) == 1) {
                  v2 -= 8;
                  return v2 != v3;
                }
                if (*((_DWORD*)v2 - 1) == 1) {
                  v2 -= 4;
                  return v2 != v3;
                }
                if (*(_DWORD*)v2 == 1) {
                  return v2 != v3;
                }
                if (*((_DWORD*)v2 + 1) == 1) {
                  break;
                }
                v28 = v2 + 8;
                if (v28 == v3) {
                  return 0;
                }
              }
              v2 += 4;
            }
          }
          return v2 != v3;
        }
        v12 += 8;
        while (1) {
          if (*((_DWORD*)v12 - 2) == 2) {
            v12 -= 8;
            goto LABEL_114;
          }
          if (*((_DWORD*)v12 - 1) == 2) {
            v12 -= 4;
            goto LABEL_114;
          }
          if (*(_DWORD*)v12 == 2) {
            goto LABEL_114;
          }
          if (*((_DWORD*)v12 + 1) == 2) {
            break;
          }
          v15 = v12 + 8;
          v12 += 16;
          if (v15 == v3) {
            goto LABEL_116;
          }
        }
        v12 += 4;
      }
    }
  LABEL_114:
    if (v12 != v3) {
      return 2;
    }
    goto LABEL_116;
  }
  return 0;
}

__int64 EquipUnitSelectMenu_16cdaa0(_QWORD* a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  char v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;

  a1[171] = a1[170];
  GameRoutine_1560070((void*)&v31, a1 + 106, "L_UnitInfoDetail");
  result = v32;
  if (v32 != 0) {
    v5 = std___1___shared_weak_count_lock(v32);
    v6 = v31;
    result = v32;
    if (v32 != 0) {
      result = std___1___shared_weak_count___release_weak(v32);
    }
    if (v5 == 0 || v6 == nullptr) {
      if (v5 == 0) {
        return result;
      }
      goto LABEL_70;
    }
    v8 = (*(__int64 (**)(_QWORD*))(*a1 + 1200LL))(a1);
    if ((v8 & 1) == 0) {
      result = ui_LayoutAccessor_SetPaneVisible(v6, "A_KeyHelp", 0);
      goto LABEL_70;
    }
    v9 = a1[42];
    v10 = a2[1] == *a2;
    if (v9 != 0 && (v11 = __dynamic_cast(v9, GameData_212e008[0],
                                         GameData_212e0b0[0], 0)) != 0) {
      v12 = *(_QWORD*)(v11 + 88);
      if (v12 != 0) {
        LODWORD(v31) = *game_g_shared_system_skills_ptr & 0xFFF;
        if ((game_HasSkill(v12 + 1744, &v31) & 1) != 0) {
          v13 = *(_QWORD*)(v12 + 440);
          v14 = v13 != 0 ? *(_BYTE*)(v13 + 16) : 9;
          v21 = ((1 << v14) & 0xF1) != 0;
        }
        else {
          v21 = false;
        }
        if (!v10 && !v21) {
        LABEL_42:
          v22 = game_util_Format("L_KeyHelp%02d", 0);
          GameRoutine_1560070((void*)&v31, v6, v22);
          if (v32 == 0) {
            goto LABEL_52;
          }
          v23 = std___1___shared_weak_count_lock(v32);
          v24 = v31;
          if (v32 != 0) {
            std___1___shared_weak_count___release_weak(v32);
          }
          if (v23 != 0 && v24 != nullptr) {
            LayoutAccessor_155e830(v24, 0);
            if (a2[1] != *a2) {
              GameRoutine_1593d90(v24, *a2);
              GameRoutine_16d09f0(a1 + 170, *a2 + 20LL);
            }
          }
          else if (v23 == 0) {
            goto LABEL_52;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak(v23);
          }
        LABEL_52:
          v25 = game_util_Format("L_KeyHelp%02d", 1);
          GameRoutine_1560070((void*)&v31, v6, v25);
          if (v32 != 0) {
            v26 = std___1___shared_weak_count_lock(v32);
            v27 = v31;
            if (v32 != 0) {
              std___1___shared_weak_count___release_weak(v32);
            }
            if (v26 != 0 && v27 != nullptr) {
              LayoutAccessor_155e830(v27, 0);
              if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(a2[1] - *a2) >> 3) >= 2) {
                GameRoutine_1593d90(v27, *a2 + 40LL);
                GameRoutine_16d09f0(a1 + 170, *a2 + 60LL);
              }
              goto LABEL_60;
            }
            if (v26 != 0) {
            LABEL_60:
              if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                std___1___shared_weak_count___release_weak(v26);
              }
            }
          }
          v28 = v6[1];
          if (v28 != 0) {
            v29 = std___1___shared_weak_count_lock(v28);
            if (v29 != 0) {
              v30 = v29;
              if (*v6 != 0) {
                ControlCreator_13633c0();
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                std___1___shared_weak_count___release_weak(v30);
              }
            }
          }
          result = ui_LayoutAccessor_FindAlignment(v6, "A_KeyHelp");
          if (result != 0) {
            result = Alignment_56b600();
          }
          goto LABEL_70;
        }
      }
    }
    else if (!v10) {
      goto LABEL_42;
    }
    v15 = game_util_Format("L_KeyHelp%02d", 0);
    GameRoutine_1560070((void*)&v31, v6, v15);
    if (v32 != 0) {
      v16 = std___1___shared_weak_count_lock(v32);
      v17 = v31;
      if (v32 != 0) {
        std___1___shared_weak_count___release_weak(v32);
      }
      if (v16 != 0 && v17 != nullptr) {
        LayoutAccessor_155e830(v17, 0);
      }
      else if (v16 == 0) {
        goto LABEL_29;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
  LABEL_29:
    v18 = game_util_Format("L_KeyHelp%02d", 1);
    GameRoutine_1560070((void*)&v31, v6, v18);
    result = v32;
    if (v32 != 0) {
      v19 = std___1___shared_weak_count_lock(v32);
      v20 = v31;
      result = v32;
      if (v32 != 0) {
        result = std___1___shared_weak_count___release_weak(v32);
      }
      if (v19 != 0 && v20 != nullptr) {
        result = LayoutAccessor_155e830(v20, 0);
        goto LABEL_36;
      }
      if (v19 != 0) {
      LABEL_36:
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          result = std___1___shared_weak_count___release_weak(v19);
        }
      }
    }
  LABEL_70:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

__int64 EquipUnitSelectMenu_16cdee0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;

  v2 = a1[42];
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e0c8[0], 0);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 88);
      v5 = (_QWORD*)v3;
      a1[167] = a1[166];
      if (v4 != 0) {
        LODWORD(v28_.v28) = 0;
        GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
        v6 = *(_WORD*)(v4 + 876) != 0;
        if (*(_WORD*)(v4 + 884) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 892) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 900) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 908) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 916) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 924) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 932) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 940) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 948) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 956) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 964) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 972) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 980) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 988) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 996) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1004) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1012) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1020) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1028) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1036) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1044) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1052) != 0) {
          ++v6;
        }
        if (*(_WORD*)(v4 + 1060) != 0) {
          v7 = v6 + 1;
        }
        else {
          v7 = v6;
        }
        LODWORD(v28_.v28) = 1;
        GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
        if (v7 >= 0xB) {
          LODWORD(v28_.v28) = 2;
          GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
          if (v7 >= 0x15) {
            LODWORD(v28_.v28) = 3;
            GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
          }
        }
        LODWORD(v28_.v28) = 4;
        GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
        LODWORD(v28_.v28) = 5;
        GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
        if ((int)game_gameui_Util_CountAvailableArtsNum(v4) >= 11) {
          LODWORD(v28_.v28) = 6;
          GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
        }
        v8 = *(unsigned __int8*)(*(_QWORD*)(v4 + 400) + 96LL);
        if (v8 == 2) {
          LODWORD(v28_.v28) = 7;
          GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
          v8 = *(unsigned __int8*)(*(_QWORD*)(v4 + 400) + 96LL);
        }
        if (v8 == 1) {
          v9 = game_820d50(7);
          if ((game_GameModeData_instance_ == 0 ||
               (v10 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v9)) == 0 ||
               *(_DWORD*)(v10 + 32) == 0) &&
              GameRoutine_822320_alt1(3u)) {
            LODWORD(v28_.v28) = 8;
            GameRoutine_16d0b10_alt1(a1 + 166, &v28_.v28);
          }
        }
      }
      if (((*(__int64 (**)(_QWORD*))(*a1 + 1192LL))(a1) & 1) == 0) {
        goto LABEL_90;
      }
      v11 = EquipUnitSelectMenu_16cd2a0((__int64)a1, *((_DWORD*)a1 + 339));
      v12 = a1[167];
      v13 = a1[166];
      *((_DWORD*)a1 + 338) = v11;
      v14 = v12 - v13;
      if (v14 != 0) {
        v15 = 0;
        while (*(_DWORD*)(v13 + 4 * v15) != v11) {
          if (v14 >> 2 == ++v15) {
            goto LABEL_69;
          }
        }
      }
      else {
      LABEL_69:
        LODWORD(v15) = 0;
      }
      *((_DWORD*)a1 + 301) = v15;
      *((_DWORD*)a1 + 302) = v15;
      *((_DWORD*)a1 + 300) = ((unsigned __int64)v14 >> 2) - 1;
      LayoutAccessor_1560070((void*)(&v28_.v28), a1 + 106,
                             "L_UnitInfoDetail/L_PageTab");
      if (v28_.v29 != 0) {
        v16 = std___1___shared_weak_count_lock_alt1(v28_.v29);
        v17 = v16;
        if (v16 != 0) {
          v18 = v28_.v28;
          v19 = 0;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
        LABEL_76:
          v20 = (*(__int64 (**)(_QWORD*))(*a1 + 192LL))(a1);
          if (v17 != 0) {
            v21 = v20;
            v22 = std___1___shared_weak_count_lock_alt1(v17);
            if (v22 != 0) {
              v23 = v22;
              if (v18 != 0) {
                *((_DWORD*)a1 + 310) = 1;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16),
                                          1u, memory_order_relaxed);
                a1[162] = v18;
                v24 = a1[163];
                a1[163] = v17;
                if (v24 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v24);
                }
                PageTab_16e6880_alt1((__int64)(a1 + 150), v21, 4, 5);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                std___1___shared_weak_count___release_weak_alt1(v23);
              }
            }
            std___1___shared_weak_count___release_weak_alt1(v17);
          }
          if ((v19 & 1) == 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak_alt1(v17);
          }
          if (v28_.v29 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v28_.v29);
          }
        LABEL_90:
          v25 = v5[11];
          v26 = (*(__int64 (**)(_QWORD*))(*v5 + 696LL))(v5);
          GameRoutine_16ce360_alt1((__int64)a1, v25, v26 & 1);
          return game_menu_UnitGridSelectMenu_Unknown88_alt1(a1);
        }
        v18 = 0;
      }
      else {
        v18 = 0;
        v17 = 0;
      }
      v19 = 1;
      goto LABEL_76;
    }
  }
  return game_menu_UnitGridSelectMenu_Unknown88_alt1(a1);
}

#pragma GCC visibility pop
