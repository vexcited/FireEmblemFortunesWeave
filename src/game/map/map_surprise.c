#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Unit_6ca760(__int64, _WORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 GameData_22400f8;
extern __int64 game_map_UnitFlags_instance_;
__int64 game_map_MapSurprise_Update_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_map_MapSurprise_Commit_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 game_map_MapSurprise_Update_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;

  v2 = *a2;
  v6 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x90LL) +
                  game_g_shared_system_skills_ptr + 4) &
       0xFFF;
  result = Unit_6ca760(v2, &v6);
  if ((result & 1) != 0 && GameData_22400f8 != 0 &&
      *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    v4 = *(_QWORD*)(v2 + 440);
    if (v4 != 0 && *(unsigned __int8*)(v4 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v5 = *(unsigned __int8*)(v2 + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) |= 2u;
      }
    }
  }
  return result;
}

__int64 game_map_MapSurprise_Commit_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;

  v2 = *a2;
  v3 = game_g_shared_system_skills_ptr;
  v9 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x90LL) +
                  game_g_shared_system_skills_ptr + 4) &
       0xFFF;
  v4 = Unit_6ca760(v2, &v9);
  v8 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x84LL) + v3) & 0xFFF;
  result = Unit_6ca760(v2, &v8);
  if (((v4 & 1) != 0 || (result & 1) != 0) && GameData_22400f8 != 0 &&
      *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    v6 = *(_QWORD*)(v2 + 440);
    if (v6 != 0 && *(unsigned __int8*)(v6 + 16) <= 8u &&
        game_map_UnitFlags_instance_ != 0) {
      v7 = *(unsigned __int8*)(v2 + 2088);
      if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v7) & 1) != 0) {
        *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v7) |= 2u;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
