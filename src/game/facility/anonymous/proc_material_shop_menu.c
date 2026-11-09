#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afce98;
void* ProcMaterialShopMenu_Unknown67(__int64 a1);

void* ProcMaterialShopMenu_Unknown67(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1152LL))(a1);
  if ((unsigned int)strcmp(v1, "MID_Shop_Market") != 0) {
    return nullptr;
  }
  else {
    return &GameData_1afce98;
  }
}

#pragma GCC visibility pop
