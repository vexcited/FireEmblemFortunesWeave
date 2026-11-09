#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_188aa00(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_9b8fe0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_1762890(__int64, unsigned int);
__int64 GameRoutine_1889ae0(_QWORD, _QWORD);
__int64 GameRoutine_188ab20(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 TelopDivinationResult_Unknown57(__int64 result);

__int64 TelopDivinationResult_Unknown57(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  signed int v12;
  _QWORD v13[2];
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(result + 1168);
  v2 = result;
  v3 = *(_QWORD*)(v1 + 64);
  if (v3 == 0) {
    goto LABEL_24;
  }
  v4 = GameRoutine_1760e40(result, 0);
  v13[0] = "L_Txt";
  v13[1] = 5;
  GameRoutine_9b8fe0(&v14, v4, v13);
  result = v15;
  if (v15 != 0) {
    v5 = std___1___shared_weak_count_lock(v15);
    v6 = v14;
    result = v15;
    if (v15 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v5 != 0 && v6 != 0) {
      v7 = *msg_MessageManager_instance__ptr[0];
      v8 = GameRoutine_6ed030(v3);
      if (v8 != 0) {
        v9 = v8;
      }
      else {
        v9 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(v7 + 14704, v9);
      GameRoutine_188ab20(v6, "MID_Sys_Result_Msg_GetReward");
      GameRoutine_188aa00(&v14, v6, 0);
      result = v15;
      if (v15 != 0) {
        v10 = std___1___shared_weak_count_lock(v15);
        v11 = v14;
        result = v15;
        if (v15 != 0) {
          result = std___1___shared_weak_count___release_weak();
        }
        if (v10 != 0 && v11 != 0) {
          GameRoutine_1889ae0(v11, v3);
          result =
              (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
          goto LABEL_19;
        }
        if (v10 != 0) {
        LABEL_19:
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            result = std___1___shared_weak_count___release_weak();
          }
        }
      }
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak();
      }
      goto LABEL_23;
    }
    if (v5 != 0) {
      goto LABEL_21;
    }
  }

LABEL_23:
  v1 = *(_QWORD*)(v2 + 1168);

LABEL_24:
  v12 = *(_DWORD*)(v1 + 60);
  if (v12 >= 1) {
    return GameRoutine_1762890(v2, v12);
  }
  return result;
}

#pragma GCC visibility pop
