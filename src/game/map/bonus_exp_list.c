#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7dba40(__int64, __int64);
__int64 GameRoutine_7dbc20(unsigned __int64, int);
__int64 GameRoutine_7dbdd0(__int64);
__int64 GameRoutine_7dbed0(__int64, __int64);
__int64 GameRoutine_7dc0b0(__int64, __int64);
__int64 GameRoutine_7fec70(__int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_UnitSkillList_GetMaxValue(_QWORD*, __int64*);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetParam(__int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1aa82ac;
extern _UNKNOWN GameData_1aafe47;
extern _UNKNOWN GameData_1abba1f;
extern _UNKNOWN GameData_1addfa2;
extern _UNKNOWN GameData_1aed703;
extern _UNKNOWN GameData_21da340;
extern _UNKNOWN GameData_21da358;
extern _UNKNOWN GameData_21da370;
extern _UNKNOWN GameData_21da388;
extern _UNKNOWN GameData_21da3a0;
extern __int16* GameData_212cf08[9];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ce90[3];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d9a38;
extern __int64 GameData_21d9a68;
extern __int64 GameData_21da330;
extern __int64 GameData_21da338;
extern __int64 GameData_21da348;
extern __int64 GameData_21da350;
extern __int64 GameData_21da360;
extern __int64 GameData_21da368;
extern __int64 GameData_21da378;
extern __int64 GameData_21da380;
extern __int64 GameData_21da390;
extern __int64 GameData_21da398;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_empty_item;
__int64 BonusExpList_7feda0(__int64 a1, __int64 a2, char a3);
__int64 BonusExpList_7ff4f0(__int64 a1, __int64* a2);
__int64 BonusExpList_7ff8f0(__int64 a1, __int64 a2);

__int64 BonusExpList_7feda0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v11;
  unsigned int v13;
  int v14;
  __int64 v16;
  unsigned int v18;
  int v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  int v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int16* v43;
  __int64 v44;
  _BYTE* v45;
  unsigned int v46;
  __int64 v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  int v55;
  __int64 v56;
  char v57;
  __int64 v58;
  int v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  int v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  char v68;
  int v69;
  __int64 v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  unsigned __int64 v76;
  struct {
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    char v82;
    char v83;
    char gap42_[2];
    int v84;
  } v78_;

  v3 = *(_QWORD*)(a2 + 8);
  v4 = *(unsigned __int8*)(a2 + 17);
  *(_QWORD*)a1 = 0xC86432000001LL;
  v6 = v3 + 760LL * v4;
  *(_DWORD*)(a1 + 8) = 51300;
  v7 = *(_QWORD*)(a2 + 56);
  v8 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + 11272LL);
  if ((unsigned int)(v8 - 3) >= 3) {
    if (v8 == 2) {
      goto LABEL_40;
    }
    if (v8 != 1) {
      return a1;
    }
  }
  if (v7 == 0) {
    goto LABEL_36;
  }
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v7 + 104)) & 1) !=
      0) {
    v9 = *(unsigned __int8*)(v7 + 106);
    if (*(_BYTE*)(v7 + 106) == 0 || v9 == 6) {
      v11 = *(_QWORD*)(v7 + 576);
      if (v11 == 0) {
        goto LABEL_25;
      }
    }
    else {
      if (v9 != 1) {
        goto LABEL_25;
      }
      v11 = *(_QWORD*)(v7 + 576);
      if (v11 == 0) {
        goto LABEL_36;
      }
    }
    v13 = *(unsigned __int8*)(v11 + 72);
    v14 = *(unsigned __int8*)(v11 + 73);
    if (v13 > 7 || v14 != 1) {
    LABEL_25:
      if ((unsigned int)(v9 - 2) >= 5) {
        v16 = *(_QWORD*)(v7 + 576);
        if (v16 == 0) {
          goto LABEL_36;
        }
        if (*(unsigned __int8*)(v16 + 72) > 7u ||
            ((1LL << *(_BYTE*)(v16 + 73)) & 0x7DC) == 0) {
          v18 = *(unsigned __int8*)(v16 + 72);
          v19 = *(unsigned __int8*)(v16 + 73);
          if (v18 > 7 || v19 != 7) {
            goto LABEL_36;
          }
        }
      }
    LABEL_40:
      v28 = (__int64*)(a2 + 44);
      v29 = *(unsigned __int16*)(a2 + 44);
      v78_.v82 = 0;
      v78_.v84 = 0;
      v30 = *(_QWORD*)(a2 + 24);
      v78_.v83 = a3 & 1;
      v78_.v78 = v30;
      if (v29 == 0) {
        v31 = *(unsigned int*)(a2 + 40);
        if ((int)v31 >= 0) {
          v28 = (__int64*)(v30 + 8 * v31 + 828);
        }
        else {
          v28 = &game_g_empty_item;
        }
      }
      v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *(unsigned __int16*)v28);
      v78_.v80 = v7;
      v78_.v81 = v32;
      v33 = *(_QWORD*)(v6 + 40);
      *(_QWORD*)a1 = 0xC86432000001LL;
      if (v33 != 0) {
        v34 = v33;
      }
      else {
        v34 = v30;
      }
      v35 = v30 == 0 || v34 == 0;
      *(_DWORD*)(a1 + 8) = 51300;
      v78_.v79 = v34;
      v36 = !v35;
      if (v7 != 0) {
        if (v36 != 0) {
          v37 = GameRoutine_7dc0b0(v30, v34);
          if (v37 >= 0x1F4) {
            v38 = 500;
          }
          else {
            v38 = v37;
          }
          *(_QWORD*)a1 = *(_QWORD*)a1 & 0xFFFFFE00FFFFFFFFLL | (v38 << 32);
          if (GameData_21ca2f8 != 0) {
            v39 = *(unsigned __int16*)(GameData_21ca2f8 + 26);
          }
          else {
            v39 = 0;
          }
          v49 = GameRoutine_7dbc20(GameData_21d9a68, v39);
          if (v49 >= 0x1F4) {
            v50 = 500;
          }
          else {
            v50 = v49;
          }
          *(_QWORD*)a1 =
              *(_QWORD*)a1 & 0xFFFFFFFF007FFFFFLL | (unsigned int)(v50 << 23);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da3a0,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21da3a0) != 0) {
            GameData_21da398 = (__int64)&GameData_1aafe47;
            GameData_21da390 = game_HashString((__int64)&GameData_1aafe47);
            __cxa_guard_release(&GameData_21da3a0);
          }
          v51 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v52 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&GameData_21da390);
            if (v52 != 0) {
              v51 = *(_DWORD*)(v52 + 32);
            }
            else {
              v51 = 0;
            }
          }
          LODWORD(v53) = v51 & ~(v51 >> 31);
          if ((int)v53 >= 500) {
            v53 = 500;
          }
          else {
            v53 = (unsigned int)v53;
          }
          v54 = *(_QWORD*)a1 & 0xFFFC01FFFFFFFFFFLL | (v53 << 41);
          *(_QWORD*)a1 = v54;
          v55 = *(unsigned __int8*)(v34 + 498);
          v56 = *(_QWORD*)(v34 + 440);
          if (v56 != 0) {
            v57 = *(_BYTE*)(v56 + 16);
          }
          else {
            v57 = 9;
          }
          if (((1 << v57) & 0xF1) != 0) {
            goto LABEL_172;
          }
          v58 = *(_QWORD*)(v34 + 392);
          if (v55 == *(unsigned __int8*)(v58 + 445)) {
            if (game_GameModeData_instance_ != 0) {
              v59 = *(_DWORD*)(game_GameModeData_instance_ + 68);
              v60 = *(_QWORD*)(game_GameModeData_instance_ + 16);
              if (v60 != 0) {
                v59 += *(char*)(v60 + 128);
              }
            }
            else {
              v59 = 0;
            }
            v55 = *(unsigned __int8*)(v58 + 442);
            if (*(_BYTE*)(v58 + 442) == 0) {
              v72 = v59 + *(char*)(v58 + 443);
              if (v72 <= 1) {
                v72 = 1;
              }
              if (v72 >= 99) {
                v72 = 99;
              }
              if (*(_BYTE*)(v58 + 443) != 0) {
                v55 = v72;
              }
              else {
                v55 = v59;
              }
            }
          }
          else {
            v65 = v55 - *(char*)(v58 + 446);
            if (v65 <= 1) {
              v65 = 1;
            }
            if (v65 >= 99) {
              v65 = 99;
            }
            if (*(_BYTE*)(v58 + 446) != 0) {
              v55 = v65;
            }
          }
          v73 = *(unsigned __int8*)(v58 + 447);
          if (*(_BYTE*)(v58 + 447) != 0) {
            goto LABEL_156;
          }
          goto LABEL_167;
        }
      }
      else if (v36 != 0) {
        v46 = GameRoutine_7dbed0(v30, v34);
        if (v46 >= 0x1F4) {
          v47 = 500;
        }
        else {
          v47 = v46;
        }
        *(_QWORD*)a1 = *(_QWORD*)a1 & 0xFFFFFE00FFFFFFFFLL | (v47 << 32);
        if (GameData_21ca2f8 != 0) {
          v48 = *(unsigned __int16*)(GameData_21ca2f8 + 26);
        }
        else {
          v48 = 0;
        }
        v61 = GameRoutine_7dbc20(GameData_21d9a38, v48);
        if (v61 >= 0x1F4) {
          v62 = 500;
        }
        else {
          v62 = v61;
        }
        *(_QWORD*)a1 =
            *(_QWORD*)a1 & 0xFFFFFFFF007FFFFFLL | (unsigned int)(v62 << 23);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da388,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21da388) != 0) {
          GameData_21da380 = (__int64)&GameData_1aed703;
          GameData_21da378 = game_HashString((__int64)&GameData_1aed703);
          __cxa_guard_release(&GameData_21da388);
        }
        v63 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v64 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&GameData_21da378);
          if (v64 != 0) {
            v63 = *(_DWORD*)(v64 + 32);
          }
          else {
            v63 = 0;
          }
        }
        LODWORD(v66) = v63 & ~(v63 >> 31);
        if ((int)v66 >= 500) {
          v66 = 500;
        }
        else {
          v66 = (unsigned int)v66;
        }
        v54 = *(_QWORD*)a1 & 0xFFFC01FFFFFFFFFFLL | (v66 << 41);
        *(_QWORD*)a1 = v54;
        v55 = *(unsigned __int8*)(v34 + 498);
        v67 = *(_QWORD*)(v34 + 440);
        if (v67 != 0) {
          v68 = *(_BYTE*)(v67 + 16);
        }
        else {
          v68 = 9;
        }
        if (((1 << v68) & 0xF1) != 0) {
          goto LABEL_172;
        }
        v58 = *(_QWORD*)(v34 + 392);
        if (v55 == *(unsigned __int8*)(v58 + 445)) {
          if (game_GameModeData_instance_ != 0) {
            v69 = *(_DWORD*)(game_GameModeData_instance_ + 68);
            v70 = *(_QWORD*)(game_GameModeData_instance_ + 16);
            if (v70 != 0) {
              v69 += *(char*)(v70 + 128);
            }
          }
          else {
            v69 = 0;
          }
          v55 = *(unsigned __int8*)(v58 + 442);
          if (*(_BYTE*)(v58 + 442) == 0) {
            v74 = v69 + *(char*)(v58 + 443);
            if (v74 <= 1) {
              v74 = 1;
            }
            if (v74 >= 99) {
              v74 = 99;
            }
            if (*(_BYTE*)(v58 + 443) != 0) {
              v55 = v74;
            }
            else {
              v55 = v69;
            }
          }
        }
        else {
          v71 = v55 - *(char*)(v58 + 446);
          if (v71 <= 1) {
            v71 = 1;
          }
          if (v71 >= 99) {
            v71 = 99;
          }
          if (*(_BYTE*)(v58 + 446) != 0) {
            v55 = v71;
          }
        }
        v73 = *(unsigned __int8*)(v58 + 447);
        if (*(_BYTE*)(v58 + 447) != 0) {
        LABEL_156:
          v55 = v73;
        LABEL_172:
          v76 = v54 & 0xFFFFFFFFFF807FFFLL;
          if (v55 <= 1) {
            v55 = 1;
          }
          if (v55 >= 99) {
            v55 = 99;
          }
          *(_QWORD*)a1 = v76 | (unsigned int)(v55 << 15);
          goto LABEL_177;
        }
      LABEL_167:
        v75 = *(char*)(v58 + 448);
        if (v75 != 0) {
          v55 += v75;
          if (v55 <= 1) {
            v55 = 1;
          }
          if (v55 >= 99) {
            v55 = 99;
          }
        }
        goto LABEL_172;
      }
    LABEL_177:
      GameRoutine_7fec70(a1, (__int64)&v78_.v78);
      return a1;
    }
  }
  else if (*(_QWORD*)(v7 + 664) != 0 || *(_BYTE*)(v7 + 250) == 28) {
    goto LABEL_40;
  }
