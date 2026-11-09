#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9cac4;
extern __int64 GameData_212dbb8[9];
extern __int64 game_GameModeData_instance_;
__int64 ProcTitleSeq_Unknown3(__int64 a1);

__int64 ProcTitleSeq_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  char v11;
  __int64 v12;
  _QWORD v13[2];

  v2 = GameData_212dbb8[0];
  v3 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0 &&
      ((v4 = *(_DWORD*)(v3 + 232)) & 0x400) != 0) {
    v5 = 1;
    *(_DWORD*)(v3 + 232) = v4 & 0xFFFFFBFF;
  }
  else {
    v5 = 0;
  }
  v13[1] = &GameData_1a9cac4;
  result = game_HashString(&GameData_1a9cac4);
  v13[0] = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v13);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      v8 = *(_QWORD*)(a1 + 8);
      v9 = *(_QWORD*)(a1 + 16);
      if (v8 <= v9) {
        while (*(_BYTE*)v9 != 2) {
          v9 -= 64LL;
          if (v8 > v9) {
            return result;
          }
        }
        v10 = *(_DWORD*)(v9 + 32) == 4;
        v11 = v5 ^ 1;
        if (!v10) {
          v11 = 1;
        }
        if ((v11 & 1) == 0) {
          result = *(_QWORD*)(a1 + 192);
          *(_QWORD*)(a1 + 152) = 0;
          *(_QWORD*)(a1 + 192) = 0;
          if (result == a1 + 160) {
            v12 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_20;
            }
            v12 = 40;
          }
          result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v12))(
              result, v7);
          v8 = *(_QWORD*)(a1 + 8);
        LABEL_20:
          if (v8 == 0) {
            goto LABEL_28;
          }
          while (1) {
            if (*(_BYTE*)v8 == 2) {
              if (*(_DWORD*)(v8 + 32) == 8) {
                *(_QWORD*)(a1 + 16) = v8;
                *(_WORD*)(a1 + 136) &= ~0x80u;
              LABEL_28:
                if (*(_QWORD*)v2 != 0) {
                  *(_DWORD*)(*(_QWORD*)v2 + 232LL) |= 0x800u;
                }
                return result;
              }
            }
            else if (*(_BYTE*)v8 == 0) {
              goto LABEL_28;
            }
            v8 += 64LL;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
