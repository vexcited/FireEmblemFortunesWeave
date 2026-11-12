#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f960e8[])();
extern __int64* GameData_212ce90[3];
extern _QWORD GameData_212d330;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ea9d0(_QWORD);
__int64 GameRoutine_764060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7645e0(void);
__int64 GameRoutine_7e74e0(_QWORD);
__int64 GameRoutine_84cb50(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD, _QWORD);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_7e74e0(__int64);
__int64 GameRoutine_975940_alt1(__int64) __asm__("GameRoutine_975940");
__int64 Situation_764060(__int64, __int64);
__int64 Situation_7645e0(__int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_GetFirst(int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 game_GameModeData_instance_;
__int64 GameHr_99c360(__int64 a1);

__int64 GameHr_99c360(__int64 a1)
{
  char v1;
  __int64* v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  _DWORD* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  __int64 v32;
  int v33;

  v2 = (__int64*)(a1 + 56);
  v1 = *(_BYTE*)(a1 + 56);
  *(_WORD*)(a1 + 4) = 0;
  *(_DWORD*)a1 = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(a1 + 72) = 0;
    *(_QWORD*)(a1 + 64) = 0;
  }
  else {
    *(_WORD*)(a1 + 56) = 0;
  }
  *(_BYTE*)(a1 + 84) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 6) = 0;
  *(_WORD*)(a1 + 88) = 0;
  result = *GameData_212ce90[0];
  if (*GameData_212ce90[0] == 0) {
    return result;
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    *(_BYTE*)a1 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    *(_BYTE*)(a1 + 1) = *(_DWORD*)(v5 + 60);
    *(_BYTE*)(a1 + 2) = *(_DWORD*)(v5 + 64);
    *(_BYTE*)(a1 + 3) = *(_DWORD*)(v5 + 68);
    v5 = *(_QWORD*)(v5 + 16);
  }
  else {
    *(_DWORD*)a1 = 0;
  }
  *(_QWORD*)(a1 + 16) = v5;
  *(_WORD*)(a1 + 4) = *(_WORD*)(result + 26);
  v6 = Situation_7645e0(result);
  *(_DWORD*)(a1 + 6) = v6;
  v32 = 0;
  v33 = -1;
  v30_.v31 = v30_.v30;
  v30_.v30[0] = GameData_1f960e8;
  v30_.v30[1] = &v33;
  v30_.v30[2] = &v32;
  Situation_764060(v6, (__int64)v30_.v30);
  if (v30_.v31 == v30_.v30) {
    v7 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v30_.v31 + v7))((__int64)v30_.v31);
LABEL_13:
  v8 = v32;
  if (v32 != 0) {
    v9 = *(_QWORD*)(v32 + 392);
    *(_QWORD*)(a1 + 24) = v9;
    if (v9 != 0) {
      v10 = *(_QWORD*)(v9 + 288);
      if (v10 != 0) {
        v10 = GameRoutine_975940_alt1(v10);
      }
    }
    else {
      v10 = 0;
    }
    *(_QWORD*)(a1 + 32) = v10;
    *(_QWORD*)(a1 + 40) = GameHr_7e74e0(v8);
    if (*(_BYTE*)(v8 + 2136) != 0) {
      if (a1 + 48 != v8 + 2104) {
        v11 = *(unsigned __int8*)(v8 + 2112);
        if ((*(_BYTE*)v2 & 1) != 0) {
          v14 = (v11 & 1) == 0;
          v15 = v11 >> 1;
          if (v14) {
            v16 = v8 + 2113;
          }
          else {
            v16 = *(_QWORD*)(v8 + 2128);
          }
          if (v14) {
            v17 = v15;
          }
          else {
            v17 = *(_QWORD*)(v8 + 2120);
          }
          SpineModel_64dde0(v2, v16, v17);
        }
        else if ((v11 & 1) != 0) {
          GameRoutine_64df20_alt1(v2, *(_QWORD*)(v8 + 2128),
                                  *(_QWORD*)(v8 + 2120));
        }
        else {
          v12 = *(_QWORD*)(v8 + 2112);
          v13 = *(_QWORD*)(v8 + 2128);
          v2[1] = *(_QWORD*)(v8 + 2120);
          v2[2] = v13;
          *v2 = v12;
        }
      }
      *(_BYTE*)(a1 + 80) = *(_BYTE*)(v8 + 2136);
      *(_BYTE*)(a1 + 81) = *(_BYTE*)(v8 + 2137);
      *(_BYTE*)(a1 + 82) = *(_BYTE*)(v8 + 2138);
      *(_BYTE*)(a1 + 83) = *(_BYTE*)(v8 + 2139);
      *(_BYTE*)(a1 + 84) = *(_BYTE*)(v8 + 2140);
    }
  }
  LODWORD(v30_.v30[0]) = 241;
  result = game_UnitPool_GetFirst((int*)v30_.v30);
  if (result != 0) {
    v18 = *(_QWORD*)(result + 432);
    v19 = result;
    if (v18 == 0) {
      v18 = *(_QWORD*)(result + 440);
      if (v18 != 0) {
        v20 = *(unsigned __int8*)(v18 + 16);
        if (v20 <= 8) {
          while (1) {
            v29 = v20 + 1;
            if (((2 << v20) & 0xF0) != 0) {
              v18 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v20 + 1) + 556000);
              if (v18 != 0) {
                break;
              }
            }
            v20 = v29;
            if (v29 == 9) {
              goto LABEL_36;
            }
          }
        }
        else {
        LABEL_36:
          v18 = 0;
        }
      }
    }
    v21 = (_DWORD*)game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_39:
      v22 = v18;
      LODWORD(v30_.v30[0]) = *v21 & 0xFFF;
      result = game_HasSkill((_QWORD*)(v19 + 1744), (unsigned int*)v30_.v30);
      if ((result & 1) == 0 ||
          ((v23 = *(_QWORD*)(v19 + 440)) == 0 ? (v24 = 9)
                                              : (v24 = *(_BYTE*)(v23 + 16)),
           ((1 << v24) & 0xF1) == 0)) {
        v25 = *(_DWORD*)(v19 + 416);
        if ((v25 & 8) == 0) {
          ++*(_BYTE*)(a1 + 88);
          v25 = *(_DWORD*)(v19 + 416);
        }
        if ((v25 & 0x20) != 0) {
          ++*(_BYTE*)(a1 + 89);
        }
      }
      if (v22 == 0) {
        break;
      }
      v18 = *(_QWORD*)(v22 + 432);
      v19 = v22;
      if (v18 == 0) {
        v26 = *(_QWORD*)(v22 + 440);
        v19 = v22;
        if (v26 != 0) {
          v27 = *(unsigned __int8*)(v26 + 16);
          v18 = 0;
          v19 = v22;
          if (v27 <= 8) {
            while (1) {
              v28 = v27 + 1;
              if (((2 << v27) & 0xF0) != 0) {
                v18 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v27 + 1) + 556000);
                if (v18 != 0) {
                  break;
                }
              }
              ++v27;
              if (v28 == 9) {
                v18 = 0;
                v19 = v22;
                goto LABEL_39;
              }
            }
            v19 = v22;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
