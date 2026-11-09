#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1789830(_QWORD, _QWORD);
__int64 GameRoutine_82e3a0(_QWORD);
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
__int64 MemoryRelianceMenuItem_Unknown58();
const char* MemoryRelianceMenuItem_Unknown71();

__int64 MemoryRelianceMenuItem_Unknown58()
{
  __int64* v0;
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((GameRoutine_82e3a0(1) & 1) == 0 && (GameRoutine_82e3a0(3) & 1) == 0) {
    return 0;
  }
  v0 = (__int64*)GameData_21c9ac0;
  v1 = GameData_21c9ac8;
  if (GameData_21c9ac0 == GameData_21c9ac8) {
    return 0;
  }
  while (1) {
    v3 = (__int64*)GameData_21c9ac0;
    v4 = GameData_21c9ac8;
    if (GameData_21c9ac0 != GameData_21c9ac8) {
      break;
    }
  LABEL_5:
    if (++v0 == (__int64*)v1) {
      return 0;
    }
  }
  v5 = *v0;
  while (1) {
    v6 = *v3++;
    if ((GameRoutine_1789830(v5, v6) & 1) != 0) {
      return 1;
    }
    if (v3 == (__int64*)v4) {
      goto LABEL_5;
    }
  }
}

const char* MemoryRelianceMenuItem_Unknown71()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((GameRoutine_82e3a0(1) & 1) == 0 && (GameRoutine_82e3a0(3) & 1) == 0) {
    return "MID_Menu_Cause_NoCleared";
  }
  v0 = (__int64*)GameData_21c9ac0;
  v1 = GameData_21c9ac8;
  if (GameData_21c9ac0 == GameData_21c9ac8) {
    return "MID_Menu_Cause_NotRelianceTalk";
  }
  while (1) {
    v2 = (__int64*)GameData_21c9ac0;
    v3 = GameData_21c9ac8;
    if (GameData_21c9ac0 != GameData_21c9ac8) {
      break;
    }
  LABEL_5:
    if (++v0 == (__int64*)v1) {
      return "MID_Menu_Cause_NotRelianceTalk";
    }
  }
  v4 = *v0;
  while (1) {
    v5 = *v2++;
    if ((GameRoutine_1789830(v4, v5) & 1) != 0) {
      return nullptr;
    }
    if (v2 == (__int64*)v3) {
      goto LABEL_5;
    }
  }
}

#pragma GCC visibility pop
