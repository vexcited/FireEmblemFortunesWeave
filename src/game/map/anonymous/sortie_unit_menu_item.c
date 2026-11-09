#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_73bd40(_QWORD, _QWORD);
__int64 game_Unit_CanSwitchMount(_QWORD);
extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
__int64 SortieUnitMenuItem_Unknown58(__int64 a1);
bool SortieUnitMenuItem_Unknown83(_QWORD* a1);
bool SortieUnitMenuItem_Unknown89();

__int64 SortieUnitMenuItem_Unknown58(__int64 a1)
{
  char v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 664LL))(a1) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1) & 1) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1) & 1) != 0) {
    v2 = 0;
  }
  else if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1) != 0) {
    v2 = 1;
  }
  else {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 712LL))(a1) ^ 1;
  }
  return v2 & 1;
}

bool SortieUnitMenuItem_Unknown83(_QWORD* a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  int v7;
  _QWORD v9[6];

  if (((*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1) & 1) != 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 576LL))(a1) & 1) != 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 712LL))(a1) & 1) != 0) {
    return false;
  }
  v2 = a1[11];
  v9[4] = 0;
  if (v2 == 0) {
    return true;
  }
  v3 = *(_DWORD*)(v2 + 592);
  if ((game_Unit_CanSwitchMount(v2) & 1) != 0) {
    v4 = *(_QWORD*)(v2 + 400);
    v5 = *(_QWORD*)(v4 + 88);
    if ((*(_BYTE*)(v2 + 418) & 4) == 0) {
      v4 = *(_QWORD*)(v4 + 88);
    }
    if (v5 != 0 && v4 != 0) {
      v7 = *(unsigned __int8*)(v4 + 417);
      if ((int)v3 <= v7) {
        v3 = v7;
      }
    }
  }
  return (GameRoutine_73bd40(v3, v9) & 1) == 0;
}

bool SortieUnitMenuItem_Unknown89()
{
  unsigned __int64 v0;
  __int64 v1;
  int v2;

  v0 = (unsigned __int64)(GameData_21ca248 - GameData_21ca240) >> 3;
  if ((_DWORD)v0 == 0) {
    return false;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v1 != 0) {
    v2 = 0;
    do {
      v1 = *(_QWORD*)(v1 + 432);
      ++v2;
    } while (v1 != 0);
  }
  else {
    v2 = 0;
  }
  return v2 >= (int)v0;
}

#pragma GCC visibility pop
