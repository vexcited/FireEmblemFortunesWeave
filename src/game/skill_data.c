#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HasActiveSkill_843420(_QWORD);
extern __int64* GameData_212c878[6];
__int64 game_SkillData_GetItem_lambda0_Invoke(__int64 result,
                                              unsigned __int16* a2);
__int64 game_SkillData_GetItem_lambda1_Invoke(__int64 result,
                                              unsigned __int16* a2);

__int64 game_SkillData_GetItem_lambda0_Invoke(__int64 result,
                                              unsigned __int16* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;

  v2 = *(_QWORD*)(result + 8);
  v3 = GameData_212c878[0];
  v4 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 24LL);
  if (v2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  v5 = *(_QWORD*)(v4 + 8);
  v6 = *(_QWORD*)(v4 + 16);
  v9 = v2;
  if (((unsigned int)v2 >> 5) + 1 <= (unsigned __int64)((v6 - v5) >> 2) &&
      ((*(_DWORD*)(v5 + 4LL * ((unsigned int)v2 >> 5)) >> v2) & 1) != 0) {
    v8 = result;
    result = game_HasActiveSkill_843420(&v9);
    if ((result & 1) != 0) {
      **(_QWORD**)(v8 + 16) = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *a2);
    }
  }
  return result;
}

__int64 game_SkillData_GetItem_lambda1_Invoke(__int64 result,
                                              unsigned __int16* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;

  v2 = *(_QWORD*)(result + 8);
  v3 = GameData_212c878[0];
  v4 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 24LL);
  if (v2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  v5 = *(_QWORD*)(v4 + 104);
  v6 = *(_QWORD*)(v4 + 112);
  v9 = v2;
  if (((unsigned int)v2 >> 5) + 1 <= (unsigned __int64)((v6 - v5) >> 2) &&
      ((*(_DWORD*)(v5 + 4LL * ((unsigned int)v2 >> 5)) >> v2) & 1) != 0) {
    v8 = result;
    result = game_HasActiveSkill_843420(&v9);
    if ((result & 1) != 0) {
      **(_QWORD**)(v8 + 16) = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *a2);
    }
  }
  return result;
}

#pragma GCC visibility pop
