#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1871dc0(_QWORD, _QWORD);
const char* ItemShopTopMenuItem_Unknown3(__int64 a1);
__int64 ItemShopTopMenuItem_Unknown25(_QWORD* a1);
const char* ItemShopTopMenuItem_Unknown75(__int64 a1);

const char* ItemShopTopMenuItem_Unknown3(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 96) & 0xFD) != 0) {
    return "MID_BlacksmithShop_Repair";
  }
  else {
    return "MID_BlacksmithShop_Refine";
  }
}

__int64 ItemShopTopMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_1871dc0(v3, a1 + 12);
  return 9;
}

const char* ItemShopTopMenuItem_Unknown75(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 96) & 0xFD) != 0) {
    return "MID_BlacksmithShop_Repair_Help";
  }
  else {
    return "MID_BlacksmithShop_Refine_Help";
  }
}

#pragma GCC visibility pop
