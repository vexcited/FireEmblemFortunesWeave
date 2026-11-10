#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
const char* ItemShopMenuItem_Account_1705250(_BYTE* a1);

const char* ItemShopMenuItem_Account_1705250(_BYTE* a1)
{
  char v3;
  __int64 v4;
  char v5;
  __int64 v6;
  char v7;
  const char* v8;
  char* v9;

  if ((a1[88] & 1) != 0) {
    return "Multiple";
  }
  v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 496LL))(a1);
  v4 = *(_QWORD*)a1;
  if ((v3 & 1) != 0) {
    if (((*(__int64 (**)(_BYTE*))(v4 + 480))(a1) & 1) != 0) {
      return "EquipEmpty";
    }
    v7 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 464LL))(a1);
    v8 = "EquipDisable";
    v9 = "Equip";
  }
  else {
    v5 = (*(__int64 (**)(_BYTE*))(v4 + 488))(a1);
    v6 = *(_QWORD*)a1;
    if ((v5 & 1) != 0) {
      v7 = (*(__int64 (**)(_BYTE*))(v6 + 464))(a1);
      v8 = "FixedDisable";
      v9 = "Fixed";
    }
    else {
      if (((*(__int64 (**)(_BYTE*))(v6 + 480))(a1) & 1) != 0) {
        return "Empty";
      }
      v7 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 464LL))(a1);
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
