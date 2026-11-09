#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1257620(__int64 result, char);
__int64 GameRoutine_715440(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 GameData_212c6c8;
extern __int64 GameData_212c7b0[11];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c770[3];
__int64 ProcSubquestWatcher_Unknown3(__int64 result);

__int64 ProcSubquestWatcher_Unknown3(__int64 result)
{
  __int64 v1;
  unsigned __int16* v2;
  char v3;
  __int64 v4;
  _BOOL4 v5;
  unsigned int v6;
  _QWORD* v7;
  __int64** v8;
  __int64** v9;
  __int64* v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* i;
  __int64 v17;
  __int64* v18;
  __int64* j;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v1 = result;
  if (*(_QWORD*)GameData_212c6c8 == 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v2 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v2 = (unsigned __int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       *(unsigned __int16*)(result + 152) == *v2 &&
           *(unsigned __int16*)(result + 154) == v2[1] &&
           *(unsigned __int16*)(result + 156) == v2[2])) {
    v3 = 0;
  }
  else {
    v4 = *(_QWORD*)v2;
    v3 = 1;
    *(_DWORD*)(result + 160) = *((_DWORD*)v2 + 2);
    *(_QWORD*)(result + 152) = v4;
  }
  if (*GameData_212c770[0] != 0) {
    result = GameRoutine_715440(result);
    v5 = *(_DWORD*)(v1 + 164) != result;
  }
  else {
    v5 = false;
  }
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v7 = (_QWORD*)(*(_QWORD*)GameData_212c7b0[0] + 136LL * v6);
  v8 = (__int64**)v7[12];
  v9 = (__int64**)v7[13];
  while (v8 != v9) {
    v10 = *v8;
    v11 = **v8;
    if (*(_WORD*)(v11 + 288) != 0 && *((_BYTE*)*v8 + 9) == 0) {
      v13 = 0;
      v14 = 8LL * *(unsigned __int16*)(v11 + 288);
      while (1) {
        v22 = *(_QWORD*)(*(_QWORD*)(v11 + 296) + v13);
        result = game_HashString(v22);
        v21 = result;
        if (game_GameModeData_instance_ == 0) {
          break;
        }
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v21);
        if (result == 0 || *(_DWORD*)(result + 32) == 0) {
          break;
        }
        v13 += 8;
        if (v14 == v13) {
          result = GameRoutine_1257620((__int64)v10, 0);
          break;
        }
      }
    }
    ++v8;
  }
  if ((v3 & 1) != 0) {
    v15 = (__int64*)v7[15];
    for (i = (__int64*)v7[16]; v15 != i; result = GameRoutine_1257620(v17, 0)) {
      v17 = *v15++;
    }
  }
  if (v5) {
    v18 = (__int64*)v7[18];
    for (j = (__int64*)v7[19]; v18 != j; result = GameRoutine_1257620(v20, 0)) {
      v20 = *v18++;
    }
  }
  return result;
}

#pragma GCC visibility pop
