#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 ExchangeMenuItem_Unknown58(__int64 a1);

__int64 ExchangeMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  if ((_DWORD)v1 == -1) {
    v3 = &game_g_empty_item;
  }
  else {
    v3 = (__int64*)(v2 + 8 * v1 + 828);
  }
  if ((*((_BYTE*)v3 + 3) & 0x10) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v3);
  if ((*(_BYTE*)(v4 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v4 + 72)) & 0xE01F) == 0) {
    return 0;
  }
  else {
    return GameRoutine_157b5c0(v2, (unsigned __int16*)v3);
  }
}

#pragma GCC visibility pop
