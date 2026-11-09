#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_972290(__int64 result);
__int64 game_CorpsManager_EachUnit(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 (*GameData_1fb0d30[])();
extern __int64 (*GameData_1fb0f30[])();
extern __int64 (*GameData_1fb1030[])();
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 CorpsManager_971ee0(__int64 a1);
__int64 CorpsManager_9721d0();
__int64 CorpsManager_9723f0(__int64 a1);
__int64 CorpsManager_972680();
__int64 CorpsManager_9726e0(__int64 a1);
__int64 CorpsManager_9728b0();
__int64 CorpsManager_972b20(unsigned int a1);
__int64 CorpsManager_972d20(__int64 result, __int64 a2);
__int64 CorpsManager_972e40(__int64 result, __int64 a2);
__int64 CorpsManager_972f50(__int64 result, __int64 a2);
__int64 CorpsManager_973180(__int64 result, _QWORD* a2);
void CorpsManager_973270(__int64 a1, __int64* a2);
__int64 CorpsManager_973380(__int64 result, __int64 a2);
void CorpsManager_973480(__int64 a1, __int64* a2);

__int64 CorpsManager_971ee0(__int64 a1)
{
  __int64 v1;
  _QWORD v3[4];
  _QWORD* v4;
  __int64 v5;

  v5 = 0;
  if ((a1 & 0x80000000) != 0) {
    return 0;
  }
  v3[0] = GameData_1fb0d30;
  v3[1] = &v5;
  v4 = v3;
  game_CorpsManager_EachUnit(a1, v3);
  if (v4 == v3) {
    v1 = 32;
    goto LABEL_7;
  }
  if (v4 != nullptr) {
    v1 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v4 + v1))((__int64)v4);
  }
  return v5;
}

__int64 CorpsManager_9721d0()
{
  __int64 v0;
  _QWORD v2[4];
  _QWORD* v3;
  int v4;

  v4 = 0;
  v2[0] = GameData_1fb0cb0;
  v2[1] = &v4;
  v3 = v2;
  CorpsManager_9726e0(v2);
  if (v3 == v2) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v0))((__int64)v3);
  }
  return ((v4 & 2) != 0) + (v4 & 1) + ((v4 & 4) != 0) + ((v4 & 8) != 0) +
         ((v4 & 0x10) != 0) + ((v4 & 0x20) != 0) + ((v4 & 0x40) != 0) +
         ((v4 & 0x80) != 0) + (unsigned int)((v4 & 0x100) != 0);
}

__int64 CorpsManager_9723f0(__int64 a1)
{
  __int64 v1;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fb0f30;
  v4 = v3;
  game_CorpsManager_EachUnit(a1, v3);
  if (v4 == v3) {
    v1 = 32;
    goto LABEL_5;
  }
  if (v4 != nullptr) {
    v1 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4 + v1))((__int64)v4);
  }
  GameRoutine_972290(0);
  GameRoutine_972290(1);
  GameRoutine_972290(2);
  GameRoutine_972290(3);
  GameRoutine_972290(4);
  GameRoutine_972290(5);
  GameRoutine_972290(6);
  GameRoutine_972290(7);
  return GameRoutine_972290(8);
}

__int64 CorpsManager_972680()
{
  __int64 result;
  _QWORD v1[2];

  v1[1] = &GameData_1ade186;
  v1[0] = game_HashString(&GameData_1ade186);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

__int64 CorpsManager_9726e0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;

  LODWORD(v16) = 17;
  result = game_UnitPool_GetFirst(&v16);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v15 = v5 - 3;
          while (1) {
            if (v15 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v15 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = (_DWORD*)game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v7 = v3;
      LODWORD(v16) = *v6 & 0xFFF;
      result = game_HasSkill(v4 + 1744, &v16);
      if ((result & 1) == 0 ||
          ((v8 = *(_QWORD*)(v4 + 440)) == 0 ? (v9 = 9)
                                            : (v9 = *(_BYTE*)(v8 + 16)),
           ((1 << v9) & 0xF1) == 0)) {
        v10 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v10 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (*(_QWORD*)(v4 + 392) != v10) {
          v11 = *(_QWORD*)(a1 + 32);
          v16 = v4;
          if (v11 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v16);
        }
      }
      if (v7 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v7 + 432);
      v4 = v7;
      if (v3 == 0) {
        v12 = *(_QWORD*)(v7 + 440);
        v4 = v7;
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v3 = 0;
          v4 = v7;
          if (v13 <= 8) {
            v14 = v13 - 3;
            while (1) {
              if (v14 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v14 == 6) {
                v3 = 0;
                v4 = v7;
                goto LABEL_8;
              }
            }
            v4 = v7;
          }
        }
      }
    }
  }
  return result;
}

__int64 CorpsManager_9728b0()
{
  __int64 v0;
  _QWORD v2[4];
  _QWORD* v3;

  v2[0] = GameData_1fb1030;
  v3 = v2;
  CorpsManager_9726e0(v2);
  if (v3 == v2) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v0))((__int64)v3);
  }
  GameRoutine_972290(0);
  GameRoutine_972290(1);
  GameRoutine_972290(2);
  GameRoutine_972290(3);
  GameRoutine_972290(4);
  GameRoutine_972290(5);
  GameRoutine_972290(6);
  GameRoutine_972290(7);
  return GameRoutine_972290(8);
}

__int64 CorpsManager_972b20(unsigned int a1)
{
  _QWORD v3[2];

  v3[1] = &GameData_1ade186;
  v3[0] = game_HashString(&GameData_1ade186);
  return game_VariableManager_SetFlag(v3, a1);
}

__int64 CorpsManager_972d20(__int64 result, __int64 a2)
{
  if ((*(_BYTE*)(*(_QWORD*)a2 + 418LL) & 0x10) != 0) {
    **(_DWORD**)(result + 8) |= 1 << *(_BYTE*)(*(_QWORD*)a2 + 501LL);
  }
  return result;
}

__int64 CorpsManager_972e40(__int64 result, __int64 a2)
{
  if ((*(_BYTE*)(*(_QWORD*)a2 + 418LL) & 8) != 0) {
    **(_QWORD**)(result + 8) = *(_QWORD*)a2;
  }
  return result;
}

__int64 CorpsManager_972f50(__int64 result, __int64 a2)
{
  int v2;

  if (*(_QWORD*)a2 == *(_QWORD*)(result + 8)) {
    v2 = 0x80000;
  }
  else {
    v2 = 0;
  }
  *(_DWORD*)(*(_QWORD*)a2 + 416LL) =
      *(_DWORD*)(*(_QWORD*)a2 + 416LL) & 0xFFF7FFFF | v2;
  return result;
}

__int64 CorpsManager_973180(__int64 result, _QWORD* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(result + 8);
  if (*v2 == 0) {
    *v2 = *a2;
  }
  return result;
}

void CorpsManager_973270(__int64 a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  *(_BYTE*)(v2 + 501) = -1;
  *(_DWORD*)(v2 + 416) &= 0xFFE7FFFF;
}

__int64 CorpsManager_973380(__int64 result, __int64 a2)
{
  if ((*(_BYTE*)(*(_QWORD*)a2 + 418LL) & 0x10) != 0) {
    **(_DWORD**)(result + 8) |= 1 << *(_BYTE*)(*(_QWORD*)a2 + 501LL);
  }
  return result;
}

void CorpsManager_973480(__int64 a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  *(_BYTE*)(v2 + 501) = -1;
  *(_DWORD*)(v2 + 416) &= 0xFFE7FFFF;
}

#pragma GCC visibility pop
