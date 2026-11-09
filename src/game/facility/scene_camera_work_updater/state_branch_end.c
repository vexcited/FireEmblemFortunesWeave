#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcGameSkipView_instance_;
bool StateBranchEnd_Unknown3();

bool StateBranchEnd_Unknown3()
{
  int v0;
  int v1;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 >
          2) {
    return true;
  }
  v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
  if ((v0 & 8) != 0) {
    v1 = 2;
  }
  else {
    v1 = 3;
  }
  return (v1 & v0) != 0;
}

#pragma GCC visibility pop
