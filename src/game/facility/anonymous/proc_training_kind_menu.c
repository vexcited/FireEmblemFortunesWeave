#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_13fa520(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1597c00(_QWORD, _QWORD);
__int64 GameRoutine_15e77c0(_QWORD);
__int64 GameRoutine_18b7c20(_QWORD);
__int64 GameRoutine_18b7f20(_QWORD, _QWORD);
__int64 GameRoutine_18b83a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b8e80(_QWORD, _QWORD);
__int64 GameRoutine_18b90a0(_QWORD);
__int64 GameRoutine_197d8e0(_QWORD, _QWORD);
__int64 GameRoutine_197da00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94e9c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 (*GameData_1faf558[])();
extern __int64 GameData_211c888;
extern __int64 GameData_212c6c0[2];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
__int64 ProcTrainingKindMenu_Unknown84(__int64 a1);
__int64 ProcTrainingKindMenu_Unknown88(__int64 a1);

__int64 ProcTrainingKindMenu_Unknown84(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_197d8e0(a1, 0);
  GameRoutine_197d8e0(a1, 1);
  v2 = v13;
  v13[0] = GameData_1faf558;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94e9c0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  GameRoutine_1597c00(a1 + 848, v11 & 1);
  return GameRoutine_15e77c0(a1);
}

__int64 ProcTrainingKindMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  long double v5;
  double v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  char* v11;
  _QWORD v12[2];
  __int64 v13;
  __int64 v14;
  __int64 v15;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211c888, 0);
    v15 = result;
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      v4 = result;
      v12[0] = "L_Info";
      v12[1] = 6;
      GameRoutine_13fa520(&v13, a1 + 848, v12);
      if (v14 != 0) {
        v7 = std___1___shared_weak_count_lock(v5, v6);
        v8 = v13;
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak(v14);
        }
        if (v7 != 0 && v8 != 0) {
          GameRoutine_18b7c20(v8);
          GameRoutine_18b7f20(v8, *(_QWORD*)(v3 + 32));
          GameRoutine_18b83a0(v8, *(_QWORD*)(v3 + 40), 0);
          v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) & 0x70000;
          v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
          if (v9 != 0) {
            if ((v10 & 0x40000) != 0) {
              v11 = "MID_Menu_Cause_UsedChapter";
            }
            else if ((v10 & 0x20000) != 0) {
              v11 = "MID_Menu_Cause_UsedWeek";
            }
            else if ((v10 & 0x10000) != 0) {
              v11 = "MID_Menu_Cause_UsedDay";
            }
            else {
              v11 = &GameData_1a9f09e;
            }
          }
          else {
            if ((v10 & 0x8000) == 0) {
              GameRoutine_18b90a0(v8);
              goto LABEL_22;
            }
            v11 = "MID_Menu_Cause_NotRideJob";
          }
          GameRoutine_18b8e80(v8, v11);
        LABEL_22:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v7);
          }
          goto LABEL_24;
        }
        if (v7 != 0) {
          goto LABEL_22;
        }
      }
    LABEL_24:
      GameRoutine_197da00(a1, &v15, 0);
      return GameRoutine_197da00(a1, &v15, 1);
    }
  }
  return result;
}

#pragma GCC visibility pop
