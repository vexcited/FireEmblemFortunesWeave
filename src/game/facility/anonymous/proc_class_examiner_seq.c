#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_145d8a0(__int64*);
__n128 FacilityUnitList_145d420(__int64, __int64);
extern __int64 (*GameData_203fab0[])();
extern __int64 game_UnitListSet_instance_;
void FacilityUnitList_145e2c0(__int64**, __int64, char);
__int64 ProcClassExaminerSeq_Unknown18();
__int64 ProcClassExaminerSeq_Destructor();

__int64 ProcClassExaminerSeq_Unknown18()
{
  __int64 v0;
  __int64** v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
    char gap40_[8];
    __int64 v6;
  } v4_;

  LOBYTE(v4_.v4[0]) = 0;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v4_.v6 = 0;
  FacilityUnitList_145d420(v0, (__int64)v4_.v4);
  v1 = *(__int64***)(game_UnitListSet_instance_ + 24);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_203fab0;
  FacilityUnitList_145e2c0(v1, (__int64)v4_.v4, 0);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return GameRoutine_145d8a0(*(__int64**)(game_UnitListSet_instance_ + 24));
}

__int64 ProcClassExaminerSeq_Destructor()
{
  __int64 v0;
  __int64** v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
    char gap40_[8];
    __int64 v6;
  } v4_;

  LOBYTE(v4_.v4[0]) = 0;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v4_.v6 = 0;
  FacilityUnitList_145d420(v0, (__int64)v4_.v4);
  v1 = *(__int64***)(game_UnitListSet_instance_ + 24);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_203fab0;
  FacilityUnitList_145e2c0(v1, (__int64)v4_.v4, 0);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return GameRoutine_145d8a0(*(__int64**)(game_UnitListSet_instance_ + 24));
}

#pragma GCC visibility pop
