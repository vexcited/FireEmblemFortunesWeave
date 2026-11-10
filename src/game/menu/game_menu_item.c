#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
const char* GameMenuItem_16eaad0(__int64* a1);

const char* GameMenuItem_16eaad0(__int64* a1)
{
  char v2;
  __int64 v3;
  char v5;
  __int64 v6;
  char v7;
  const char* v8;
  char* v9;

  v2 = (*(__int64 (**)(__int64*))(*a1 + 496))(a1);
  v3 = *a1;
  if ((v2 & 1) != 0) {
    if (((*(__int64 (**)(__int64*))(v3 + 480))(a1) & 1) != 0) {
      return "EquipEmpty";
    }
    v7 = (*(__int64 (**)(__int64*))(*a1 + 464))(a1);
    v8 = "EquipDisable";
    v9 = "Equip";
  }
  else {
    v5 = (*(__int64 (**)(__int64*))(v3 + 488))(a1);
    v6 = *a1;
    if ((v5 & 1) != 0) {
      v7 = (*(__int64 (**)(__int64*))(v6 + 464))(a1);
      v8 = "FixedDisable";
      v9 = "Fixed";
    }
    else {
      if (((*(__int64 (**)(__int64*))(v6 + 480))(a1) & 1) != 0) {
        return "Empty";
      }
      v7 = (*(__int64 (**)(__int64*))(*a1 + 464))(a1);
      v8 = "Disable";
      v9 = &GameData_1a9f09e;
    }
  }
  if ((v7 & 1) != 0) {
    return v9;
  }
  else {
    return v8;
  }
}

#pragma GCC visibility pop
