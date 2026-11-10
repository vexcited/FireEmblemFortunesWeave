#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FacilityUnitList_145d160(__int64*, __int64);
extern __int64 (*GameData_203f830[])();
extern __int64 game_UnitListSet_instance_;
__int64 ProcPerchSeq_Unknown18();
__int64 ProcPerchSeq_Destructor();

__int64 ProcPerchSeq_Unknown18()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8[16];
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v0 = *(__int64**)(game_UnitListSet_instance_ + 24);
  v6_.v7 = v6_.v6;
  v6_.v6[0] = GameData_203f830;
  v9_.v9[0] = GameData_203f830;
  v9_.v10 = v9_.v9;
  v8[0] = 1;
  FacilityUnitList_145d160(v0, (__int64)v8);
  v1 = v9_.v10;
  v9_.v10 = nullptr;
  if (v1 == v9_.v9) {
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v1 + v2))((__int64)v1);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_10:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 ProcPerchSeq_Destructor()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8[16];
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v0 = *(__int64**)(game_UnitListSet_instance_ + 24);
  v6_.v7 = v6_.v6;
  v6_.v6[0] = GameData_203f830;
  v9_.v9[0] = GameData_203f830;
  v9_.v10 = v9_.v9;
  v8[0] = 1;
  FacilityUnitList_145d160(v0, (__int64)v8);
  v1 = v9_.v10;
  v9_.v10 = nullptr;
  if (v1 == v9_.v9) {
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v1 + v2))((__int64)v1);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_10:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

#pragma GCC visibility pop
