#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_82e5c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
__int64 game_menu_anonymous_FacilityTempleMenuItem_CheckVisible_closure_Invoke(
    __int64 a1, unsigned __int8* a2);
__int64 GameConst_7f97f0(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1ae5940;
extern __int64 (*GameData_20ea248[])();
extern __int64 GameData_21ca0a8;
__int64 game_menu_anonymous_FacilityTempleMenuItem_CheckVisible(int a1);

__int64 game_menu_anonymous_FacilityTempleMenuItem_CheckVisible(int a1)
{
  int v3;
  int v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64* v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  char v20;

  if (a1 != 5) {
    return 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v3 != 3) {
      if (v3 == 1) {
        v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        if ((unsigned int)(v4 - 2) >= 3) {
          if (v4 == 1 && *(int*)(game_GameModeData_instance_ + 64) < 5) {
            goto LABEL_25;
          }
        }
        else if (*(int*)(game_GameModeData_instance_ + 64) < 4) {
          goto LABEL_25;
        }
      }
      goto LABEL_19;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 64) == 1) {
      v20 = 0;
      v18_.v18[0] = GameData_20ea248;
      v18_.v18[1] = &v20;
      v18_.v19 = v18_.v18;
      GameConst_7f97f0((__int64)v18_.v18);
      if (v18_.v19 == v18_.v18) {
        v6 = 32;
      }
      else {
        if (v18_.v19 == nullptr) {
          goto LABEL_18;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v18_.v19 + v6))((__int64)v18_.v19);
    LABEL_18:
      if (v20 != 1) {
        goto LABEL_25;
      }
    }
  }
LABEL_19:
  v7 = game_HashString((__int64)&GameData_1ae5940);
  if (v7 == 0) {
    goto LABEL_25;
  }
  v8 = *(_QWORD*)(GameData_21ca0a8 + 96);
  if (v8 == 0 || *(_QWORD*)(GameData_21ca0a8 + 112) == 0) {
    goto LABEL_25;
  }
  v11 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v12 = v7;
    if (v7 >= v8) {
      v12 = v7 % v8;
    }
  }
  else {
    v12 = v11 & v7;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_21ca0a8 + 88) + 8 * v12);
  if (v10 != nullptr) {
    v13 = (_QWORD*)*v10;
    if (*v10 == 0) {
      goto LABEL_25;
    }
    if ((v8 & v11) == 0) {
      while (1) {
        v15 = v13[1];
        if (v15 == v7) {
          if (v13[2] == v7) {
            goto LABEL_47;
          }
        }
        else if ((v15 & v11) != v12) {
          goto LABEL_25;
        }
        v13 = (_QWORD*)*v13;
        LODWORD(v10) = 0;
        if (v13 == nullptr) {
          return (unsigned int)v10;
        }
      }
    }
    do {
      v14 = v13[1];
      if (v14 == v7) {
        if (v13[2] == v7) {
        LABEL_47:
          v16 = (unsigned __int64*)v13[3];
          if (v16 != nullptr) {
            LODWORD(v10) = game_GameModeData_instance_;
            if (game_GameModeData_instance_ == 0) {
              return (unsigned int)v10;
            }
            v17 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48), v16);
            if (v17 != 0) {
              LODWORD(v10) = *(_BYTE*)(v17 + 32) != 0;
              return (unsigned int)v10;
            }
          }
        LABEL_25:
          LODWORD(v10) = 0;
          return (unsigned int)v10;
        }
      }
      else {
        if (v14 >= v8) {
          v14 %= v8;
        }
        if (v14 != v12) {
          goto LABEL_25;
        }
      }
      v13 = (_QWORD*)*v13;
      LODWORD(v10) = 0;
    } while (v13 != nullptr);
  }
  return (unsigned int)v10;
}

__int64 game_menu_anonymous_FacilityTempleMenuItem_CheckVisible_closure_Invoke(
    __int64 a1, unsigned __int8* a2)
{
  __int64 result;

  result = GameRoutine_82e5c0(*a2);
  if (*(_QWORD*)result != 0 && game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), result);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
