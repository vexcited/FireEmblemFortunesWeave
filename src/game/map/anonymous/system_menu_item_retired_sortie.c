#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21eea38;
void SystemMenuItem_Retired_Sortie_Unknown71();

void SystemMenuItem_Retired_Sortie_Unknown71()
{
  if (GameData_21eea38 != 0) {
    *(_DWORD*)(GameData_21eea38 + 152) = 3;
  }
}

#pragma GCC visibility pop
