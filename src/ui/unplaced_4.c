#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void GameRoutine_159e180(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1561f50(__int64*, const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Pane_58f8a0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_1651fc0(__int64);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_1bee1cc[80];
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212c790;
extern __int64 GameData_225e7a0;
extern char GameData_1a9f09e;
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
__int64 ui_1572370(__int64* a1, char a2);
__int64 ui_1685800(__int64* a1, unsigned __int8 a2);
__int64 ui_1839560(__int64 a1, char a2, unsigned int a3);
__int64* game_820d50(int);
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_1566d90(__int64, char);
__int64 Util_157c0a0(__int64*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21ca000;
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_2258870;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_gameui_Header_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_21f8110;
extern int GameData_21f8130;
float LayoutAccessor_155d940(__int64*);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a310();
void game_gameui_157cb40(__int64*, int, __int64, __int64, unsigned int, char);
void ui_1565800(char* a1, __int64 a2, char a3, int a4, int a5);

void ui_1565800(char* a1, __int64 a2, char a3, int a4, int a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  bool v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64* v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  signed int v48;
  __int64 v49;
  __int64* v50;
  __int64 (***v51)();
  __int64 (***v52)();
  __int64 (***v53)();
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  const char* v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  int v68;
  int* v69;
  int v70;
  bool v71;
  unsigned __int64 v72;
  __int64 v73;
  int* v74;
  unsigned __int64 v75;
  int v76;
  int v77;
  int v78;
  int* v79;
  __int64 v80;
  int* v81;
  int v82;
  unsigned __int64 v83;
  int v84;
  __int64 v85;
  __int128 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _BOOL4 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int16* v97;
  int v98;
  int v99;
  __int64 v101;
  _WORD* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  struct {
    __int64 v106;
    __int64 v107;
  } v106_;
  _QWORD v108[4];
  struct {
    __int64 (**v109)();
    __int64 v110;
    unsigned __int64 v111;
    unsigned __int64 v112;
    __int64 (***v113)();
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    char gap224_[24];
    int v127;
    int v128;
  } v109_;

  v5 = game_gameui_Header_instance_;
  if (game_gameui_Header_instance_ == 0) {
    return;
  }
  v109_.v128 = a5;
  v10 = game_820d50(5);
  v11 = &GameData_21ca000;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v10);
    if (v12 != 0 && *(_DWORD*)(v12 + 32) != 0) {
      a4 &= ~1u;
    }
  }
  v13 = game_820d50(1);
  if (game_GameModeData_instance_ != 0) {
    v14 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v13);
    if (v14 != 0 && *(_DWORD*)(v14 + 32) != 0) {
      a4 &= ~4u;
    }
  }
  if (a1 == nullptr) {
    if (a2 != 0 || a4 != 0) {
      if (a2 == 0) {
        goto LABEL_20;
      }
    LABEL_25:
      v17 = "TitleOn";
      goto LABEL_26;
    }
  LABEL_23:
    LayoutAccessor_1566d90(v5, 1);
    return;
  }
  v16 = a2 == 0 && a1 == *msg_MessageManager_empty_text__ptr;
  if (a4 == 0 && v16) {
    goto LABEL_23;
  }
  if (!v16) {
    goto LABEL_25;
  }
LABEL_20:
  v17 = "TitleOff";
