#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_e77060(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _DWORD GameData_1be9124[3];
extern _UNKNOWN GameData_1af5ec9;
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_212d690;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char* GameData_206d198[3];
__int64 LinkUnitMenuItem_DrawText(_QWORD* a1);
__int64 GameRoutine_e6cfa0(_QWORD, _QWORD);
extern _QWORD GameData_1b01768[4];
extern __int64 GameData_2203490;
__int64 LinkUnitMenuItem_ACall(__int64 a1);
__int64 CmdBtlParty_e77060(unsigned int, __int64, __int64*);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");

__int64 LinkUnitMenuItem_ACall(__int64 a1)
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = GameData_2203490;
  v3 = *(_QWORD*)(GameData_2203490 + 640);
  v4 = *(_QWORD*)(GameData_2203490 + 648);
  if (v4 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
    if (v3 != 0) {
      goto LABEL_5;
    }
  LABEL_27:
    v3 = *(_QWORD*)(v2 + 656);
    v24 = *(_QWORD*)(v2 + 664);
    if (v24 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak(v24);
      }
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  if (v3 == 0) {
    goto LABEL_27;
  }
LABEL_5:
  v5 = *(_QWORD*)(a1 + 96);
  if (v5 != 0 && (v6 = std___1___shared_weak_count_lock(v5)) != 0) {
    v7 = *(_QWORD*)(a1 + 88);
    v8 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 440LL);
    if (v8 != 0 && (unsigned __int64)(v9 = *(unsigned __int8*)(v8 + 16)) <= 3) {
      v10 = GameData_1b01768[v9];
    }
    else {
      v10 = 3;
    }
    v19 = GameData_2203490 + (v10 << 7);
    v20 = *(__int64**)(v19 + 712);
    v21 = *(__int64**)(v19 + 720);
    if (v20 == v21) {
      v22 = 0;
    }
    else {
      v22 = 0;
      do {
        v23 = *v20;
        v20 += 2;
        if (v23 == v7) {
          break;
        }
        ++v22;
      } while (v20 != v21);
    }
    *(_DWORD*)(v3 + 48) = v22;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v25 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  else {
    if (*(_QWORD*)((char*)((_QWORD*)0x1B4LL) + 4) != 0 &&
        (unsigned __int64)(v12 = *(
                               unsigned __int8*)(*(_QWORD*)((char*)((
                                                                _QWORD*)0x1B4LL) +
                                                            4) +
                                                 16LL)) <= 3) {
      v13 = GameData_1b01768[v12];
    }
    else {
      v13 = 3;
    }
    v14 = GameData_2203490 + (v13 << 7);
    v15 = *(__int64**)(v14 + 712);
    v16 = *(__int64**)(v14 + 720);
    if (v15 == v16) {
      *(_DWORD*)(v3 + 48) = 0;
    }
    else {
      v17 = 0;
      do {
        v18 = *v15;
        v15 += 2;
        if (v18 == 0) {
          break;
        }
        ++v17;
      } while (v15 != v16);
      *(_DWORD*)(v3 + 48) = v17;
    }
  }
  GameRoutine_e6cfa0(*(unsigned int*)(a1 + 40), 9);
  return 4;
}

__int64 LinkUnitMenuItem_DrawText(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  atomic_ullong* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  atomic_ullong* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  atomic_ullong* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  char v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  void* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  atomic_ullong* v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 result;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  char v83;
  __int64 v84;
  __int64* v85;
  __int64* v86;
  __int64* v87;
  __int64* v88;
  __int64 v89;
  struct {
    __int64 v90;
    __int64 v91;
  } v90_;
  struct {
    __int64 v92;
    __int64 v93;
  } v92_;
  unsigned __int64 v94[2];

  game_menu_GameMenuItem_DrawText_alt1(a1);
  v2 = GameData_212ea58;
  v3 = *GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 640);
  v5 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
    if (v4 != 0) {
      goto LABEL_4;
    }
  }
  else if (v4 != 0) {
    goto LABEL_4;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v78 = *(_QWORD*)(v3 + 664);
  if (v78 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
      std___1___shared_weak_count___release_weak_alt1(v78);
    }
  }
