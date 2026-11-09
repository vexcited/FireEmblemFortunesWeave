#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
__int64 TrasureChip_Unknown4(__int64 result, __int64 a2);

__int64 TrasureChip_Unknown4(__int64 result, __int64 a2)
{
  const char* v2;

  if (a2 != 0) {
    if (*(_BYTE*)(result + 36) != 0) {
      v2 = "Battle_MiniMap_Object_Treasure";
    }
    else {
      v2 = "Battle_MiniMap_Object_TreasureOpened";
    }
    return GameRoutine_136a920(ui_Manager_instance_ + 1264, a2, 0, 8, v2);
  }
  return result;
}

#pragma GCC visibility pop