LABEL_36:
  v21 = *(_QWORD*)(a2 + 24);
  v22 = *(_QWORD*)(v6 + 40);
  v78_.v81 = 0;
  v78_.v78 = v21;
  v78_.v79 = v22;
  v23 = *(unsigned int*)(v3 + 11256);
  if ((_DWORD)v23 == 0) {
    v40 = 0;
    v78_.v84 = 0;
  LABEL_87:
    v78_.v80 = v7;
    v78_.v82 = v40;
    v78_.v83 = a3 & 1;
    BonusExpList_7ff4f0(a1, &v78_.v78);
    return a1;
  }
  v24 = *(unsigned __int8*)(v6 + 32);
  v25 = v23 & 3;
  if ((unsigned int)v23 >= 4) {
    v41 = v3 + 3276;
    v42 = 0;
    v27 = 0;
    v43 = (__int16*)(v3 + 3276 + 12 * v24);
    do {
      if (*(_BYTE*)(v41 - 208) == 3 &&
          *(unsigned __int8*)(v41 - 209) == (_DWORD)v24) {
        v27 += *(v43 - 96);
      }
      if (*(_BYTE*)(v41 - 144) == 3 &&
          *(unsigned __int8*)(v41 - 145) == (_DWORD)v24) {
        v27 += *(v43 - 64);
      }
      if (*(_BYTE*)(v41 - 80) == 3 &&
          *(unsigned __int8*)(v41 - 81) == (_DWORD)v24) {
        v27 += *(v43 - 32);
      }
      if (*(_BYTE*)(v41 - 16) == 3 &&
          *(unsigned __int8*)(v41 - 17) == (_DWORD)v24) {
        v27 += *v43;
      }
      v42 -= 4;
      v41 += 256;
      v43 += 128;
    } while (-(__int64)((unsigned int)v23 & 0xFFFFFFFC) != v42);
    v26 = -v42;
    if ((v23 & 3) == 0) {
    LABEL_81:
      v45 = (_BYTE*)(v3 + 3068);
      v78_.v84 = v27;
      do {
        if (*v45 == 22 && (unsigned __int8)*(v45 - 2) == (_DWORD)v24) {
          v40 = 1;
          goto LABEL_87;
        }
        --v23;
        v45 += 64;
      } while (v23 != 0);
      v40 = 0;
      goto LABEL_87;
    }
  }
  else {
    v26 = 0;
    v27 = 0;
    if ((v23 & 3) == 0) {
      goto LABEL_81;
    }
  }
  v44 = v3 + (v26 << 6) + 3084;
  do {
    if (*(_BYTE*)(v44 - 16) == 3 &&
        *(unsigned __int8*)(v44 - 17) == (_DWORD)v24) {
      v27 += *(__int16*)(v44 + 12 * v24);
    }
    v44 += 64;
    --v25;
  } while (v25 != 0);
  goto LABEL_81;
}