LABEL_4:
  v6 = *(unsigned __int8*)(v4 + 8);
  switch (v6) {
  case 7:
    v7 = 0;
    v8 = 0;
    v9 = a1[7];
    if (v9 == 0) {
      goto LABEL_17;
    }
    break;
  case 9:
    v7 = 0;
    v8 = 1;
    v9 = a1[7];
    if (v9 == 0) {
      goto LABEL_17;
    }
    break;
  case 8:
    v7 = 0;
    v8 = 2;
    v9 = a1[7];
    if (v9 == 0) {
      goto LABEL_17;
    }
    break;
  default:
    v7 = 1;
    v8 = 3;
    v9 = a1[7];
    if (v9 == 0) {
      goto LABEL_17;
    }
    break;
  }
  v10 = std___1___shared_weak_count_lock_alt1(v9);
  if (v10 == 0) {
    goto LABEL_17;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = (__int64*)a1[6];
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v79 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak_alt1(v11);
  v13 = v79;
  if (v79 == nullptr) {
  LABEL_17:
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_18:
  if ((v7 & 1) == 0) {
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v13, (__int64)"IconType", 1);
    v19 = a1[7];
    if (v19 != 0) {
      v20 = std___1___shared_weak_count_lock_alt1(v19);
      if (v20 != 0) {
        v21 = v20;
        v22 = (atomic_ullong*)(v20 + 8);
        v23 = (__int64*)a1[6];
        if (atomic_fetch_add(v22, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v23 != nullptr) {
          LABEL_30:
            v24 = ui_LayoutAccessor_FindPane_alt1(v23, (__int64)"IconType");
            if (v24 != 0) {
              v25 = __dynamic_cast(v24, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v25 != 0) {
                Manager_136a920(ui_Manager_instance_ + 1264, v25, 0, 7u,
                                GameData_206d198[v8]);
              }
            }
            v26 = *v2;
            v27 = *(_QWORD*)(*v2 + 640);
            v28 = *(_QWORD*)(v26 + 648);
            if (v28 != 0 &&
                (atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8),
                                           1u, memory_order_relaxed),
                 atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0)) {
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              std___1___shared_weak_count___release_weak_alt1(v28);
              if (v27 != 0) {
                goto LABEL_36;
              }
            }
            else if (v27 != 0) {
              goto LABEL_36;
            }
            v27 = *(_QWORD*)(v26 + 656);
            v82 = *(_QWORD*)(v26 + 664);
            if (v82 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
                std___1___shared_weak_count___release_weak_alt1(v82);
              }
            }
          LABEL_36:
            if ((unsigned int)*(unsigned __int8*)(v27 + 8) - 7 > 2) {
              v29 = 3;
              v30 = *(_QWORD*)(v26 + 760);
              if (v30 != 0) {
              LABEL_38:
                v31 = *(_QWORD*)(v26 + 752);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16),
                                          1u, memory_order_relaxed);
                v92_.v92 = 0;
                v92_.v93 = std___1___shared_weak_count_lock_alt1(v30);
                if (v92_.v93 != 0) {
                  v92_.v92 = v31;
                }
              LABEL_42:
                v32 = a1[12];
                v90_.v90 = 0;
                v90_.v91 = 0;
                if (v32 != 0) {
                  v90_.v91 = std___1___shared_weak_count_lock_alt1(v32);
                  if (v90_.v91 != 0) {
                    v90_.v90 = a1[11];
                  }
                }
                v33 = CmdBtlParty_e77060(v29, (__int64)&v92_.v92, &v90_.v90);
                v34 = v90_.v91;
                v35 = v33;
                if (v90_.v91 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v90_.v91 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
                  std___1___shared_weak_count___release_weak_alt1(v34);
                }
                v36 = v92_.v93;
                if (v92_.v93 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v92_.v93 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
                  std___1___shared_weak_count___release_weak_alt1(v36);
                }
                if (v30 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v30);
                }
                v37 = a1[7];
                if (v37 != 0) {
                  v38 = std___1___shared_weak_count_lock_alt1(v37);
                  if (v38 != 0) {
                    v39 = v38;
                    v40 = (atomic_ullong*)(v38 + 8);
                    v41 = (__int64*)a1[6];
                    if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                      if (v41 != nullptr) {
                      LABEL_58:
                        ui_LayoutAccessor_SetPaneVisible_alt1(
                            (__int64)v41, (__int64)"T_Cost", 1);
                        v42 = a1[7];
                        if (v42 != 0) {
                          v43 = std___1___shared_weak_count_lock_alt1(v42);
                          if (v43 != 0) {
                            v44 = v43;
                            v45 = (atomic_ullong*)(v43 + 8);
                            v46 = (__int64*)a1[6];
                            if (atomic_fetch_add(v45, 0xFFFFFFFFFFFFFFFFLL) !=
                                0) {
                              if (v46 != nullptr) {
                              LABEL_63:
                                v47 = ui_LayoutAccessor_FindPane_alt1(
                                    v46, (__int64)"T_Cost");
                                if (v47 != 0) {
                                  v48 = __dynamic_cast(v47, GameData_212d670[0],
                                                       GameData_212d690, 0);
                                  if (v48 != 0) {
                                    GameRoutine_156c910_alt1(v48, "%d", 1, v35);
                                  }
                                }
                                v49 = a1[7];
                                if (v49 != 0) {
                                  v50 = std___1___shared_weak_count_lock_alt1(
                                      v49);
                                  if (v50 != 0) {
                                    v51 = (__int64*)a1[6];
                                    if (atomic_fetch_add(
                                            (atomic_ullong* volatile)(v50 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) != 0) {
                                      if (v51 != nullptr) {
                                        goto LABEL_71;
                                      }
                                    }
                                    else {
                                      v89 = v50;
                                      (*(void (**)(__int64))(*(_QWORD*)v50 +
                                                             16LL))(v50);
                                      std___1___shared_weak_count___release_weak_alt1(
                                          v89);
                                      if (v51 != nullptr) {
                                      LABEL_71:
                                        v52 = (*(__int64 (**)(_QWORD*))(
                                            *a1 + 464LL))(a1);
                                        if (*(_DWORD*)(v26 + 680) != 0 ||
                                            (*(_BYTE*)(*GameData_212dec0[0] +
                                                       12) &
                                             1) != 0) {
                                          v53 = 0;
                                        }
                                        else {
                                          v83 = v52;
                                          v94[1] =
                                              (unsigned __int64)&GameData_1af5ec9;
                                          v94[0] = game_HashString_alt1(
                                              (__int64)&GameData_1af5ec9);
                                          v53 = game_GameModeData_instance_;
                                          if (game_GameModeData_instance_ !=
                                              0) {
                                            v84 = game_GameVariableTable_Find_alt1(
                                                *(_QWORD**)(game_GameModeData_instance_ +
                                                            48),
                                                v94);
                                            if (v84 != 0) {
                                              v53 = *(_DWORD*)(v84 + 32);
                                            }
                                            else {
                                              v53 = 0;
                                            }
                                          }
                                          v52 = v83;
                                        }
                                        v54 = 64;
                                        if ((v52 & 1) != 0) {
                                          v54 = 60;
                                        }
                                        v55 = 72;
                                        if ((v52 & 1) != 0) {
                                          v55 = 36;
                                        }
                                        if ((int)v35 <= v53) {
                                          v56 = v55;
                                        }
                                        else {
                                          v56 = v54;
                                        }
                                        v57 =
                                            *(_DWORD*)((char*)GameData_212da30 +
                                                       v56);
                                        v58 =
                                            ui_LayoutAccessor_FindTextBox_alt1(
                                                v51, (__int64)"T_Cost");
                                        if (v58 != 0) {
                                          v59 = Pane_58f8a0_alt1(v58);
                                          if (v59 != 0) {
                                            *(_DWORD*)(v59 + 12) = v57;
                                          }
                                        }
                                        goto LABEL_84;
                                      }
                                    }
                                  }
                                }
                                v51 = ui_LayoutAccessor_empty__ptr[0];
                                goto LABEL_71;
                              }
                            }
                            else {
                              v88 = v46;
                              (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(
                                  v44);
                              std___1___shared_weak_count___release_weak_alt1(
                                  v44);
                              v46 = v88;
                              if (v88 != nullptr) {
                                goto LABEL_63;
                              }
                            }
                          }
                        }
                        v46 = ui_LayoutAccessor_empty__ptr[0];
                        goto LABEL_63;
                      }
                    }
                    else {
                      v87 = v41;
                      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                      std___1___shared_weak_count___release_weak_alt1(v39);
                      v41 = v87;
                      if (v87 != nullptr) {
                        goto LABEL_58;
                      }
                    }
                  }
                }
                v41 = ui_LayoutAccessor_empty__ptr[0];
                goto LABEL_58;
              }
            }
            else {
              v29 = GameData_1be9124[(unsigned __int8)(*(_BYTE*)(v27 + 8) - 7)];
              v30 = *(_QWORD*)(v26 + 760);
              if (v30 != 0) {
                goto LABEL_38;
              }
            }
            v92_.v92 = 0;
            v92_.v93 = 0;
            goto LABEL_42;
          }
        }
        else {
          v86 = v23;
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_alt1(v21);
          v23 = v86;
          if (v86 != nullptr) {
            goto LABEL_30;
          }
        }
      }
    }
    v23 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_30;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v13, (__int64)"IconType", 0);
  v14 = a1[7];
  if (v14 == 0) {
    goto LABEL_23;
  }
  v15 = std___1___shared_weak_count_lock_alt1(v14);
  if (v15 == 0) {
    goto LABEL_23;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = (__int64*)a1[6];
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v85 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
    v18 = v85;
    if (v85 != nullptr) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if (v18 == nullptr) {
  LABEL_23:
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_24:
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v18, (__int64)"T_Cost", 0);
LABEL_84:
  v60 = a1[7];
  if (v60 == 0) {
    goto LABEL_88;
  }
  v61 = std___1___shared_weak_count_lock_alt1(v60);
  if (v61 == 0) {
    goto LABEL_88;
  }
  v62 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v62 != nullptr) {
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  v80 = v61;
  (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
  std___1___shared_weak_count___release_weak_alt1(v80);
  if (v62 == nullptr) {
  LABEL_88:
    v62 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_89:
  v63 = std___1___shared_weak_count_lock_alt1(a1[12]);
  v64 = *(_QWORD*)(a1[11] + 16LL);
  if (*(_BYTE*)(v64 + 2136) != 0) {
    v65 = game_97b2f0(v64 + 2104);
    if (v65 == nullptr) {
      goto LABEL_95;
    }
  }
  else {
    v65 = GameHr_67ed20(*(_QWORD**)(v64 + 392));
    if (v65 == nullptr) {
      goto LABEL_95;
    }
  }
  v66 = ui_LayoutAccessor_FindTextBox_alt1(v62, (__int64)"T_Txt");
  if (v66 != 0) {
    GameRoutine_156c5d0_alt1(v66, (__int64)v65, 0);
  }
LABEL_95:
  if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    v67 = a1[7];
    if (v67 == 0) {
      goto LABEL_102;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
    std___1___shared_weak_count___release_weak_alt1(v63);
    v67 = a1[7];
    if (v67 == 0) {
      goto LABEL_102;
    }
  }
  v68 = std___1___shared_weak_count_lock_alt1(v67);
  if (v68 == 0) {
    goto LABEL_102;
  }
  v69 = v68;
  v70 = (atomic_ullong*)(v68 + 8);
  v71 = (__int64*)a1[6];
  if (atomic_fetch_add(v70, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v71 != nullptr) {
      goto LABEL_103;
    }
    goto LABEL_102;
  }
  v81 = v71;
  (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
  std___1___shared_weak_count___release_weak_alt1(v69);
  v71 = v81;
  if (v81 == nullptr) {
  LABEL_102:
    v71 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_103:
  v72 = ui_LayoutAccessor_FindPane_alt1(v71, (__int64)"Face");
  if (v72 != 0) {
    v73 = __dynamic_cast(v72, GameData_212d670[0], GameData_212d678[0], 0);
    v74 = a1[12];
    if (v74 == 0) {
      return GameHr_1840740(v73, 0, 0, 6u, 1);
    }
  }
  else {
    v73 = 0;
    v74 = a1[12];
    if (v74 == 0) {
      return GameHr_1840740(v73, 0, 0, 6u, 1);
    }
  }
  v75 = std___1___shared_weak_count_lock_alt1(v74);
  if (v75 == 0) {
    return GameHr_1840740(v73, 0, 0, 6u, 1);
  }
  v76 = v75;
  result = GameHr_1840740(v73, 0, *(_QWORD*)(a1[11] + 16LL), 6u, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
    return std___1___shared_weak_count___release_weak_alt1(v76);
  }
  return result;
}

#pragma GCC visibility pop
