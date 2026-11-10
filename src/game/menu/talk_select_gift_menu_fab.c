#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c878[6];
__int64
game_menu_TalkSelectGiftMenuFab_HasMenuItem_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
__int64

game_menu_TalkSelectGiftMenuFab_HasMenuItem_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  int v3;
  int v4;

  if (*(_WORD*)(a2 + 4) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * *(unsigned __int16*)(a2 + 4));
    v3 = *(unsigned __int8*)(v2 + 72);
    if ((((0x10000000000LL << v3) | (1LL << *(_BYTE*)(v2 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v4 = *(_DWORD*)(v2 + 336) & 3;
      if (v3 != 15 && v4 == 0) {
        **(_BYTE**)(result + 8) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
