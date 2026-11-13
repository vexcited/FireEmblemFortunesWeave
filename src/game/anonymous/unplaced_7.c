#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__int64 GameHr_12f4020(__int64);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
bool game_HasActiveSkill_843420(_DWORD*, _QWORD*);
extern _DWORD* game_g_shared_system_skills_ptr;
extern __int64 (*GameData_2024948[])();
extern __int64* GameData_212c878[6];
extern __int64 GameData_21ca310;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 game_anonymous_17b4360(__int64 a1);

__int64 game_anonymous_17b4360(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  bool v15;
  __int64 v16;
  char v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v39;
  char* v40;
  struct {
    int v41[8];
    int* v42;
  } v41_;

  v41_.v41[0] = 17;
  v2 = game_UnitPool_GetFirst(v41_.v41);
  if (v2 == 0) {
    return 13;
  }
  v3 = *(_QWORD*)(v2 + 432);
  v4 = v2;
  if (v3 == 0) {
    v5 = *(_QWORD*)(v2 + 440);
    if (v5 != 0 && (unsigned int)(v6 = *(unsigned __int8*)(v5 + 16)) <= 8) {
      v37 = v6 - 3;
      while (1) {
        if (v37 == 0) {
          v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v3 != 0) {
            break;
          }
        }
        if (++v37 == 6) {
          goto LABEL_5;
        }
      }
    }
    else {
    LABEL_5:
      v3 = 0;
    }
  }
  v39 = a1;
  v7 = 0;
  v8 = (unsigned int*)game_g_shared_system_skills_ptr;
  v9 = GameData_212c878[0];
  v10 = *game_g_shared_system_skills_ptr;
  while (1) {
  LABEL_8:
    v11 = *(_QWORD*)(v4 + 1752);
    v12 = *(_QWORD*)(v4 + 1744);
    v13 = v3;
    v41_.v41[0] = v10 & 0xFFF;
    v14 = (v10 >> 5) & 0x7F;
    if (v14 + 1 > (unsigned __int64)((v11 - v12) >> 2) ||
        ((*(_DWORD*)(v12 + 4LL * v14) >> v10) & 1) == 0 ||
        (v15 = game_HasActiveSkill_843420(v41_.v41, (_QWORD*)(v4 + 1744)),
         v10 = *v8, !v15) ||
        ((v16 = *(_QWORD*)(v4 + 440)) == 0 ? (v17 = 9)
                                           : (v17 = *(_BYTE*)(v16 + 16)),
         ((1 << v17) & 0xF1) == 0)) {
      if (*(_WORD*)(v4 + 828) != 0) {
        if ((*(_BYTE*)(v4 + 831) & 0x10) != 0) {
          v18 = 0;
        }
        else {
          v18 = 0;
          v19 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL * *(unsigned __int16*)(v4 + 828));
          if ((*(_DWORD*)(v19 + 336) & 4) == 0 &&
              ((1LL << *(_BYTE*)(v19 + 72)) & 0xE01F) != 0) {
            v18 = (*(_DWORD*)(v19 + 336) & 0x300) == 0;
          }
        }
        v7 += v18;
      }
      if (*(_WORD*)(v4 + 836) != 0) {
        if ((*(_BYTE*)(v4 + 839) & 0x10) != 0) {
          v20 = 0;
        }
        else {
          v20 = 0;
          v21 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL * *(unsigned __int16*)(v4 + 836));
          if ((*(_DWORD*)(v21 + 336) & 4) == 0 &&
              ((1LL << *(_BYTE*)(v21 + 72)) & 0xE01F) != 0) {
            v20 = (*(_DWORD*)(v21 + 336) & 0x300) == 0;
          }
        }
        v7 += v20;
      }
      if (*(_WORD*)(v4 + 844) != 0) {
        if ((*(_BYTE*)(v4 + 847) & 0x10) != 0) {
          v22 = 0;
        }
        else {
          v22 = 0;
          v23 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL * *(unsigned __int16*)(v4 + 844));
          if ((*(_DWORD*)(v23 + 336) & 4) == 0 &&
              ((1LL << *(_BYTE*)(v23 + 72)) & 0xE01F) != 0) {
            v22 = (*(_DWORD*)(v23 + 336) & 0x300) == 0;
          }
        }
        v7 += v22;
      }
      if (*(_WORD*)(v4 + 852) != 0) {
        if ((*(_BYTE*)(v4 + 855) & 0x10) != 0) {
          v24 = 0;
        }
        else {
          v24 = 0;
          v25 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL * *(unsigned __int16*)(v4 + 852));
          if ((*(_DWORD*)(v25 + 336) & 4) == 0 &&
              ((1LL << *(_BYTE*)(v25 + 72)) & 0xE01F) != 0) {
            v24 = (*(_DWORD*)(v25 + 336) & 0x300) == 0;
          }
        }
        v7 += v24;
      }
      if (*(_WORD*)(v4 + 860) != 0) {
        if ((*(_BYTE*)(v4 + 863) & 0x10) != 0) {
          v26 = 0;
        }
        else {
          v26 = 0;
          v27 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL * *(unsigned __int16*)(v4 + 860));
          if ((*(_DWORD*)(v27 + 336) & 4) == 0 &&
              ((1LL << *(_BYTE*)(v27 + 72)) & 0xE01F) != 0) {
            v26 = (*(_DWORD*)(v27 + 336) & 0x300) == 0;
          }
        }
        v7 += v26;
      }
      if (*(_WORD*)(v4 + 868) != 0) {
        if ((*(_BYTE*)(v4 + 871) & 0x10) != 0) {
          v28 = 0;
        }
        else {
          v28 = 0;
          v29 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                           8LL * *(unsigned __int16*)(v4 + 868));
          if ((*(_DWORD*)(v29 + 336) & 4) == 0 &&
              ((1LL << *(_BYTE*)(v29 + 72)) & 0xE01F) != 0) {
            v28 = (*(_DWORD*)(v29 + 336) & 0x300) == 0;
          }
        }
        v7 += v28;
      }
    }
    if (v13 == 0) {
      break;
    }
    v3 = *(_QWORD*)(v13 + 432);
    v4 = v13;
    if (v3 == 0) {
      v30 = *(_QWORD*)(v13 + 440);
      v4 = v13;
      if (v30 != 0) {
        v31 = *(unsigned __int8*)(v30 + 16);
        v3 = 0;
        v4 = v13;
        if (v31 <= 8) {
          v32 = v31 - 3;
          while (1) {
            if (v32 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v32 == 6) {
              v3 = 0;
              v4 = v13;
              goto LABEL_8;
            }
          }
          v4 = v13;
        }
      }
    }
  }
  if (v7 == 0) {
    return 13;
  }
  if (*(int*)(*(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                         8LL) +
              84LL) +
          v7 >
      (signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   72LL)) {
    v33 = *(_QWORD*)(v39 + 8);
    v40 = "MID_AutoMenu_Deposit_Failure_Message";
    v34 = game_menu_Dialog__CreateBind_game_menu_Dialog(v33, (__int64)&v40);
    if (v34 != 0) {
      v41_.v42 = nullptr;
      GameRoutine_6680e0(v41_.v41, (_QWORD*)(v34 + 1248));
      if (v41_.v42 == v41_.v41) {
        v35 = 32;
        goto LABEL_85;
      }
      if (v41_.v42 != nullptr) {
        v35 = 40;
      LABEL_85:
        (*(void (**)(__int64))(*(_QWORD*)v41_.v42 + v35))((__int64)v41_.v42);
      }
    }
    return 12;
  }
  *(_QWORD*)v41_.v41 = GameData_2024948;
  v41_.v42 = v41_.v41;
  GameHr_12f4020((__int64)v41_.v41);
  if (v41_.v42 == v41_.v41) {
    v36 = 32;
    goto LABEL_81;
  }
  if (v41_.v42 != nullptr) {
    v36 = 40;
  LABEL_81:
    (*(void (**)(__int64))(*(_QWORD*)v41_.v42 + v36))((__int64)v41_.v42);
  }
  return 13;
}

#pragma GCC visibility pop