LABEL_26:
  LayoutAccessor_1562cf0(v5 + 168, v17);
  if (*(_QWORD*)(v5 + 184) == 0) {
    return;
  }
  v18 = *(_QWORD*)(v5 + 176);
  if (v18 == 0) {
    return;
  }
  v19 = std___1___shared_weak_count_lock(v18);
  if (v19 == 0) {
    goto LABEL_37;
  }
  v20 = *(_QWORD*)(v5 + 168);
  if (v20 != 0) {
    LODWORD(v11) = *(unsigned __int8*)(v20 + 24);
    v21 = v20 + 152;
    if ((_DWORD)v11 == 0) {
      v21 = 0;
    }
    v22 = v21 != *(_QWORD*)(v5 + 184);
  }
  else {
    v22 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v23 = a2;
    v24 = v19;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    v25 = v24;
    a2 = v23;
    std___1___shared_weak_count___release_weak(v25);
  }
  if (!v22) {
    if (((unsigned __int8)v11 & 1) == 0) {
      return;
    }
  }
  else {
  LABEL_37:
    v26 = *(_QWORD*)(v5 + 176);
    if (v26 == 0 || *(_QWORD*)(v26 + 8) == -1) {
      return;
    }
  }
  v104 = a2;
  if (a3 == 1) {
    v27 = "Obelisk";
  }
  else {
    v27 = "Default";
  }
  LayoutAccessor_1562cf0(v5 + 168, v27);
  ui_LayoutAccessor_SetPaneVisible(v5 + 168, (__int64)"L_Honor", 0);
  ui_LayoutAccessor_SetPaneVisible(v5 + 168, (__int64)"L_Reinforce", 0);
  v28 = game_util_Format("L_Stock%02d", 0);
  LayoutAccessor_1560070((void*)(&v109_.v109), (__int64*)(v5 + 168), v28);
  if (v109_.v110 != 0) {
    v29 = std___1___shared_weak_count_lock(v109_.v110);
    v30 = (__int64)v109_.v109;
    if (v109_.v110 != 0) {
      std___1___shared_weak_count___release_weak(v109_.v110);
    }
    if (v29 != 0 && v30 != 0) {
      LayoutAccessor_155e830(v30, 0);
    }
    else if (v29 == 0) {
      goto LABEL_53;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
  }
LABEL_53:
  v31 = game_util_Format("L_Stock%02d", 1);
  LayoutAccessor_1560070((void*)(&v109_.v109), (__int64*)(v5 + 168), v31);
  if (v109_.v110 != 0) {
    v32 = std___1___shared_weak_count_lock(v109_.v110);
    v33 = (__int64)v109_.v109;
    if (v109_.v110 != 0) {
      std___1___shared_weak_count___release_weak(v109_.v110);
    }
    if (v32 != 0 && v33 != 0) {
      LayoutAccessor_155e830(v33, 0);
    }
    else if (v32 == 0) {
      goto LABEL_62;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak(v32);
    }
  }
LABEL_62:
  v34 = game_util_Format("L_Stock%02d", 2);
  LayoutAccessor_1560070((void*)(&v109_.v109), (__int64*)(v5 + 168), v34);
  v103 = (__int64)a1;
  if (v109_.v110 != 0) {
    v35 = std___1___shared_weak_count_lock(v109_.v110);
    v36 = (__int64)v109_.v109;
    if (v109_.v110 != 0) {
      std___1___shared_weak_count___release_weak(v109_.v110);
    }
    if (v35 != 0 && v36 != 0) {
      LayoutAccessor_155e830(v36, 0);
      goto LABEL_69;
    }
    if (v35 != 0) {
    LABEL_69:
      if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
        std___1___shared_weak_count___release_weak(v35);
      }
    }
  }
  v37 = &GameData_2258870;
  v38 = 0;
  v39 = 0;
  v109_.v127 = a4;
  do {
    v40 = v5 + v38;
    *(_DWORD*)(v5 + v38 + 560) = 8;
    if ((a4 & *(char*)(v37 - 6)) != 0) {
      v41 = *((_DWORD*)v37 - 11);
      if (v41 == 7) {
        LayoutAccessor_1560070((void*)(&v109_.v109), (__int64*)(v5 + 168),
                               "L_Reinforce");
        v42 = (__int64*)v109_.v109;
        v43 = v109_.v110;
        if (v109_.v110 != 0) {
          goto LABEL_84;
        }
      }
      else if (v41 == 1) {
        ui_LayoutAccessor_SetPaneVisible(v5 + 168, (__int64)"L_Honor", 1);
        LayoutAccessor_1560070((void*)(&v106_.v106), (__int64*)(v5 + 168),
                               "L_Honor");
        Util_157c0a0(&v106_.v106);
        if (v106_.v107 != 0) {
          std___1___shared_weak_count___release_weak(v106_.v107);
        }
        *(_DWORD*)(v40 + 560) = 1;
      }
      else if (v39 <= 2) {
        v44 = game_util_Format("L_Stock%02d", v39);
        LayoutAccessor_1560070((void*)(&v109_.v109), (__int64*)(v5 + 168), v44);
        v42 = (__int64*)v109_.v109;
        v43 = v109_.v110;
        ++v39;
        if (v109_.v110 != 0) {
        LABEL_84:
          v45 = std___1___shared_weak_count_lock(v43);
          if (v45 != 0) {
            if (v42 != nullptr) {
              v105 = v45;
              if (*v37 == 0) {
                GameRoutine_60a310();
              }
              v46 = v5;
              v47 = v39;
              v48 = (*(__int64 (**)(__int64))(*(_QWORD*)*v37 + 48LL))(*v37);
              game_gameui_157cb40(v42, v41, (__int64)"Icon", (__int64)"T_Num",
                                  v48, 1);
              LayoutAccessor_155e830((__int64)v42, 1);
              *(_DWORD*)(v40 + 560) = v41;
              v40 = v46 + v38;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                                        memory_order_relaxed);
              *(_QWORD*)(v40 + 568) = v42;
              v49 = *(_QWORD*)(v46 + v38 + 576);
              *(_QWORD*)(v40 + 576) = v43;
              if (v49 != 0) {
                std___1___shared_weak_count___release_weak(v49);
              }
              *(_DWORD*)(v40 + 640) = v48;
              *(float*)(v40 + 644) = (float)v48;
              v50 = (__int64*)*v37;
              if (*v37 != 0) {
                v39 = v47;
                if (v37 - 4 == v50) {
                  v109_.v113 = &v109_.v109;
                  (*(void (**)(__int64*, __int64 (***)(void)))(*v50 + 24))(
                      v50, &v109_.v109);
                  v51 = v109_.v113;
                }
                else {
                  v51 = (__int64 (***)(void))(
                      *(__int64 (**)(__int64*))(*v50 + 16))(v50);
                  v109_.v113 = v51;
                }
              }
              else {
                v51 = nullptr;
                v109_.v113 = nullptr;
                v39 = v47;
              }
              a4 = v109_.v127;
              v5 = v46;
              v52 = (__int64 (***)(void))(v40 + 592);
              if ((__int64 (***)(void))(v40 + 592) == &v109_.v109) {
                v53 = v51;
              }
              else {
                v40 = v46 + v38;
                v53 = *(__int64 (****)())(v46 + v38 + 624);
                if (v51 != &v109_.v109) {
                  if (v52 != v53) {
                    v109_.v113 = *(__int64 (****)())(v46 + v38 + 624);
                    *(_QWORD*)(v40 + 624) = v51;
                    goto LABEL_103;
                  }
                  ((void (*)(__int64 (***)(void), __int64 (***)(void)))(
                      *v53)[3])(v53, &v109_.v109);
                  (*(void (**)(_QWORD))(**(_QWORD**)(v40 + 624) + 32LL))(
                      *(_QWORD*)(v40 + 624));
                  v53 = &v109_.v109;
                  *(_QWORD*)(v40 + 624) = v109_.v113;
                  v109_.v113 = &v109_.v109;
                LABEL_106:
                  v54 = 4;
                LABEL_107:
                  ((__int64 (*)(__int64))(*v53)[v54])((__int64)v53);
                  goto LABEL_108;
                }
                if (v52 == v53) {
                  ((__attribute__((swiftcall)) void (*)(
                      PSEUDO_X8, __int64 (***)(void), _QWORD*))(*v51)[3])(
                      (void*)v51, v51, v108);
                  ((void (*)(__int64 (***)(void)))(*v109_.v113)[4])(v109_.v113);
                  v109_.v113 = nullptr;
                  (*(void (**)(_QWORD, __int64 (***)(void)))(
                      **(_QWORD**)(v40 + 624) + 24LL))(*(_QWORD*)(v40 + 624),
                                                       &v109_.v109);
                  (*(void (**)(_QWORD))(**(_QWORD**)(v40 + 624) + 32LL))(
                      *(_QWORD*)(v40 + 624));
                  *(_QWORD*)(v40 + 624) = 0;
                  v109_.v113 = &v109_.v109;
                  (*(void (**)(_QWORD*, __int64 (***)(void)))(v108[0] + 24LL))(
                      v108, v52);
                  (*(void (**)(_QWORD*))(v108[0] + 32LL))(v108);
                  *(_QWORD*)(v40 + 624) = v52;
                  v53 = v109_.v113;
                }
                else {
                  ((__attribute__((swiftcall)) void (*)(
                      PSEUDO_X8, __int64 (***)(void), __int64 (***)(void)))(
                      *v51)[3])((void*)v51, v51, v52);
                  ((void (*)(__int64 (***)(void)))(*v109_.v113)[4])(v109_.v113);
                  v53 = *(__int64 (****)())(v40 + 624);
                  v109_.v113 = v53;
                  *(_QWORD*)(v40 + 624) = v52;
                }
              }
            LABEL_103:
              if (v53 == &v109_.v109) {
                goto LABEL_106;
              }
              if (v53 != nullptr) {
                v54 = 5;
                goto LABEL_107;
              }
            LABEL_108:
              v45 = v105;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v40 = v45;
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
              std___1___shared_weak_count___release_weak(v40);
            }
          }
          std___1___shared_weak_count___release_weak(v43);
        }
      }
    }
    v38 += 96;
    v37 += 8;
  } while (v38 != 768);
  v55 = ui_LayoutAccessor_FindTextBox((__int64*)(v5 + 168), (__int64)"T_Title");
  if (v55 != 0) {
    GameRoutine_156c5d0(v55, (__int64)" ", 0);
  }
  v56 = ui_LayoutAccessor_FindTextBox((__int64*)(v5 + 168), (__int64)"T_Help");
  if (v56 != 0) {
    GameRoutine_156c5d0(v56, (__int64)" ", 0);
  }
  if (v103 == 0) {
    if (v104 == 0) {
      ui_LayoutAccessor_SetPaneVisible(v5 + 168, (__int64)"N_Bg", 0);
      goto LABEL_126;
    }
  LABEL_121:
    v58 =
        ui_LayoutAccessor_FindTextBox((__int64*)(v5 + 168), (__int64)"T_Help");
    if (v58 != 0) {
      GameRoutine_156c5d0(v58, v104, 0);
    }
    goto LABEL_123;
  }
  v57 = ui_LayoutAccessor_FindTextBox((__int64*)(v5 + 168), (__int64)"T_Title");
  if (v57 != 0) {
    GameRoutine_156c5d0(v57, v103, 0);
  }
  if (v104 != 0) {
    goto LABEL_121;
  }