__int64 BonusExpList_7ff4f0(__int64 a1, __int64* a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  int v33;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  int v38;
  unsigned __int8 v39;
  __int64 v41;
  struct {
    int v42;
    char v43;
  } v42_;

  *(_DWORD*)(a1 + 8) = 51300;
  v3 = 0xC86432000001LL;
  *(_QWORD*)a1 = 0xC86432000001LL;
  v5 = *a2;
  v4 = a2[1];
  v6 = *((unsigned __int8*)a2 + 32);
  if (*a2 != 0 && v4 != 0) {
    v8 = *((_DWORD*)a2 + 9);
    v9 = a2;
    v10 = game_Unit_GetJob(a2[1]);
    v3 = *(_QWORD*)a1;
    if (v10 == 0) {
    LABEL_74:
      a2 = v9;
      goto LABEL_75;
    }
    v11 = *(unsigned __int16*)(v10 + 414);
    v12 = v3 & 0xFFFFFFFFFFFFFF01LL;
    if (v11 >= 0x64) {
      v11 = 100;
    }
    *(_QWORD*)a1 = v12 | (2 * v11);
    v13 = GameRoutine_7dbdd0(v5);
    if (v13 >= 0x1F4) {
      v14 = 500;
    }
    else {
      v14 = v13;
    }
    *(_QWORD*)a1 =
        *(_QWORD*)a1 & 0xFFFFFFFF007FFFFFLL | (unsigned int)(v14 << 23);
    v15 = GameRoutine_7dba40(v5, v4);
    if (v15 >= 0x1F4) {
      v16 = 500;
    }
    else {
      v16 = v15;
    }
    *(_QWORD*)a1 = *(_QWORD*)a1 & 0xFFFFFE00FFFFFFFFLL | (v16 << 32);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da340,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21da340) != 0) {
      GameData_21da338 = (__int64)&GameData_1abba1f;
      GameData_21da330 = game_HashString((__int64)&GameData_1abba1f);
      __cxa_guard_release(&GameData_21da340);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da358,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21da358) != 0) {
      GameData_21da350 = (__int64)&GameData_1addfa2;
      GameData_21da348 = game_HashString((__int64)&GameData_1addfa2);
      __cxa_guard_release(&GameData_21da358);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21da370,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21da370) != 0) {
      GameData_21da368 = (__int64)&GameData_1aa82ac;
      GameData_21da360 = game_HashString((__int64)&GameData_1aa82ac);
      __cxa_guard_release(&GameData_21da370);
    }
    if (game_GameModeData_instance_ != 0 &&
            (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0 ||
        (v42_.v42 =
             *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr) &
             0xFFF,
         (game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v42_.v42) & 1) ==
             0)) {
      if (*(int*)(v4 + 592) <= 1) {
        v17 = &GameData_21da330;
      }
      else {
        v17 = &GameData_21da360;
      }
      v18 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
      LABEL_29:
        LODWORD(v18) = v18 & ~((int)v18 >> 31);
        if ((int)v18 >= 500) {
          v18 = 500;
        }
        else {
          v18 = (unsigned int)v18;
        }
        v20 = *(_QWORD*)a1 & 0xFFFC01FFFFFFFFFFLL | (v18 << 41);
        *(_QWORD*)a1 = v20;
        v21 = *(unsigned __int8*)(v4 + 498);
        v22 = *(_QWORD*)(v4 + 440);
        if (v22 != 0) {
          v23 = *(_BYTE*)(v22 + 16);
        }
        else {
          v23 = 9;
        }
        if (((1 << v23) & 0xF1) != 0) {
        LABEL_59:
          v31 = v20 & 0xFFFFFFFFFF807FFFLL;
          v42_.v43 = 0;
          if (v21 <= 1) {
            v32 = 1;
          }
          else {
            v32 = v21;
          }
          if (v32 >= 99) {
            v32 = 99;
          }
          *(_QWORD*)a1 = v31 | (unsigned int)(v32 << 15);
          v33 = game_Unit_GetParam(v4);
          if (v33 < 1) {
            v37 = *(_QWORD*)a1 & 0xFE03FFFFFFFFFFFFLL;
          }
          else {
            v35 = (100 * v8 / v33) & ~((100 * v8 / v33) >> 31);
            if (v35 >= 100) {
              v36 = 100;
            }
            else {
              v36 = (unsigned int)v35;
            }
            v37 = *(_QWORD*)a1 & 0xFE03FFFFFFFFFFFFLL | (v36 << 50);
          }
          *(_QWORD*)a1 = v37;
          v41 = 0x20000000000LL;
          v38 = game_UnitSkillList_GetMaxValue((_QWORD*)(v4 + 1744), &v41);
          if ((v38 & ~(v38 >> 31)) >= 100) {
            v39 = 100;
          }
          else {
            v39 = v38 & ~(v38 >> 31);
          }
          v3 = *(_QWORD*)a1 & 0x1FFFFFFFFFFFFFFLL |
               ((unsigned __int64)v39 << 57);
          goto LABEL_74;
        }
        v24 = *(_QWORD*)(v4 + 392);
        if (v21 == *(unsigned __int8*)(v24 + 445)) {
          if (game_GameModeData_instance_ != 0) {
            v21 = *(_DWORD*)(game_GameModeData_instance_ + 68);
            v25 = *(_QWORD*)(game_GameModeData_instance_ + 16);
            if (v25 != 0) {
              v21 += *(char*)(v25 + 128);
            }
          }
          else {
            v21 = 0;
          }
          v28 = *(unsigned __int8*)(v24 + 442);
          if (*(_BYTE*)(v24 + 442) != 0) {
            goto LABEL_51;
          }
          v26 = *(char*)(v24 + 443);
          v27 = v21 + v26;
        }
        else {
          v26 = *(char*)(v24 + 446);
          v27 = v21 - v26;
        }
        if (v27 <= 1) {
          v27 = 1;
        }
        if (v27 >= 99) {
          v27 = 99;
        }
        if (v26 != 0) {
          v28 = v27;
        }
        else {
          v28 = v21;
        }
      LABEL_51:
        v21 = *(unsigned __int8*)(v24 + 447);
        if (*(_BYTE*)(v24 + 447) == 0) {
          v29 = *(char*)(v24 + 448);
          if (v29 != 0) {
            v30 = v28 + v29;
            if (v30 <= 1) {
              v30 = 1;
            }
            if (v30 >= 99) {
              v21 = 99;
            }
            else {
              v21 = v30;
            }
          }
          else {
            v21 = v28;
          }
        }
        goto LABEL_59;
      }
    }
    else {
      v17 = &GameData_21da348;
      v18 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_29;
      }
    }
    v19 = game_GameVariableTable_Find(*(_QWORD**)(v18 + 48),
                                      (unsigned __int64*)v17);
    if (v19 != 0) {
      LODWORD(v18) = *(_DWORD*)(v19 + 32);
    }
    else {
      LODWORD(v18) = 0;
    }
    goto LABEL_29;
  }
