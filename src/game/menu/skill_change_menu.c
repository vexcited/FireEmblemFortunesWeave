#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15debb0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20506c0;
extern __int64* GameData_212e008[9];
const char* SkillChangeMenu_Unknown49(__int64 a1);
const char* SkillChangeMenu_15b88d0(__int64 a1);
__int64 SkillChangeMenu_15b8900(__int64 a1);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_6cc580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6cc9e0(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84dea0(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 game_Unit_Unknown6ccf10(_QWORD, _QWORD, _QWORD);
__int64 SkillChangeMenu_15debb0(__int64 result, __int64 a2, _WORD* a3,
                                __int64 a4);
__int64 game_menu_SkillChangeMenu_CreateLeftMenu_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2);

const char* SkillChangeMenu_Unknown49(__int64 a1)
{
  if (*(_BYTE*)(a1 + 376) == 2) {
    return "MID_SysMenu_Arts";
  }
  else {
    return "MID_SysMenu_Skill";
  }
}

const char* SkillChangeMenu_15b88d0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 200) == 2) {
    return "MID_SysMenu_Arts";
  }
  else {
    return "MID_SysMenu_Skill";
  }
}

__int64 SkillChangeMenu_15b8900(__int64 a1)
{
  __int64 v1;
  int v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v30;
  int v31;

  v1 = *(_QWORD*)(a1 + 304);
  v3 = *(_DWORD*)(v1 + 640);
  if (v3 < 0) {
    goto LABEL_23;
  }
  v4 = *(char**)(v1 + 232);
  v5 = *(char**)(v1 + 240);
  if (v4 == v5) {
    goto LABEL_23;
  }
  v6 = v5 - v4 - 8;
  v7 = (v6 >> 3) + 1;
  if (v6 >= 0x18) {
    v11 = 0;
    while (v3 != (_DWORD)v11) {
      if (v3 == (_DWORD)v11 + 1) {
        v12 = *((_QWORD*)v4 + 1);
        if (v12 != 0) {
          goto LABEL_21;
        }
        goto LABEL_23;
      }
      if (v3 == (_DWORD)v11 + 2) {
        v4 += 16;
        break;
      }
      if (v3 == (_DWORD)v11 + 3) {
        v12 = *((_QWORD*)v4 + 3);
        if (v12 != 0) {
          goto LABEL_21;
        }
        goto LABEL_23;
      }
      v4 += 32;
      v11 += 4;
      v8 = v11;
      if ((v7 & 0x3FFFFFFFFFFFFFFCLL) == v11) {
        goto LABEL_5;
      }
    }
  }
  else {
    v8 = 0;
  LABEL_5:
    v9 = v7 & 3;
    if (v9 == 0) {
      goto LABEL_23;
    }
    v10 = v3 - v8;
    while (v10 != 0) {
      v4 += 8;
      --v10;
      if (--v9 == 0) {
        goto LABEL_23;
      }
    }
  }
  v12 = *(_QWORD*)v4;
  if (*(_QWORD*)v4 == 0) {
  LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }

LABEL_21:
  v13 = __dynamic_cast(v12, GameData_212e008[0], &GameData_20506c0, 0);

LABEL_24:
  v14 = *(_QWORD*)(a1 + 312);
  v15 = *(_DWORD*)(v14 + 640);
  if ((v15 & 0x80000000) == 0) {
    v16 = *(char**)(v14 + 232);
    v17 = *(char**)(v14 + 240);
    if (v16 != v17) {
      v18 = v17 - v16 - 8;
      v19 = (v18 >> 3) + 1;
      if (v18 >= 0x18) {
        v24 = 0;
        while (v15 != (_DWORD)v24) {
          if (v15 == (_DWORD)v24 + 1) {
            v16 += 8;
            goto LABEL_43;
          }
          if (v15 == (_DWORD)v24 + 2) {
            v16 += 16;
            goto LABEL_43;
          }
          if (v15 == (_DWORD)v24 + 3) {
            v16 += 24;
            goto LABEL_43;
          }
          v16 += 32;
          v24 += 4;
          v20 = v24;
          if ((v19 & 0x3FFFFFFFFFFFFFFCLL) == v24) {
            goto LABEL_28;
          }
        }
        goto LABEL_43;
      }
      v20 = 0;
    LABEL_28:
      v21 = v19 & 3;
      if (v21 != 0) {
        v22 = v15 - v20;
        while (v22 != 0) {
          v16 += 8;
          --v22;
          if (--v21 == 0) {
            goto LABEL_32;
          }
        }
      LABEL_43:
        v23 = *(_QWORD*)v16;
        goto LABEL_44;
      }
    }
  }

LABEL_32:
  v23 = 0;

LABEL_44:
  v25 = __dynamic_cast(v23, GameData_212e008[0], &GameData_20506c0, 0);
  v26 = *(_QWORD*)(a1 + 360);
  v31 = *(_DWORD*)(v13 + 108);
  v27 = *(_DWORD*)(v25 + 108);
  v28 = *(unsigned __int8*)(a1 + 376);
  v30 = v27;
  return GameRoutine_15debb0(v28, v26, &v31, &v30);
}

__int64 game_menu_SkillChangeMenu_CreateLeftMenu_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 SkillChangeMenu_15debb0(__int64 result, __int64 a2, _WORD* a3,
                                __int64 a4)
{
  int v5;

  if (a2 != 0) {
    if ((*a3 & 0xFFF) != 0) {
      if ((unsigned __int8)result == 2) {
        if ((UnitSkillList_84dea0(a2 + 1168, a3, a4) & 1) != 0) {
          v5 = *(_DWORD*)(a2 + 416);
          if ((v5 & 0x10000000) == 0) {
            *(_DWORD*)(a2 + 416) = v5 | 0x10000000;
            GameRoutine_6c51e0(a2);
            GameRoutine_6c6da0(a2);
            GameRoutine_6c6ec0(a2);
            *(_DWORD*)(a2 + 416) &= ~0x10000000u;
          }
        }
      }
      else {
        game_Unit_Unknown6ccf10(a2, a3, a4);
      }
    }
    else if ((unsigned __int8)result == 2) {
      GameRoutine_6cc580(a2, a4, 1);
    }
    else {
      GameRoutine_6cc9e0(a2, a4, 1);
    }
    result = game_Unit_Unknown6c4610(a2);
    *(_WORD*)(a2 + 20) |= 1u;
  }
  return result;
}

#pragma GCC visibility pop
