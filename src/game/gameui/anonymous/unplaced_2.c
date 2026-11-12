#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_171aa40(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void
LayoutAccessor_155ed40(PSEUDO_X8, __int64*, __int64*, __int64, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_171beb0(__int64, char);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_155ca60(__int64);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_sound_PlayCursorLeftCalendarSe();
__int64 game_sound_PlayCursorRightCalendarSe();
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
bool GameRoutine_12dd260(__int64, __int16, __int16, __int16);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_204cd50)();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21c9650;
extern __int64 game_gameui_Header_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_20aee38[11];
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
void GameRoutine_1563f90(__int64, __int64);
void GameRoutine_1564060(__int64*);
void GameRoutine_1567760(const char*, unsigned int, char);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_171a220(__int64);
void GameRoutine_658c00(__int64*);
void ProcCalendar_1718a60(__int64);
void game_gameui_anonymous_1569420(__int64 a1);
__int64 game_gameui_anonymous_171b290(_DWORD* a1, __int64 a2, const char* a3,
                                      const char* a4, char a5, char a6);
void game_gameui_anonymous_171b820(__int16* a1, char a2);
void game_gameui_anonymous_1737ed0(__int64* a1, __int64* a2, __int64 a3,
                                   __int64** a4, __int64 a5);

void game_gameui_anonymous_1569420(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = &GameData_204cd50;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v4 = *(_QWORD**)(a1 + 480);
  if (v4 == (_QWORD*)(a1 + 448)) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  LayoutAccessor_155ca60(a1 + 272);
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v6 = *(_QWORD*)(a1 + 264);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_1564060((__int64*)(a1 + 216));
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v7 = *(_QWORD*)(a1 + 176);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 160);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  game_gameui_Header_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

__int64 game_gameui_anonymous_171b290(_DWORD* a1, __int64 a2, const char* a3,
                                      const char* a4, char a5, char a6)
{
  char* v12;
  __int64 result;
  __int64 v14;
  __int64* v15;
  const char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  const char* v34;
  _QWORD v35[2];
  struct {
    __int64* v36;
    __int64 v37;
    unsigned __int64 v38;
    unsigned __int64 v39;
    int v40;
    int v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
  } v36_;

  v12 = game_util_Format("L_Event%02d", *a1);
  LayoutAccessor_1560070((void*)(&v36_.v36), (__int64*)(a2 + 848), v12);
  result = v36_.v37;
  if (v36_.v37 != 0) {
    v14 = std___1___shared_weak_count_lock(v36_.v37);
    v15 = v36_.v36;
    result = v36_.v37;
    if (v36_.v37 != 0) {
      result = std___1___shared_weak_count___release_weak(v36_.v37);
    }
    if (v14 == 0 || v15 == nullptr) {
      if (v14 == 0) {
        return result;
      }
      goto LABEL_43;
    }
    LayoutAccessor_155e830((__int64)v15, 1);
    if (a3 != nullptr) {
      v16 = a3;
    }
    else {
      v16 = &GameData_1a9f09e;
    }
    v36_.v42 = -1;
    v36_.v43 = -1;
    v36_.v44 = -1;
    v36_.v45 = -1;
    v17 = *msg_MessageManager_instance__ptr[0];
    v36_.v46 = -1;
    v36_.v47 = -1;
    v36_.v48 = -1;
    v36_.v49 = -1;
    v36_.v50 = -1;
    v36_.v51 = -1;
    v36_.v52 = -1;
    v36_.v53 = -1;
    v36_.v36 = GameData_212e348 + 2;
    v36_.v37 = 0xFFFF0001FFFF0000LL;
    v36_.v38 = 0xFFFF0004FFFF0002LL;
    v36_.v39 = 0xFFFF0006FFFF0005LL;
    v36_.v54 = 8;
    v36_.v40 = -65529;
    v36_.v41 = -65528;
    v18 = GameRoutine_a4dbe0(v17, v16, 0);
    if (v18 != nullptr) {
      v19 = (__int64)v18;
      v20 = ui_LayoutAccessor_FindTextBox(v15, "T_Txt");
      if (v20 != 0) {
        GameRoutine_156c5d0(v20, v19, 0);
      }
    }
    v21 = 36;
    if ((a5 & 1) != 0) {
      v21 = 44;
    }
    v22 = *(_DWORD*)((char*)GameData_212da30 + v21);
    v23 = ui_LayoutAccessor_FindTextBox(v15, "T_Txt");
    if (v23 != 0) {
      v24 = Pane_58f8a0(v23);
      if (v24 != 0) {
        *(_DWORD*)(v24 + 12) = v22;
      }
    }
    v25 = ui_LayoutAccessor_FindPane(v15, "Icon");
    if (v25 != 0) {
      v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
      if (v26 != 0) {
        if ((unsigned __int8)(a6 - 2) > 0xAu) {
          v27 = "IconSchedule_None";
        }
        else {
          v27 = GameData_20aee38[(unsigned __int8)(a6 - 2)];
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v26, 0, 7u, v27);
      }
    }
    v35[0] = v12;
    v35[1] = strlen(v12);
    result = *(_QWORD*)(a2 + 856);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v28 = *(_QWORD*)(a2 + 848);
        v29 = result;
        if (v28 != 0) {
          result = X8CALL_X0(__int64,
                             GameRoutine_171aa40((void*)((__int64*)&v36_.v36),
                                                 v28, (__int64)v35));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          result = std___1___shared_weak_count___release_weak(v29);
        }
        if (v28 != 0) {
          v30 = v36_.v37;
          if (v36_.v37 != 0) {
            v31 = std___1___shared_weak_count_lock(v36_.v37);
            v32 = v36_.v36;
            v33 = v31;
            result = std___1___shared_weak_count___release_weak(v30);
            if (v33 != 0 && v32 != nullptr) {
              if (a4 != nullptr) {
                v34 = a4;
              }
              else {
                v34 = &GameData_1a9f09e;
              }
              result = GameRoutine_60a020((__int64)(v32 + 131), v34);
              goto LABEL_40;
            }
            if (v33 != 0) {
            LABEL_40:
              if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
                result = std___1___shared_weak_count___release_weak(v33);
              }
            }
          }
        }
      }
    }
    ++*a1;
  LABEL_43:
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      return std___1___shared_weak_count___release_weak(v14);
    }
  }
  return result;
}

