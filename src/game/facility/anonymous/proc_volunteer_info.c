#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_957180(__int64);
__int64 GameRoutine_90dc20(__int64, unsigned __int64*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_1584200(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameHr_6fbd80(__int64, int);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d690;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
int strcmp(const char*, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, const char*, int, ...);
__int64 ProcVolunteerInfo_Unknown28(__int64 a1);

__int64 ProcVolunteerInfo_Unknown28(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  const char* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  char* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _DWORD* v38;
  int v39;
  __int64 v43;
  const char* v44;
  __int64* v45;
  __int64* v46;
  unsigned int v47;
  unsigned int v48;
  __int64 v49;
  __int64* v50;
  char* v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  _BYTE* v56;
  const char* v57;
  const char* v58;
  const char* v59;
  __int64* v60;
  __int64 result;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  struct {
    __int64 v65;
    __int64 v66;
  } v65_;
  struct {
    __int64* v67;
    __int64 v68;
    unsigned __int64 v69;
    unsigned __int64 v70;
    int v71;
    int v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
  } v67_;

  v2 = ui_LayoutAccessor_empty__ptr[0];
  if (*(_QWORD*)(a1 + 168) != 0) {
    v3 = *(__int64**)(a1 + 168);
  }
  else {
    v3 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_1560070((void*)(&v67_.v67), v3, "L_Bg");
  if (v67_.v68 == 0) {
    goto LABEL_23;
  }
  v4 = std___1___shared_weak_count_lock(v67_.v68);
  v5 = v67_.v67;
  if (v67_.v68 != 0) {
    std___1___shared_weak_count___release_weak(v67_.v68);
  }
  if (v4 == 0 || v5 == nullptr) {
    if (v4 == 0) {
      goto LABEL_23;
    }
    goto LABEL_21;
  }
  v7 = *(const char**)(*(_QWORD*)(a1 + 208) + 32LL);
  if (v7 == nullptr || *v7 == 0) {
    v9 = *msg_MessageManager_empty_text__ptr;
    if (*msg_MessageManager_empty_text__ptr == nullptr) {
      goto LABEL_21;
    }
  LABEL_19:
    v10 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Title");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, (__int64)v9, 0);
    }
    goto LABEL_21;
  }
  v67_.v73 = -1;
  v67_.v74 = -1;
  v67_.v75 = -1;
  v67_.v76 = -1;
  v8 = *msg_MessageManager_instance__ptr[0];
  v67_.v77 = -1;
  v67_.v78 = -1;
  v67_.v79 = -1;
  v67_.v80 = -1;
  v67_.v81 = -1;
  v67_.v82 = -1;
  v67_.v83 = -1;
  v67_.v84 = -1;
  v67_.v67 = GameData_212e348 + 2;
  v67_.v68 = 0xFFFF0001FFFF0000LL;
  v67_.v69 = 0xFFFF0004FFFF0002LL;
  v67_.v70 = 0xFFFF0006FFFF0005LL;
  v67_.v85 = 8;
  v67_.v71 = -65529;
  v67_.v72 = -65528;
  v9 = GameRoutine_a4dbe0(v8, v7, 0);
  if (v9 != nullptr) {
    goto LABEL_19;
  }
LABEL_21:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
LABEL_23:
  if (*(_QWORD*)(a1 + 168) != 0) {
    v11 = *(__int64**)(a1 + 168);
  }
  else {
    v11 = v2;
  }
  v12 = ui_LayoutAccessor_FindPane(v11, (__int64)"IconGod");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
    v64 = (__int64*)(a1 + 208);
    v14 = (_BYTE*)GameHr_957180(*(_QWORD*)(a1 + 208));
    if (v13 != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v13, 0, 7u, v14);
    }
  }
  else {
    v64 = (__int64*)(a1 + 208);
    GameHr_957180(*(_QWORD*)(a1 + 208));
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v15 = *(__int64**)(a1 + 168);
  }
  else {
    v15 = v2;
  }
  LayoutAccessor_1560070((void*)(&v65_.v65), v15, "L_MiracleLv");
  game_gameui_1584200((__int64)&v65_.v65, *(_QWORD*)(a1 + 208));
  if (v65_.v66 != 0) {
    std___1___shared_weak_count___release_weak(v65_.v66);
  }
  v16 = game_GameModeData_instance_;
  v17 = GameRoutine_90dc20(game_GameModeData_instance_ + 152,
                           *(unsigned __int64**)(*v64 + 112));
  v18 = *(_QWORD*)(v16 + 160);
  v19 = v18 + 32;
  v20 = *(_QWORD*)(v18 + 8) + 32LL * (unsigned int)v17;
  if (v17 >= 0) {
    v21 = v20;
  }
  else {
    v21 = v19;
  }
  v22 = *(_QWORD*)(*(_QWORD*)(v21 + 16) + 24LL);
  if (*(int*)(v22 + 420) >= 1) {
    v23 = 0;
    do {
      v24 = v22 + 4 * v23;
      v25 = v23 + 1;
      if ((*(_WORD*)(v24 + 4) & 0xFFF) != 0) {
        v26 = *(_QWORD*)(a1 + 168) != 0 ? *(__int64**)(a1 + 168) : v2;
        v27 = game_util_Format("L_Miracle%02d", (unsigned int)v23);
        LayoutAccessor_1560070((void*)(&v67_.v67), v26, v27);
        if (v67_.v68 != 0) {
          v28 = std___1___shared_weak_count_lock(v67_.v68);
          v29 = v67_.v67;
          if (v67_.v68 != 0) {
            std___1___shared_weak_count___release_weak(v67_.v68);
          }
          if (v28 != 0 && v29 != nullptr) {
            v30 = ui_LayoutAccessor_FindPane(v29, (__int64)"T_LvNum");
            if (v30 != 0) {
              v31 =
                  __dynamic_cast(v30, GameData_212d670[0], GameData_212d690, 0);
              if (v31 != 0) {
                GameRoutine_156c910(v31, "%d", 1, (unsigned int)(v23 + 1));
              }
            }
            v32 = *(_DWORD*)(v24 + 4);
            if ((v32 & 0xFFF) != 0) {
              v33 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                               8LL * (v32 & 0xFFF));
              if (v33 != 0) {
                v34 = GameHr_6fbd80(v33, *(unsigned __int8*)(v33 + 304) -
                                             (HIBYTE(v32) & 0x1F));
                if (v34 != nullptr) {
                  v35 = (__int64)v34;
                  v36 = ui_LayoutAccessor_FindTextBox(v29, (__int64)"T_Txt");
                  if (v36 != 0) {
                    GameRoutine_156c5d0(v36, v35, 0);
                  }
                }
              }
            }
            v37 = *(_DWORD*)(v21 + 4);
            v38 = *(_DWORD**)(*(_QWORD*)(v21 + 16) + 24LL);
            v39 = v38[105];
            if (v39 > 2 && (signed __int32)v38[103] <= v37) {
              v43 = 3;
            }
            else if (v39 > 1 && (signed __int32)v38[102] <= v37) {
              v43 = 2;
            }
            else if (v39 >= 1 && (signed __int32)v38[101] <= v37) {
              v43 = 1;
            }
            else {
              v43 = (int)v38[104];
            }
            if (v43 >= v25) {
              v44 = "UnLock";
            }
            else {
              v44 = "Lock";
            }
            GameHr_1562680((__int64)v29, v44, 0x1.0000000000000p+0f);
          LABEL_80:
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              std___1___shared_weak_count___release_weak(v28);
            }
            goto LABEL_40;
          }
          if (v28 != 0) {
            goto LABEL_80;
          }
        }
      }
    LABEL_40:
      v23 = v25;
      v22 = *(_QWORD*)(*(_QWORD*)(v21 + 16) + 24LL);
    } while (v25 < *(int*)(v22 + 420));
  }
  v46 = *(__int64**)(*GameData_212cc60[0] + 64);
  v45 = *(__int64**)(*GameData_212cc60[0] + 72);
  if (v46 != v45) {
    v47 = 0;
    do {
      v49 = *v46;
      if (GameHr_957180(*v46) != 0) {
        v48 = v47 + 1;
        if (*(_QWORD*)(a1 + 168) != 0) {
          v50 = *(__int64**)(a1 + 168);
        }
        else {
          v50 = v2;
        }
        v51 = game_util_Format("L_Week%02d", v47);
        LayoutAccessor_1560070((void*)(&v67_.v67), v50, v51);
        if (v67_.v68 != 0) {
          v52 = std___1___shared_weak_count_lock(v67_.v68);
          v53 = v67_.v67;
          if (v67_.v68 != 0) {
            std___1___shared_weak_count___release_weak(v67_.v68);
          }
          if (v52 != 0 && v53 != nullptr) {
            v54 = ui_LayoutAccessor_FindPane(v53, (__int64)"IconGod");
            if (v54 != 0) {
              v55 = __dynamic_cast(v54, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              v56 = (_BYTE*)GameHr_957180(v49);
              if (v55 != 0) {
                Manager_136a920(ui_Manager_instance_ + 1264, v55, 0, 7u, v56);
              }
            }
            else {
              GameHr_957180(v49);
            }
            v57 = (const char*)GameHr_957180(*v64);
            v58 = (const char*)GameHr_957180(v49);
            if (strcmp(v57, v58) != 0) {
              v59 = "Default";
            }
            else {
              v59 = "Special";
            }
            GameHr_1562680((__int64)v53, v59, 0x1.0000000000000p+0f);
          LABEL_105:
            if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
              std___1___shared_weak_count___release_weak(v52);
            }
            goto LABEL_85;
          }
          if (v52 != 0) {
            goto LABEL_105;
          }
        }
      }
      else {
        v48 = v47;
      }
    LABEL_85:
      ++v46;
      v47 = v48;
    } while (v46 != v45);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v60 = *(__int64**)(a1 + 168);
  }
  else {
    v60 = v2;
  }
  LayoutAccessor_1560070((void*)(&v67_.v67), v60, "L_Week06");
  result = v67_.v68;
  if (v67_.v68 != 0) {
    v62 = std___1___shared_weak_count_lock(v67_.v68);
    v63 = (__int64)v67_.v67;
    result = v67_.v68;
    if (v67_.v68 != 0) {
      result = std___1___shared_weak_count___release_weak(v67_.v68);
    }
    if (v62 != 0 && v63 != 0) {
      result = GameHr_1562680(v63, "Special", 0x1.0000000000000p+0f);
    }
    else if (v62 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
      return std___1___shared_weak_count___release_weak(v62);
    }
  }
  return result;
}

#pragma GCC visibility pop
