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
__int64 LinkUnitMenuItem_Unknown55(_QWORD* a1);

__int64 LinkUnitMenuItem_Unknown55(_QWORD* a1)
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
  int v33;
  __int64 v34;
  int v35;
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
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  atomic_ullong* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 result;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  char v84;
  __int64 v85;
  __int64* v86;
  __int64* v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _QWORD v95[2];

  game_menu_GameMenuItem_DrawText();
  v2 = GameData_212ea58;
  v3 = *GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 640);
  v5 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    if (v4 != 0) {
      goto LABEL_4;
    }
  }
  else if (v4 != 0) {
    goto LABEL_4;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v79 = *(_QWORD*)(v3 + 664);
  if (v79 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v79 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
      std___1___shared_weak_count___release_weak(v79);
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
  v10 = std___1___shared_weak_count_lock(v9);
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
  v80 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  v13 = v80;
  if (v80 == nullptr) {
  LABEL_17:
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_18:
  if ((v7 & 1) == 0) {
    ui_LayoutAccessor_SetPaneVisible(v13, "IconType", 1);
    v19 = a1[7];
    if (v19 != 0) {
      v20 = std___1___shared_weak_count_lock(v19);
      if (v20 != 0) {
        v21 = v20;
        v22 = (atomic_ullong*)(v20 + 8);
        v23 = (__int64*)a1[6];
        if (atomic_fetch_add(v22, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v23 != nullptr) {
          LABEL_30:
            v24 = ui_LayoutAccessor_FindPane(v23, "IconType");
            if (v24 != 0) {
              v25 = __dynamic_cast(v24, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v25 != 0) {
                GameRoutine_136a920(ui_Manager_instance_ + 1264, v25, 0, 7,
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
              std___1___shared_weak_count___release_weak(v28);
              if (v27 != 0) {
                goto LABEL_36;
              }
            }
            else if (v27 != 0) {
              goto LABEL_36;
            }
            v27 = *(_QWORD*)(v26 + 656);
            v83 = *(_QWORD*)(v26 + 664);
            if (v83 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v83 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
                std___1___shared_weak_count___release_weak(v83);
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
                v93 = 0;
                v94 = std___1___shared_weak_count_lock(v30);
                if (v94 != 0) {
                  v93 = v31;
                }
              LABEL_42:
                v32 = a1[12];
                v91 = 0;
                v92 = 0;
                if (v32 != 0) {
                  v92 = std___1___shared_weak_count_lock(v32);
                  if (v92 != 0) {
                    v91 = a1[11];
                  }
                }
                v33 = GameRoutine_e77060(v29, &v93, &v91);
                v34 = v92;
                v35 = v33;
                if (v92 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
                  std___1___shared_weak_count___release_weak(v34);
                }
                v36 = v94;
                if (v94 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
                  std___1___shared_weak_count___release_weak(v36);
                }
                if (v30 != 0) {
                  std___1___shared_weak_count___release_weak(v30);
                }
                v37 = a1[7];
                if (v37 != 0) {
                  v38 = std___1___shared_weak_count_lock(v37);
                  if (v38 != 0) {
                    v39 = v38;
                    v40 = (atomic_ullong*)(v38 + 8);
                    v41 = (__int64*)a1[6];
                    if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                      if (v41 != nullptr) {
                      LABEL_58:
                        ui_LayoutAccessor_SetPaneVisible(v41, "T_Cost", 1);
                        v42 = a1[7];
                        if (v42 != 0) {
                          v43 = std___1___shared_weak_count_lock(v42);
                          if (v43 != 0) {
                            v44 = v43;
                            v45 = (atomic_ullong*)(v43 + 8);
                            v46 = (__int64*)a1[6];
                            if (atomic_fetch_add(v45, 0xFFFFFFFFFFFFFFFFLL) !=
                                0) {
                              if (v46 != nullptr) {
                              LABEL_63:
                                v47 = ui_LayoutAccessor_FindPane(v46, "T_Cost");
                                if (v47 != 0) {
                                  v48 = __dynamic_cast(v47, GameData_212d670[0],
                                                       GameData_212d690, 0);
                                  if (v48 != 0) {
                                    GameRoutine_156c910(v48, "%d", 1);
                                  }
                                }
                                v49 = a1[7];
                                if (v49 != 0) {
                                  v50 = std___1___shared_weak_count_lock(v49);
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
                                      v90 = v50;
                                      (*(void (**)(__int64))(*(_QWORD*)v50 +
                                                             16LL))(v50);
                                      std___1___shared_weak_count___release_weak(
                                          v90);
                                      if (v51 != nullptr) {
                                      LABEL_71:
                                        v52 = (*(__int64 (**)(_QWORD*))(
                                            *a1 + 464LL))(a1);
                                        if (*(_DWORD*)(v26 + 680) != 0 ||
                                            (*(_BYTE*)(*GameData_212dec0[0] +
                                                       12) &
                                             1) != 0) {
                                          v54 = 0;
                                        }
                                        else {
                                          v84 = v52;
                                          v95[1] = &GameData_1af5ec9;
                                          v95[0] = game_HashString(
                                              &GameData_1af5ec9, v53);
                                          v54 = game_GameModeData_instance_;
                                          if (game_GameModeData_instance_ !=
                                              0) {
                                            v85 = game_GameVariableTable_Find(
                                                *(_QWORD*)(game_GameModeData_instance_ +
                                                           48),
                                                v95);
                                            if (v85 != 0) {
                                              v54 = *(_DWORD*)(v85 + 32);
                                            }
                                            else {
                                              v54 = 0;
                                            }
                                          }
                                          v52 = v84;
                                        }
                                        v55 = 64;
                                        if ((v52 & 1) != 0) {
                                          v55 = 60;
                                        }
                                        v56 = 72;
                                        if ((v52 & 1) != 0) {
                                          v56 = 36;
                                        }
                                        if (v35 <= v54) {
                                          v57 = v56;
                                        }
                                        else {
                                          v57 = v55;
                                        }
                                        v58 =
                                            *(_DWORD*)((char*)GameData_212da30 +
                                                       v57);
                                        v59 = ui_LayoutAccessor_FindTextBox(
                                            v51, "T_Cost");
                                        if (v59 != 0) {
                                          v60 = Pane_58f8a0(v59);
                                          if (v60 != 0) {
                                            *(_DWORD*)(v60 + 12) = v58;
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
                              v89 = v46;
                              (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(
                                  v44);
                              std___1___shared_weak_count___release_weak(v44);
                              v46 = v89;
                              if (v89 != nullptr) {
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
                      v88 = v41;
                      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
                      std___1___shared_weak_count___release_weak(v39);
                      v41 = v88;
                      if (v88 != nullptr) {
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
            v93 = 0;
            v94 = 0;
            goto LABEL_42;
          }
        }
        else {
          v87 = v23;
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v21);
          v23 = v87;
          if (v87 != nullptr) {
            goto LABEL_30;
          }
        }
      }
    }
    v23 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_30;
  }
  ui_LayoutAccessor_SetPaneVisible(v13, "IconType", 0);
  v14 = a1[7];
  if (v14 == 0) {
    goto LABEL_23;
  }
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 == 0) {
    goto LABEL_23;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = (__int64*)a1[6];
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v86 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
    v18 = v86;
    if (v86 != nullptr) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if (v18 == nullptr) {
  LABEL_23:
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_24:
  ui_LayoutAccessor_SetPaneVisible(v18, "T_Cost", 0);

LABEL_84:
  v61 = a1[7];
  if (v61 == 0) {
    goto LABEL_88;
  }
  v62 = std___1___shared_weak_count_lock(v61);
  if (v62 == 0) {
    goto LABEL_88;
  }
  v63 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v63 != nullptr) {
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  v81 = v62;
  (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
  std___1___shared_weak_count___release_weak(v81);
  if (v63 == nullptr) {
  LABEL_88:
    v63 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_89:
  v64 = std___1___shared_weak_count_lock(a1[12]);
  v65 = *(_QWORD*)(a1[11] + 16LL);
  if (*(_BYTE*)(v65 + 2136) != 0) {
    v66 = GameRoutine_97b2f0(v65 + 2104);
    if (v66 == 0) {
      goto LABEL_95;
    }
  }
  else {
    v66 = GameRoutine_67ed20(*(_QWORD*)(v65 + 392));
    if (v66 == 0) {
      goto LABEL_95;
    }
  }
  v67 = ui_LayoutAccessor_FindTextBox(v63, "T_Txt");
  if (v67 != 0) {
    GameRoutine_156c5d0(v67, v66, 0);
  }

LABEL_95:
  if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    v68 = a1[7];
    if (v68 == 0) {
      goto LABEL_102;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
    std___1___shared_weak_count___release_weak(v64);
    v68 = a1[7];
    if (v68 == 0) {
      goto LABEL_102;
    }
  }
  v69 = std___1___shared_weak_count_lock(v68);
  if (v69 == 0) {
    goto LABEL_102;
  }
  v70 = v69;
  v71 = (atomic_ullong*)(v69 + 8);
  v72 = (__int64*)a1[6];
  if (atomic_fetch_add(v71, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v72 != nullptr) {
      goto LABEL_103;
    }
    goto LABEL_102;
  }
  v82 = v72;
  (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
  std___1___shared_weak_count___release_weak(v70);
  v72 = v82;
  if (v82 == nullptr) {
  LABEL_102:
    v72 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_103:
  v73 = ui_LayoutAccessor_FindPane(v72, "Face");
  if (v73 != 0) {
    v74 = __dynamic_cast(v73, GameData_212d670[0], GameData_212d678[0], 0);
    v75 = a1[12];
    if (v75 == 0) {
      return GameRoutine_1840740(v74, 0, 0, 6, 1);
    }
  }
  else {
    v74 = 0;
    v75 = a1[12];
    if (v75 == 0) {
      return GameRoutine_1840740(v74, 0, 0, 6, 1);
    }
  }
  v76 = std___1___shared_weak_count_lock(v75);
  if (v76 == 0) {
    return GameRoutine_1840740(v74, 0, 0, 6, 1);
  }
  v77 = v76;
  result = GameRoutine_1840740(v74, 0, *(_QWORD*)(a1[11] + 16LL), 6, 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
    return std___1___shared_weak_count___release_weak(v77);
  }
  return result;
}

#pragma GCC visibility pop
