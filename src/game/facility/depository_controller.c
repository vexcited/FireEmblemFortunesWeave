#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb6260[])();
extern __int64 GameData_1fb5cb0;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_facility_DepositoryController_Clear(__int64* a1);
__int64 game_facility_DepositoryController_Clear_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

_QWORD* game_facility_DepositoryController_Clear(__int64* a1)
{
  __int64 v1;
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  __int64 v12;

  v1 = *a1;
  a1[2] = a1[1];
  result = v10_.v10;
  v4 = *(_QWORD*)(v1 + 256);
  v3 = *(_QWORD*)(v1 + 264);
  v10_.v10[0] = GameData_1fb6260;
  v10_.v11 = v10_.v10;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v4 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_1fb5cb0, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v12 = v8;
      if (v10_.v11 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v10_.v11 + 48LL))(v10_.v11,
                                                                  &v12) &
           1) != 0) {
        break;
      }
      v4 = *(_QWORD*)(v1 + 256);
      v3 = *(_QWORD*)(v1 + 264);
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v3 - v4) >> 3);
  result = v10_.v11;
  if (v10_.v11 != v10_.v10) {
    if (v10_.v11 != nullptr) {
      v9 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
    }
    return result;
  }
LABEL_12:
  v9 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
}

__int64 game_facility_DepositoryController_Clear_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  _QWORD* v2;
  int v3;
  void (**v4)(_QWORD*, __int64);

  v2 = *(_QWORD**)a2;
  v3 = *(unsigned __int8*)(*(_QWORD*)a2 + 79LL);
  *(_BYTE*)(*(_QWORD*)a2 + 88LL) = 0;
  if (v3 == 1) {
    v4 = (void (**)(_QWORD*, __int64))(*v2 + 520LL);
  }
  else {
    v4 = (void (**)(_QWORD*, __int64))(*v2 + 504LL);
    if (*(_QWORD**)(v2[1] + 336LL) == v2) {
      v4 = (void (**)(_QWORD*, __int64))(*v2 + 512LL);
    }
  }
  (*v4)(v2, a2);
  return 0;
}

#pragma GCC visibility pop
