#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_13fa520(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15e77c0(_QWORD);
__int64 GameRoutine_18b7c20(_QWORD);
__int64 GameRoutine_18b7f20(_QWORD, _QWORD);
__int64 GameRoutine_18b83a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b8e80(_QWORD, _QWORD);
__int64 GameRoutine_18b90a0(_QWORD);
__int64 GameRoutine_192c430(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
extern __int64 GameData_2114370;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
__int64 ProcThermaeThermaeMenu_Unknown84(__int64 a1);
__int64 ProcThermaeThermaeMenu_Unknown88(__int64 a1);

__int64 ProcThermaeThermaeMenu_Unknown84(__int64 a1)
{
  GameRoutine_192c430(a1, 0);
  GameRoutine_192c430(a1, 1);
  return GameRoutine_15e77c0(a1);
}

__int64 ProcThermaeThermaeMenu_Unknown88(__int64 a1)
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

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2114370, 0);
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      v4 = result;
      v12[0] = "L_Info";
      v12[1] = 6;
      GameRoutine_13fa520(&v13, a1 + 848, v12);
      result = v14;
      if (v14 != 0) {
        v7 = std___1___shared_weak_count_lock(v5, v6);
        v8 = v13;
        result = v14;
        if (v14 != 0) {
          result = std___1___shared_weak_count___release_weak(v14);
        }
        if (v7 == 0 || v8 == 0) {
          if (v7 == 0) {
            return result;
          }
          goto LABEL_22;
        }
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
          if ((v10 & 0x20) == 0) {
            result = GameRoutine_18b90a0(v8);
            goto LABEL_22;
          }
          v11 = "MID_Menu_Cause_NotSunday";
        }
        result = GameRoutine_18b8e80(v8, v11);
      LABEL_22:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          return std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
