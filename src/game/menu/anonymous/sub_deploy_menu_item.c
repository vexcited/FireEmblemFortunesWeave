#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159ede0(void);
__int64 GameRoutine_185d480(_QWORD);
__int64 GameRoutine_1860cc0(_QWORD);
__int64 SubDeployMenuItem_Unknown25(_QWORD* a1);
__int64 SubDeployMenuItem_Unknown58(__int64 a1);
__int64 SubDeployMenuItem_Unknown71(__int64 a1);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
extern __int64 (*GameData_20ee150[])();
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319c8[3];
extern int game_g_shared_system_skills;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
bool SubDeployMenuItem_159ede0(_BOOL8 result);
__int64 SubDeployMenuItem_185cd60(_QWORD* a1);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

bool SubDeployMenuItem_159ede0(_BOOL8 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  int v24;

  if (result) {
    v1 = (_QWORD*)result;
    v2 = GameRoutine_820d50(7);
    if (game_GameModeData_instance_ != 0) {
      v3 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
      if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
        goto LABEL_20;
      }
    }
    if ((GameRoutine_822320(3) & 1) == 0) {
      goto LABEL_20;
    }
    v4 = v1[218];
    v5 = v1[219] - v4;
    v23 = game_g_shared_system_skills & 0xFFF;
    v6 = ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) &
         0x7F;
    if (v6 + 1 <= v5 >> 2 &&
        ((*(_DWORD*)(v4 + 4LL * (unsigned int)v6) >>
          game_g_shared_system_skills) &
         1) != 0 &&
        (game_HasActiveSkill_843420(&v23, v1 + 218) & 1) != 0) {
      v7 = v1[55];
      v8 = v7 != 0 ? *(_BYTE*)(v7 + 16) : 9;
      if (((1 << v8) & 0xF1) != 0) {
        goto LABEL_20;
      }
    }
    v9 = v1[55];
    if (v9 == 0 || ((v10 = *(unsigned __int8*)(v9 + 16), v11 = v10 > 7,
                     v12 = (1 << v10) & 0x91, !v11)
                        ? (v13 = v12 == 0)
                        : (v13 = true),
                    v13 || *(_BYTE*)(v1[50] + 96LL) != 1)) {
    LABEL_20:
      v14 = GameRoutine_820d50(6);
      if (game_GameModeData_instance_ != 0) {
        v15 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v14);
        if (v15 != 0 && *(_DWORD*)(v15 + 32) != 0) {
          return false;
        }
      }
      if ((GameRoutine_822320(1) & 1) == 0) {
        return false;
      }
      v16 = v1[218];
      v17 = v1[219] - v16;
      v24 = game_g_shared_system_skills & 0xFFF;
      v18 = ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) &
            0x7F;
      if (v18 + 1 <= v17 >> 2 &&
          ((*(_DWORD*)(v16 + 4LL * (unsigned int)v18) >>
            game_g_shared_system_skills) &
           1) != 0 &&
          (game_HasActiveSkill_843420(&v24, v1 + 218) & 1) != 0) {
        v19 = v1[55];
        v20 = v19 != 0 ? *(_BYTE*)(v19 + 16) : 9;
        if (((1 << v20) & 0xF1) != 0) {
          return false;
        }
      }
      v21 = v1[55];
      if (v21 == 0) {
        return false;
      }
      else {
        v22 = *(unsigned __int8*)(v21 + 16);
        result = false;
        if (v22 <= 7 && ((1 << v22) & 0x91) != 0) {
          return *(_BYTE*)(v1[50] + 96LL) == 2;
        }
      }
    }
    else {
      return true;
    }
  }
  return result;
}

__int64 SubDeployMenuItem_Unknown25(_QWORD* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    v2 = *(unsigned __int8*)(*(_QWORD*)(a1[18] + 400LL) + 96LL);
    if (v2 == 2) {
      v6 = a1[1];
      if (*(_QWORD*)(v6 + 152) != 0) {
        v7 = *(_QWORD*)(v6 + 152);
      }
      else {
        v7 = a1[1];
      }
      GameRoutine_1860cc0(v7);
      return 9;
    }
    if (v2 == 1) {
      v3 = a1[1];
      if (*(_QWORD*)(v3 + 152) != 0) {
        v4 = *(_QWORD*)(v3 + 152);
      }
      else {
        v4 = a1[1];
      }
      GameRoutine_185d480(v4);
      return 9;
    }
  }
  return 1;
}

__int64 SubDeployMenuItem_Unknown58(__int64 a1)
{
  char v2;

  if (*(_QWORD*)(a1 + 144) != 0 && (GameRoutine_159ede0() & 1) != 0) {
    v2 = *(_BYTE*)(a1 + 82);
  }
  else {
    v2 = 0;
  }
  return v2 & 1;
}

__int64 SubDeployMenuItem_Unknown71(__int64 a1)
{
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 144) + 400LL) + 96LL) == 2) {
    return 7;
  }
  else {
    return 8;
  }
}

__int64 SubDeployMenuItem_185cd60(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (*(__int64 (**)(_QWORD*))(*a1 + 1168LL))(a1),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((result & 1) != 0 || a1[133] == 0) {
    return result;
  }
  v5 = a1[29];
  v4 = a1[30];
  result = (__int64)v12_.v12;
  v12_.v12[0] = GameData_20ee150;
  v12_.v12[1] = a1;
  v12_.v13 = v12_.v12;
  if (v4 == v5) {
    goto LABEL_14;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  v8 = GameData_21319c8[0];
  do {
    v9 = *(_QWORD*)(v5 + 8 * v6);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v7, v8, 0),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v10 == 0) {
        goto LABEL_5;
      }
      v14 = v10;
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12_.v13 + 48LL))(v12_.v13,
                                                                  &v14) &
           1) != 0) {
        break;
      }
      v5 = a1[29];
      v4 = a1[30];
    }
  LABEL_5:
    ++v6;
  } while (v6 < (v4 - v5) >> 3);
  result = (__int64)v12_.v13;
  if (v12_.v13 != v12_.v12) {
    if (v12_.v13 != nullptr) {
      v11 = 40;
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v11))(result,
                                                                         v3);
    }
    return result;
  }
LABEL_14:
  v11 = 32;
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v11))(result,
                                                                     v3);
}

#pragma GCC visibility pop