LABEL_123:
  ui_LayoutAccessor_SetPaneVisible(v5 + 168, (__int64)"N_Bg", 1);
  v59 = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(v5 + 168),
                                             (__int64)"A_Title");
  if (v59 != 0) {
    Alignment_56b600(v59);
  }
LABEL_126:
  LayoutAccessor_1560070((void*)(&v109_.v109), (__int64*)(v5 + 168), "L_Honor");
  if (v109_.v110 != 0) {
    v60 = std___1___shared_weak_count_lock(v109_.v110);
    v40 = (__int64)v109_.v109;
    if (v109_.v110 != 0) {
      std___1___shared_weak_count___release_weak(v109_.v110);
    }
    if (v60 != 0 && v40 != 0) {
      v61 = "MID_Sys_HonorLv";
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v61 = "MID_Sys_HonorLV_Part3";
      }
      v109_.v114 = -1;
      v109_.v115 = -1;
      v109_.v116 = -1;
      v109_.v117 = -1;
      v62 = *msg_MessageManager_instance__ptr[0];
      v109_.v118 = -1;
      v109_.v119 = -1;
      v109_.v120 = -1;
      v109_.v121 = -1;
      v109_.v122 = -1;
      v109_.v123 = -1;
      v109_.v124 = -1;
      v109_.v125 = -1;
      v109_.v109 = msg_TagSelector_vtable;
      v109_.v110 = 0xFFFF0001FFFF0000LL;
      v109_.v111 = 0xFFFF0004FFFF0002LL;
      v109_.v112 = 0xFFFF0006FFFF0005LL;
      v109_.v126 = 8;
      v109_.v113 = (__int64 (***)(void))0xFFFF0008FFFF0007LL;
      v63 = GameRoutine_a4dbe0(v62, v61, 0);
      if (v63 != nullptr) {
        v64 = (__int64)v63;
        v65 = ui_LayoutAccessor_FindTextBox((__int64*)v40, (__int64)"T_Title");
        if (v65 != 0) {
          GameRoutine_156c5d0(v65, v64, 0);
        }
      }
      v66 = ui_LayoutAccessor_FindAlignment_alt1((__int64*)v40,
                                                 (__int64)"A_Title");
      if (v66 != 0) {
        Alignment_56b600(v66);
      }
      v67 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v68 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        v69 = &GameData_21f8110;
        if (v68 == 2) {
          v72 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        else if (v68 == 3) {
          v70 = *(_DWORD*)(game_GameModeData_instance_ + 64);
          v71 = v70 <= 1;
          if (v70 <= 1) {
            LODWORD(v72) = 1;
          }
          else {
            LODWORD(v72) =
                (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
          }
          if (!v71) {
            v69 = &GameData_21f8130;
          }
        }
        else {
          LODWORD(v72) = 1;
        }
        v74 = v69 + 2;
        v73 = *((_QWORD*)v69 + 1);
        v75 = (unsigned __int64)(*((_QWORD*)v74 + 1) - v73) >> 2;
        if ((int)v72 < (int)v75) {
          LODWORD(v75) = v72;
        }
        v76 = v75 - 1;
        if ((int)v72 <= 0) {
          v77 = 0;
        }
        else {
          v77 = v76;
        }
        v78 = *(_DWORD*)(v73 + 4LL * v77);
        v79 = &GameData_21f8110;
        if (v68 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
          v79 = &GameData_21f8130;
        }
        v81 = v79 + 2;
        v80 = *((_QWORD*)v79 + 1);
        v82 = *(_DWORD*)(game_GameModeData_instance_ + 76);
        v83 = (unsigned __int64)(*((_QWORD*)v81 + 1) - v80) >> 2;
        if ((int)v83 <= 1) {
          LODWORD(v83) = 1;
        }
        v84 = *(_DWORD*)(v80 + 4LL * (unsigned int)v83 - 4);
        if (v84 >= v82) {
          v84 = *(_DWORD*)(game_GameModeData_instance_ + 76);
        }
        if (v82 >= v78) {
          v67 = v84;
        }
        else {
          v67 = v78;
        }
      }
      *(_DWORD*)(v5 + 544) = v67;
    LABEL_168:
      if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
        std___1___shared_weak_count___release_weak(v60);
      }
    }
    else if (v60 != 0) {
      goto LABEL_168;
    }
  }
  v85 = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(v5 + 168),
                                             (__int64)"A_Stock");
  if (v85 != 0) {
    Alignment_56b600(v85);
  }
  if (game_ProcFadeView_instance_ != 0) {
    v40 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v40 + 172) == *(float*)(v40 + 168)) {
      (*(void (**)(__int64))(*(_QWORD*)(v40 + 160) + 16LL))(v40 + 160);
    }
    else {
      v86 = *(_OWORD*)(v40 + 208);
    }
    v87 = 30;
    if (*((float*)&v86 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(__int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v40 + 160) + 16LL))(
                          v40 + 160, *((float*)&v86 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v87 = 1040;
      }
      else {
        v87 = 30;
      }
    }
  }
  else {
    v87 = 30;
  }
  ui_LayoutAccessor_SetPriority(v5 + 168, v87);
  if (*(_QWORD*)(v5 + 288) != 0) {
    v88 = *(_QWORD*)(v5 + 280);
    if (v88 != 0) {
      v89 = std___1___shared_weak_count_lock(v88);
      if (v89 == 0) {
        goto LABEL_192;
      }
      v90 = *(_QWORD*)(v5 + 272);
      if (v90 != 0) {
        LODWORD(v40) = *(unsigned __int8*)(v90 + 24);
        v91 = v90 + 152;
        if ((_DWORD)v40 == 0) {
          v91 = 0;
        }
        v92 = v91 != *(_QWORD*)(v5 + 288);
      }
      else {
        v92 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v93 = v89;
        (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
        std___1___shared_weak_count___release_weak(v93);
      }
      if (!v92) {
        if ((v40 & 1) == 0) {
          goto LABEL_208;
        }
      }
      else {
      LABEL_192:
        v94 = *(_QWORD*)(v5 + 280);
        if (v94 == 0 || *(_QWORD*)(v94 + 8) == -1) {
          goto LABEL_208;
        }
      }
      v95 = *(_QWORD*)(v5 + 376);
      if (v95 != 0 && *(float*)(v95 + 60) != 0x0.0p+0f) {
        v96 = *(_QWORD*)(v5 + 400);
        if ((*(_BYTE*)(v5 + 392) & 1) == 0) {
          v96 = *(_BYTE*)(v5 + 392) >> 1;
        }
        if (v96 == 3) {
          v97 = (*(_BYTE*)(v5 + 392) & 1) != 0 ? *(unsigned __int16**)(v5 + 408)
                                               : (unsigned __int16*)(v5 + 393);
          v98 = *v97;
          v99 = *((unsigned __int8*)v97 + 2);
          if (v98 == 30031 && v99 == 116) {
            LayoutAccessor_155cda0(v5 + 272, "In", nullptr);
            goto LABEL_216;
          }
        }
      }
    }
  }
LABEL_208:
  v101 = *(_QWORD*)(v5 + 400);
  if ((*(_BYTE*)(v5 + 392) & 1) == 0) {
    v101 = *(_BYTE*)(v5 + 392) >> 1;
  }
  if (v101 != 2 ||
      ((*(_BYTE*)(v5 + 392) & 1) != 0 ? (v102 = *(_WORD**)(v5 + 408))
                                      : (v102 = (_WORD*)(v5 + 393)),
       *v102 != 28233)) {
    LayoutAccessor_155e830(v5 + 168, 1);
    LayoutAccessor_155cda0(v5 + 272, "In", nullptr);
    if ((v109_.v128 & 1) != 0) {
    LABEL_216:
      LayoutAccessor_155d940((__int64*)(v5 + 272));
    }
  }
}

