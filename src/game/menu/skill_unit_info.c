#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int GameData_1bf52dc[];
const char* SkillUnitInfo_Unknown36(__int64 a1);
__int64 GameRoutine_6c9540(_QWORD, _QWORD);
__int64 GameRoutine_6c9ab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 GameData_21c99b0;
__int64
game_menu_SkillUnitInfo_OnAddArtsMenuItem_lambda0_Invoke(__int64 a1,
                                                         unsigned int* a2);
__int64 game_menu_SkillUnitInfo_OnAddSpecialMenuItem_lambda0_Invoke(__int64 a1,
                                                                    int* a2);

const char* SkillUnitInfo_Unknown36(__int64 a1)
{
  if ((unsigned int)*(unsigned __int8*)(a1 + 1072) - 2 > 4) {
    return "L_MenuItem_Skill";
  }
  else {
    return (char*)GameData_1bf52dc +
           GameData_1bf52dc[(unsigned __int8)(*(_BYTE*)(a1 + 1072) - 2)];
  }
}

__int64

game_menu_SkillUnitInfo_OnAddArtsMenuItem_lambda0_Invoke(__int64 a1,
                                                         unsigned int* a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  _WORD* v13;
  unsigned int v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1064);
  v15 = *a2;
  if (v4 != 0 && (v5 = v3 & 0xFFF, (v3 & 0xFFF) != 0) &&
      (v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5),
       (GameRoutine_6fc510(v6) & 1) == 0) &&
      (*(_BYTE*)(v6 + 273) == 0 ||
       ((v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5),
         v8 = *(unsigned __int8*)(v7 + 104), v9 = *(unsigned __int8*)(v7 + 273),
         (unsigned int)(v8 - 5) >= 2)
            ? (v10 = 0)
            : (v10 = (v3 >> 19) & 0x1F),
        (int)(v10 - ((v3 >> 12) & 0x7F) + v9) >= 1)) &&
      (GameRoutine_6fc7a0(v6, v4 + 1840) & 1) != 0) {
    LOBYTE(v11) = 1;
    v12 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5);
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) &
         1) != 0 &&
        *(_QWORD*)(v12 + 576) == 0 && *(_WORD*)(v12 + 136) != 0) {
      v13 = *(_WORD**)(v2 + 1064);
      if (v13[414] != 0) {
        v11 = GameRoutine_6c9ab0(v13, &v15, v13 + 414);
        v13 = *(_WORD**)(v2 + 1064);
      }
      else {
        v11 = 0;
      }
      if (v13[418] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 418);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[422] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 422);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[426] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 426);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[430] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 430);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[434] != 0) {
        LOBYTE(v11) = GameRoutine_6c9ab0(v13, &v15, v13 + 434) | v11;
      }
    }
  }
  else {
    LOBYTE(v11) = 0;
  }
  return v11 & 1;
}

__int64 game_menu_SkillUnitInfo_OnAddSpecialMenuItem_lambda0_Invoke(__int64 a1,
                                                                    int* a2)
{
  _QWORD* v2;
  int v3;
  char v4;
  int v6;

  v2 = *(_QWORD**)(a1 + 16);
  v3 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL) + 592LL);
  v6 = *a2;
  if (v3 <= 1) {
    v4 = GameRoutine_6c9540(*v2, &v6);
  }
  else {
    v4 = 0;
  }
  return v4 & 1;
}

#pragma GCC visibility pop
