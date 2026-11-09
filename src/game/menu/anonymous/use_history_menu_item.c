#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_script_map_effect_g_sequence;
__int64 UseHistoryMenuItem_Unknown25(_QWORD* a1);

__int64 UseHistoryMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (game_script_map_effect_g_sequence != 0) {
    *(_DWORD*)(game_script_map_effect_g_sequence + 152) = 13;
  }
  v2 = a1[16];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 328LL))(a1, 0);
  return 13;
}

#pragma GCC visibility pop