__int64 ui_1572370(__int64* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v10[0] = "L_ArrowL";
  v10[1] = 8;
  GameRoutine_159e180((void*)(&v11_.v11), a1, v10);
  if (v11_.v12 != 0) {
    v4 = std___1___shared_weak_count_lock(v11_.v12);
    v5 = v11_.v11;
    if (v11_.v12 != 0) {
      std___1___shared_weak_count___release_weak(v11_.v12);
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        goto LABEL_12;
      }
    }
    else {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 40LL))(v5, a2 & 1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_12:
  v10[0] = "L_ArrowR";
  v10[1] = 8;
  GameRoutine_159e180((void*)(&v11_.v11), a1, v10);
  result = v11_.v12;
  if (v11_.v12 == 0) {
    return result;
  }
  v8 = std___1___shared_weak_count_lock(v11_.v12);
  v9 = v11_.v11;
  result = v11_.v12;
  if (v11_.v12 != 0) {
    result = std___1___shared_weak_count___release_weak(v11_.v12);
  }
  if (v8 != 0 && v9 != 0) {
    result =
        (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v9 + 40LL))(v9, a2 & 1);
  }
  else if (v8 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 ui_1685800(__int64* a1, unsigned __int8 a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  _BOOL4 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  char* v23;
  __int64 v24;
  __int64* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  struct {
    __int64* v45;
    __int64 v46;
  } v45_;

  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = (__int64*)a1[3];
      v6 = result;
      if (v5 == nullptr) {
        goto LABEL_70;
      }
      v7 = (a2 & 1) == 0 && *(_DWORD*)(GameData_225e7a0 + 300) == 1;
      v8 = v7 | a2 & (*((_DWORD*)a1 + 23) != 2);
      if (GameData_1bee1cc[8 * *(int*)(GameData_225e7a0 + 184) + 1] != 1) {
        goto LABEL_22;
      }
      v9 = *a1;
      v10 = *(_QWORD*)(*GameData_212c790 + 8);
      v11 = *(_DWORD*)(v10 + 56);
      v12 = *(__int64**)(v10 + 8);
      v13 = *(__int64**)(v10 + 16);
      if (v11 < 0) {
        if (v12 == v13) {
          goto LABEL_22;
        }
        while (1) {
          v14 = *v12;
          if (*(_QWORD*)(*v12 + 96) == 0 && *(_QWORD*)(v14 + 552) == 0) {
            break;
          }
          if (++v12 == v13) {
            goto LABEL_22;
          }
        }
      }
      else {
        if (v12 == v13) {
          goto LABEL_22;
        }
        while (1) {
          v15 = *v12++;
          v14 = v15;
          if (*(_DWORD*)(v15 + 84) == v11) {
            break;
          }
          if (v12 == v13) {
            goto LABEL_22;
          }
        }
      }
      v16 = *(_DWORD*)(v14 + 540);
      v17 = __OFSUB__(v16, 1);
      v18 = (unsigned int)(v16 - 1);
      if (((v18 & 0x80000000) != 0LL) == v17) {
        v19 = *(_QWORD*)(v14 + 24);
        v20 = *(_QWORD*)(v14 + 32) - v19;
        v21 = v19 + 8LL * (unsigned int)v18;
        if (v18 < v20 >> 3) {
          v14 = v21;
        }
      }
      if (*(_QWORD*)v14 == v9 && *(_QWORD*)(GameData_225e7a0 + 352) != v9) {
        v22 = *(_DWORD*)(GameData_225e7a0 + 300) == 0;
      LABEL_23:
        *((_BYTE*)a1 + 97) = v22;
        if ((v8 | v22) == 0) {
          result = LayoutAccessor_155e830((__int64)v5, 0);
          goto LABEL_70;
        }
        if ((LayoutAccessor_155ea30(v5) & 1) == 0) {
          *((_BYTE*)a1 + 88) = 1;
        }
        LayoutAccessor_155e830((__int64)v5, 1);
        v23 = game_util_Format("L_Unit%02d", *((_DWORD*)a1 + 21));
        LayoutAccessor_1560070((void*)(&v45_.v45), v5, v23);
        result = v45_.v46;
        if (v45_.v46 == 0) {
          goto LABEL_70;
        }
        v24 = std___1___shared_weak_count_lock(v45_.v46);
        v25 = v45_.v45;
        result = v45_.v46;
        if (v45_.v46 != 0) {
          result = std___1___shared_weak_count___release_weak(v45_.v46);
        }
        if (v24 != 0 && v25 != nullptr) {
          v26 = *((_DWORD*)a1 + 23);
          switch (v26) {
          case 2:
            v38 = "TypeEnemy";
            break;
          case 1:
            v38 = "TypeAlly";
            break;
          case 0:
            if ((*((_BYTE*)a1 + 97) & 1) != 0) {
              v27 = a1[7];
              v28 = a1[8];
              if (v28 != v27) {
                v29 = (v28 - v27) >> 4;
                v30 = 0;
                v31 = *GameData_212c790;
                do {
                  v32 = *(_QWORD*)(v31 + 8);
                  v33 = *(_DWORD*)(v32 + 56);
                  v34 = *(__int64**)(v32 + 8);
                  v35 = *(__int64**)(v32 + 16);
                  if (v33 < 0) {
                    for (; v34 != v35; ++v34) {
                      v36 = *v34;
                      if (*(_QWORD*)(*v34 + 96) == 0 &&
                          *(_QWORD*)(v36 + 552) == 0) {
                        goto LABEL_45;
                      }
                    }
                  }
                  else {
                    while (v34 != v35) {
                      v37 = *v34++;
                      v36 = v37;
                      if (*(_DWORD*)(v37 + 84) == v33) {
                        goto LABEL_45;
                      }
                    }
                  }
                  v36 = 0;
                LABEL_45:
                  if (*(_QWORD*)(v27 + 16 * v30 + 8) == v36) {
                    *((_DWORD*)a1 + 20) = v30;
                  }
                  ++v30;
                } while (v30 != v29);
              }
            }
            else {
              v27 = a1[7];
            }
            v39 = v27 + 16LL * *((int*)a1 + 20);
            if (*(_DWORD*)v39 == 1) {
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)"Face",
                                               0);
              result = LayoutAccessor_1562cf0((__int64)v25, "TypeAlly");
              goto LABEL_68;
            }
            if (*(_DWORD*)v39 == 0) {
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)"Face",
                                               1);
              v40 = *(_QWORD*)(v39 + 8);
              if ((*(_QWORD*)(v40 + 96) | *(_QWORD*)(v40 + 552)) == 0) {
                if (GameRoutine_1651fc0(v40)) {
                  v41 = "StatusPlayer_Fixed";
                }
                else {
                  v41 = "StatusPlayer_Default";
                }
                LayoutAccessor_1562cf0((__int64)v25, v41);
                v42 = LayoutAccessor_1561f50(v25, "Face");
                v43 = Troop_133e4e0(*(_QWORD*)(v39 + 8));
                result = GameHr_1840740(v42, 1u, (__int64)v43, 6u, 1);
                goto LABEL_68;
              }
              LayoutAccessor_1562cf0((__int64)v25, "StatusAlly_Default");
              v44 = LayoutAccessor_1561f50(v25, "Face");
              result = GameHr_1840a20(
                  v44, 1u, *(_QWORD*)(*(_QWORD*)(v39 + 8) + 552LL), 6u, 1);
            }
            goto LABEL_67;
          default:
            goto LABEL_68;
          }
          result = LayoutAccessor_1562cf0((__int64)v25, v38);
          goto LABEL_68;
        }
      LABEL_67:
        if (v24 != 0) {
        LABEL_68:
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            result = std___1___shared_weak_count___release_weak(v24);
          }
        }
      LABEL_70:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return std___1___shared_weak_count___release_weak(v6);
        }
        return result;
      }
    LABEL_22:
      v22 = false;
      goto LABEL_23;
    }
  }
  return result;
}

