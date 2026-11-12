#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Cursor_730e40(_QWORD, _QWORD);
extern __int64 GameData_21cd130;
bool MapBattleMenuItem_IsDecidable(__int64 a1);
__int64 MapBattleMenuItem_ACall(__int64 a1);
bool MapBattleMenuItem_Unknown58(__int64 a1);
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern char GameData_1a9f09e;
char* MapBattleMenuItem_Unknown69(_QWORD* a1);

bool MapBattleMenuItem_IsDecidable(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 88) + 417LL) & 0x1C) == 0;
}

__int64 MapBattleMenuItem_ACall(__int64 a1)
{
  if (GameData_21cd130 == 0) {
    return 0;
  }
  Cursor_730e40(*(_QWORD*)(GameData_21cd130 + 48), *(_QWORD*)(a1 + 88));
  return 4;
}

bool MapBattleMenuItem_Unknown58(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 88) + 416LL) & 0x400431) == 0;
}

char* MapBattleMenuItem_Unknown69(_QWORD* a1)
{
  __int64 v1;
  int v2;
  __int64 v5;
  __int64 v6;
  bool v7;
  char v8;
  char v9;
  int v10;
  int v11;

  v1 = a1[11];
  v2 = *(_DWORD*)(v1 + 416);
  if ((v2 & 0x400431) != 0) {
  LABEL_2:
    if ((v2 & 0x80) != 0) {
      return "FixedDisable";
    }
    else {
      return "Disable";
    }
  }
  v5 = game_g_shared_system_skills_ptr;
  v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if (game_HasSkill((_QWORD*)(v1 + 1744), &v10) ||
      (*(_WORD*)(v1 + 492) == 0 ? (v7 = *(_BYTE*)(v1 + 496) == 0)
                                : (v7 = false),
       v7 && (v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF,
              game_HasSkill((_QWORD*)(v1 + 1744), &v11)))) {
    v6 = a1[11];
    if (v6 == 0) {
      return "Disable";
    }
    v2 = *(_DWORD*)(v6 + 416);
    goto LABEL_2;
  }
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 576LL))(a1);
  v9 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  if ((v8 & 1) != 0) {
    if ((v9 & 1) != 0 ||
        ((*(__int64 (**)(_QWORD*))(*a1 + 704LL))(a1) & 1) == 0) {
      return "Fixed";
    }
    else {
      return "FixedDisable";
    }
  }
  else if ((v9 & 1) != 0) {
    return &GameData_1a9f09e;
  }
  else {
    return "Disable";
  }
}

#pragma GCC visibility pop