LABEL_75:
  *(_QWORD*)a1 = v3 & 0xFFFFFFFFFFFFFFFELL | v6;
  GameRoutine_7fec70(a1, (__int64)a2);
  return a1;
}

__int64 BonusExpList_7ff8f0(__int64 a1, __int64 a2)
{
  __int64 v3;
  _DWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  char v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15[4];
    __int16 v16;
    char gap42_[2];
    int v17;
  } v15_;

  *(_QWORD*)a1 = 0xC86432000001LL;
  *(_DWORD*)(a1 + 8) = 51300;
  v3 = *(_QWORD*)(a2 + 24);
  if (v3 == 0) {
    return a1;
  }
  v5 = (_DWORD*)game_g_shared_system_skills_ptr;
  LODWORD(v15_.v15[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill((_QWORD*)(v3 + 1744), (unsigned int*)v15_.v15) & 1) != 0) {
    return a1;
  }
  v6 = *(_QWORD*)(v3 + 440);
  if (v6 == 0) {
    return a1;
  }
  v7 = *(unsigned __int8*)(v6 + 16);
  if (((1 << v7) & 0xF1) != 0) {
    LODWORD(v15_.v15[0]) = *v5 & 0xFFF;
    if ((game_HasSkill((_QWORD*)(v3 + 1744), (unsigned int*)v15_.v15) & 1) !=
        0) {
      v8 = *(_QWORD*)(v3 + 440);
      v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
      if (((1 << v9) & 0xF1) != 0) {
      LABEL_16:
        if (*(_QWORD*)(a2 + 24) != 0) {
          v11 = *(_QWORD*)(a2 + 8) + 760LL * *(unsigned __int8*)(a2 + 17);
          v12 = *(_QWORD*)(v11 + 40);
          if (v12 != 0 &&
              (*(_BYTE*)(*(_QWORD*)(v11 + 24) + 11276LL) & 1) == 0 &&
              (*(_BYTE*)(v11 + 140) & 1) != 0) {
            v15_.v15[0] = *(_QWORD*)(a2 + 24);
            v15_.v15[1] = v12;
            v13 = *(_QWORD*)(a2 + 56);
            v15_.v17 = 0;
            v15_.v15[2] = v13;
            v15_.v15[3] = 0;
            v15_.v16 = 257;
            BonusExpList_7ff4f0(a1, v15_.v15);
          }
        }
      }
    }
  }
  else if (v7 == 3 && *GameData_212ce90[0] != 0) {
    goto LABEL_16;
  }
  return a1;
}

#pragma GCC visibility pop
