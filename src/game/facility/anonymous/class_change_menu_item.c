#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_95eaa0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_143d0a0(_QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a8d4b3;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c868;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 ClassChangeMenuItem_Unknown58();
__int64 ClassChangeMenuItem_Unknown73(__int64 a1);
__int64 ClassChangeMenuItem_Unknown70(_QWORD* a1, __int64 a2);

__int64 ClassChangeMenuItem_Unknown58()
{
  __int64 v0;
  __int64 v1;
  bool v2;
  __int64 v3;

  v0 = GameRoutine_820d50(0);
  v2 = game_GameModeData_instance_ == 0 ||
       (v1 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
       *(_DWORD*)(v1 + 32) == 0;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  return (unsigned __int8)GameRoutine_143d0a0(&GameData_1a8d4b3, v3) & v2 & 1;
}

__int64 ClassChangeMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD v7[2];
  char v8;
  int v9;
  int v10;
  char v11;
  __int64 v12;
  _BYTE v13[168];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370(v13, v4, "MID_TempleMenu_ClassChange_Help");
  v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v11 = 0;
  v12 = 0;
  v7[0] = "Tutorial";
  v7[1] = "MID_KeyHelp_Tutorial";
  v8 = 1;
  v9 = 10;
  v10 = v5;
  GameRoutine_16ef210(v13, v7);
  return GameRoutine_16ee520(v13);
}

__int64 ClassChangeMenuItem_Unknown70(_QWORD* a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned int v5;
  __int64 result;
  __int64 var4;

  a1[11] = a2;
  *((_BYTE*)a1 + 82) = 0;
  v2 = a1;
  v3 = *(_QWORD**)(*GameData_212c868 + 64);
  v4 = *(_QWORD**)(*GameData_212c868 + 72);
  if (v3 != v4) {
    while (1) {
      if (*(unsigned __int8*)(*v3 + 49LL) == *((unsigned __int8*)v2 + 96)) {
        a1 = GameRoutine_95eaa0(&var4, v2[11], *v3);
        if ((var4 & 0x201) == 0x200) {
          break;
        }
      }
      if (++v3 == v4) {
        goto LABEL_7;
      }
    }
    *((_BYTE*)v2 + 82) = 1;
  }

LABEL_7:
  v5 = *((unsigned __int8*)v2 + 96);
  result = GameRoutine_960100(a1);
  *((_BYTE*)v2 + 81) = v5 <= (unsigned __int8)result;
  return result;
}

#pragma GCC visibility pop
