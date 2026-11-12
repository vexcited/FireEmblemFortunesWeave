#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_203fa30[])();
extern __int64 game_UnitListSet_instance_;
void FacilityUnitList_145d160(__int64, __int64);
__int64 ProcSkillEducateSeq_Unknown18();
__int64 ProcSkillEducateSeq_Destructor();

__int64 ProcSkillEducateSeq_Unknown18()
{
  __int64 v0;
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

  v6_.v7 = v6_.v6;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 40);
  v9_.v10 = v9_.v9;
  v6_.v6[0] = GameData_203fa30;
  v9_.v9[0] = GameData_203fa30;
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

__int64 ProcSkillEducateSeq_Destructor()
{
  __int64 v0;
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

  v6_.v7 = v6_.v6;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 40);
  v9_.v10 = v9_.v9;
  v6_.v6[0] = GameData_203fa30;
  v9_.v9[0] = GameData_203fa30;
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
