#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_159e180(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_67ed20(_QWORD*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void game_18c9b10(__int64*, __int64, int);
__int64 ui_game_15740c0(__int64* a1, __int64 a2, char a3, const char* a4,
                        char a5);

__int64 ui_game_15740c0(__int64* a1, __int64 a2, char a3, const char* a4,
                        char a5)
{
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64* v25;
  __int64 result;
  _QWORD v27[2];
  struct {
    __int64* v28;
    __int64 v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    int v32;
    int v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
  } v28_;

  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"A_Tab", 0);
  if ((a5 & 1) == 0) {
    goto LABEL_19;
  }
  v27[0] = "L_ArrowL";
  v27[1] = 8;
  GameRoutine_159e180((void*)(&v28_.v28), a1, v27);
  if (v28_.v29 != 0) {
    v10 = std___1___shared_weak_count_lock(v28_.v29);
    v11 = v28_.v28;
    if (v28_.v29 != 0) {
      std___1___shared_weak_count___release_weak(v28_.v29);
    }
    if (v10 != 0 && v11 != nullptr) {
      (*(void (**)(__int64*, _QWORD))(*v11 + 40))(v11, 0);
    }
    else if (v10 == 0) {
      goto LABEL_11;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_11:
  v27[0] = "L_ArrowR";
  v27[1] = 8;
  GameRoutine_159e180((void*)(&v28_.v28), a1, v27);
  if (v28_.v29 == 0) {
    goto LABEL_19;
  }
  v12 = std___1___shared_weak_count_lock(v28_.v29);
  v13 = v28_.v28;
  if (v28_.v29 != 0) {
    std___1___shared_weak_count___release_weak(v28_.v29);
  }
  if (v12 != 0 && v13 != nullptr) {
    (*(void (**)(__int64*, _QWORD))(*v13 + 40))(v13, 0);
  }
  else if (v12 == 0) {
    goto LABEL_19;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_19:
    if (a2 != 0) {
      goto LABEL_20;
    }
  LABEL_27:
    LayoutAccessor_1562cf0((__int64)a1, "UnitOff");
    if (a4 != nullptr) {
      v28_.v34 = -1;
      v28_.v35 = -1;
      v28_.v36 = -1;
      v28_.v37 = -1;
      v17 = *msg_MessageManager_instance__ptr[0];
      v28_.v38 = -1;
      v28_.v39 = -1;
      v28_.v40 = -1;
      v28_.v41 = -1;
      v28_.v42 = -1;
      v28_.v43 = -1;
      v28_.v44 = -1;
      v28_.v45 = -1;
      v28_.v28 = GameData_212e348 + 2;
      v28_.v29 = 0xFFFF0001FFFF0000LL;
      v28_.v30 = 0xFFFF0004FFFF0002LL;
      v28_.v31 = 0xFFFF0006FFFF0005LL;
      v28_.v46 = 8;
      v28_.v32 = -65529;
      v28_.v33 = -65528;
      v18 = GameRoutine_a4dbe0(v17, a4, 0);
      if (v18 != nullptr) {
        v19 = (__int64)v18;
        v20 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
        if (v20 != 0) {
          GameRoutine_156c5d0(v20, v19, 0);
        }
      }
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"Face", 0);
    goto LABEL_49;
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak(v12);
  if (a2 == 0) {
    goto LABEL_27;
  }
LABEL_20:
  LayoutAccessor_1562cf0((__int64)a1, "UnitOn");
  if (a4 != nullptr) {
    v28_.v34 = -1;
    v28_.v35 = -1;
    v28_.v36 = -1;
    v28_.v37 = -1;
    v14 = *msg_MessageManager_instance__ptr[0];
    v28_.v38 = -1;
    v28_.v39 = -1;
    v28_.v40 = -1;
    v28_.v41 = -1;
    v28_.v42 = -1;
    v28_.v43 = -1;
    v28_.v44 = -1;
    v28_.v45 = -1;
    v28_.v28 = GameData_212e348 + 2;
    v28_.v29 = 0xFFFF0001FFFF0000LL;
    v28_.v30 = 0xFFFF0004FFFF0002LL;
    v28_.v31 = 0xFFFF0006FFFF0005LL;
    v28_.v46 = 8;
    v28_.v32 = -65529;
    v28_.v33 = -65528;
    v15 = GameRoutine_a4dbe0(v14, a4, 0);
    if (v15 == nullptr) {
      goto LABEL_35;
    }
    v16 = (__int64)v15;
  }
  else if (*(_BYTE*)(a2 + 2136) != 0) {
    v16 = (__int64)game_97b2f0(a2 + 2104);
    if (v16 == 0) {
      goto LABEL_35;
    }
  }
  else {
    v16 = GameHr_67ed20(*(_QWORD**)(a2 + 392));
    if (v16 == 0) {
      goto LABEL_35;
    }
  }
  v21 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
  if (v21 != 0) {
    GameRoutine_156c5d0(v21, v16, 0);
  }
LABEL_35:
  v22 = ui_LayoutAccessor_FindPane(a1, (__int64)"Face");
  if (v22 != 0) {
    v22 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v23 = GameHr_1840740(v22, 0, a2, 6u, 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"Face", v23 & 1);
  v27[0] = "L_OverBlaze";
  v27[1] = 11;
  GameRoutine_1573280((void*)(&v28_.v28), a1, v27);
  if (v28_.v29 != 0) {
    v24 = std___1___shared_weak_count_lock(v28_.v29);
    v25 = v28_.v28;
    if (v28_.v29 != 0) {
      std___1___shared_weak_count___release_weak(v28_.v29);
    }
    if (v24 != 0 && v25 != nullptr) {
      if ((a3 & 1) != 0) {
        game_18c9b10(v25, a2, -1);
      }
      else {
        (*(void (**)(__int64*, _QWORD))(*v25 + 40))(v25, 0);
      }
    }
    else if (v24 == 0) {
      goto LABEL_49;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
  }
LABEL_49:
  result = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Title");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

#pragma GCC visibility pop
