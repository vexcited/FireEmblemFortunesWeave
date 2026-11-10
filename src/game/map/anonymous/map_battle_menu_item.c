#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Cursor_730e40(_QWORD, _QWORD);
extern __int64 GameData_21cd130;
bool MapBattleMenuItem_IsDecidable(__int64 a1);
__int64 MapBattleMenuItem_ACall(__int64 a1);
bool MapBattleMenuItem_Unknown58(__int64 a1);

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

#pragma GCC visibility pop