__int64 ui_1839560(__int64 a1, char a2, unsigned int a3)
{
  __int64 result;
  __int64 v7;
  __int64* v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  int v17;
  char* v18;
  _BOOL4 v19;
  char v20;
  char* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64* v29;
    __int64 v30;
  } v29_;

  LayoutAccessor_1560070((void*)(&v29_.v29), (__int64*)(a1 + 24), "L_KeyA");
  result = v29_.v30;
  if (v29_.v30 != 0) {
    v7 = std___1___shared_weak_count_lock(v29_.v30);
    v8 = v29_.v29;
    result = v29_.v30;
    if (v29_.v30 != 0) {
      result = std___1___shared_weak_count___release_weak(v29_.v30);
    }
    v9 = v7 == 0 || v8 == nullptr;
    if (v9) {
      if (v7 == 0) {
        return result;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v7);
      if (v10 != 0) {
        v11 = v10;
        GameRoutine_159da00(v8, a3, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      std___1___shared_weak_count___release_weak(v7);
      v12 = "MID_BtlMenu_Secede";
      switch (a2) {
      case 2:
        v12 = "MID_BtlMenu_Talk";
        break;
      case 4:
        v12 = "MID_BtlMenu_Assist";
        break;
      case 5:
        v12 = "MID_Sys_Singular_Arts";
        break;
      case 6:
        v15 = *(_QWORD*)(a1 + 168);
        if (v15 != 0) {
          v12 = "MID_Sys_Singular_Special";
          if (*(_BYTE*)(v15 + 104) == 3 &&
              ((*(_BYTE*)(v15 + 250) - 33) & 0xFE) == 0) {
            v12 = "MID_BtlMenu_SpecialGauge";
          }
        }
        else {
          v12 = "MID_Sys_Singular_Special";
        }
        break;
      case 8:
        v12 = "MID_BtlMenu_Gambit";
        break;
      case 9:
        v12 = "MID_BtlMenu_Rage";
        break;
      case 16:
        v12 = "MID_BtlMenu_Morph";
        break;
      case 18:
        v16 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 152) + 72LL) + 80LL);
        if (v16 != nullptr) {
          if (*v16 != 0) {
            v12 =
                *(const char**)(*(_QWORD*)(*(_QWORD*)(a1 + 152) + 72LL) + 80LL);
          }
          else {
            v12 = nullptr;
          }
        }
        else {
          v12 = nullptr;
        }
        break;
      case 22:
        break;
      case 24:
        v12 = "MID_BtlMenu_Treasurebox";
        break;
      case 26:
        v13 = (*(__int64 (**)(_QWORD))(
            **(_QWORD**)(*(_QWORD*)(a1 + 152) + 808LL) + 224LL))(
            *(_QWORD*)(*(_QWORD*)(a1 + 152) + 808LL));
        v14 = *(_BYTE**)(v13 + 200);
        v12 = &GameData_1a9f09e;
        if (v14 != nullptr && *v14 != 0) {
          v12 = *(const char**)(v13 + 200);
        }
        break;
      case 27:
        v12 = "MID_BtlMenu_Cannon";
        break;
      case 28:
        v12 = "MID_BtlMenu_Warp";
        break;
      default:
        v12 = "MID_BtlMenu_Attack";
        break;
      }
      LayoutAccessor_1562060((char*)v8, (__int64)"T_Key_Txt", v12);
      v17 = *(unsigned __int8*)(a1 + 192);
      v18 = (char*)GameData_212da30;
      v19 = a2 == 5;
      v20 = v19 & v17;
      v9 = (v19 & v17) == 0;
      v21 = (char*)GameData_212da30 + 36;
      if (!v9) {
        v21 = (char*)GameData_212da30 + 72;
      }
      v22 = *(_DWORD*)v21;
      v23 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Key");
      if (v23 != 0) {
        v24 = Pane_58f8a0(v23);
        if (v24 != 0) {
          *(_DWORD*)(v24 + 12) = v22;
        }
      }
      v25 = 36;
      if ((v20 & 1) != 0) {
        v25 = 72;
      }
      v26 = *(_DWORD*)&v18[v25];
      v27 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Key_Txt");
      if (v27 != 0) {
        v28 = Pane_58f8a0(v27);
        if (v28 != 0) {
          *(_DWORD*)(v28 + 12) = v26;
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v8, "A_Key");
      if (result != 0) {
        result = Alignment_56b600(result);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

#pragma GCC visibility pop