void game_gameui_anonymous_171b820(__int16* a1, char a2)
{
  int v4;
  int v5;
  int v6;
  _BOOL4 v8;
  _BOOL4 v10;
  int v11;
  _BOOL4 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  char v17;

  ProcCalendar_1718a60((__int64)a1);
  GameRoutine_171a220((__int64)a1);
  GameRoutine_171beb0((__int64)a1, a2);
  GameHr_1562680((__int64)(a1 + 424), "In", 0x1.0000000000000p+0f);
  if ((a2 & 1) != 0) {
    game_sound_PlayCursorLeftCalendarSe();
  }
  else {
    game_sound_PlayCursorRightCalendarSe();
  }
  v4 = a1[535];
  v5 = a1[536];
  v6 = a1[537];
  v8 = *(_BYTE*)(GameData_21c9650 + 90) != 0 &&
       *(_WORD*)(GameData_21c9650 + 88) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 91) == 0) {
    v8 = false;
  }
  v10 = *(_BYTE*)(GameData_21c9650 + 96) != 0 &&
        *(_WORD*)(GameData_21c9650 + 94) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 97) == 0) {
    v10 = false;
  }
  v11 = v10 + v8;
  v13 = *(_BYTE*)(GameData_21c9650 + 102) != 0 &&
        *(_WORD*)(GameData_21c9650 + 100) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 103) == 0) {
    v13 = false;
  }
  v14 = v11 + v13;
  v15 = *(_QWORD*)(GameData_21c9650 + 16);
  v16 = *(_QWORD*)(GameData_21c9650 + 24);
  if (v15 != v16) {
    while (v4 != *(unsigned __int16*)(v15 + 4) ||
           v5 != *(unsigned __int8*)(v15 + 6) ||
           v6 != *(unsigned __int8*)(v15 + 7)) {
      v15 += 368;
      if (v15 == v16) {
        goto LABEL_37;
      }
    }
  }
  if (v15 != v16 && v15 != 0 && (*(_BYTE*)v15 & 1) != 0) {
    v17 = 0;
  }
  else {
  LABEL_37:
    if (v14 == 3) {
      v17 = 2;
    }
    else {
      v17 = !GameRoutine_12dd260(GameData_21c9650, v4, v5, v6);
    }
  }
  GameRoutine_1567760("Reminder", v14 ^ 3, v17);
}

void game_gameui_anonymous_1737ed0(__int64* a1, __int64* a2, __int64 a3,
                                   __int64** a4, __int64 a5)
{
  __int64 v6;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24[2];

  v6 = (__int64)a4[1];
  if (v6 != 0) {
    v11 = std___1___shared_weak_count_lock(v6);
    if (v11 != 0 && *a4 != nullptr) {
      if ((*(_BYTE*)a3 & 1) != 0) {
        v12 = *(const char**)(a3 + 16);
      }
      else {
        v12 = (const char*)(a3 + 1);
      }
      LayoutAccessor_155ed40((void*)(v24), a2 + 21, *a4, a5, v12);
      v14 = v24[0];
      v13 = v24[1];
      goto LABEL_23;
    }
  }
  else {
    v11 = 0;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v15 = *(const char**)(a3 + 16);
  }
  else {
    v15 = (const char*)(a3 + 1);
  }
  LayoutAccessor_1560070((void*)(v24), a2 + 21, v15);
  v14 = v24[0];
  v13 = v24[1];
  if (v24[1] != 0) {
    v16 = std___1___shared_weak_count_lock(v24[1]);
    if (v16 != 0) {
      v17 = v16;
      if (v14 != 0) {
        v18 = std___1___shared_weak_count_lock(*(_QWORD*)(v14 + 8));
        if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v19 = v18;
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak(v19);
        }
        v20 = a2[34];
        v21 = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 24LL);
        if (*(_QWORD*)(v21 + 24) == v20) {
          Pane_58df60(v20, *(_QWORD**)(*(_QWORD*)(v14 + 16) + 24LL));
          Pane_58dee0(a2[35], v21);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
  if (v11 == 0) {
  LABEL_24:
    if (v13 != 0) {
      goto LABEL_25;
    }
  LABEL_30:
    *a1 = 0;
    a1[1] = 0;
    return;
  }
LABEL_23:
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_24;
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  if (v13 == 0) {
    goto LABEL_30;
  }
LABEL_25:
  v22 = std___1___shared_weak_count_lock(v13);
  if (v22 != 0) {
    v23 = v22;
    if (v14 != 0) {
      LayoutAccessor_155e830(v14, 1);
      *a1 = v14;
      a1[1] = v23;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
      }
      goto LABEL_34;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v23);
    }
  }
  *a1 = 0;
  a1[1] = 0;
LABEL_34:
  std___1___shared_weak_count___release_weak(v13);
}

#pragma GCC visibility pop
