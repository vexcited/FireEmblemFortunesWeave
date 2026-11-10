#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20a7440[])();
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_facility_SellController_Clear(__int64* a1);
__int64 game_facility_SellController_Clear_lambda0_Invoke(__int64 a1,
                                                          __int64 a2);

_QWORD* game_facility_SellController_Clear(__int64* a1)
{
  __int64 v1;
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  v1 = *a1;
  a1[2] = a1[1];
  result = v12;
  v4 = *(_QWORD*)(v1 + 256);
  v3 = *(_QWORD*)(v1 + 264);
  v12[0] = GameData_20a7440;
  v13 = v12;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  v7 = GameData_212e010[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v5);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v6, v7, 0);
      if (v9 == 0) {
        goto LABEL_3;
      }
      v14 = v9;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, v10);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v14) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(v1 + 256);
      v3 = *(_QWORD*)(v1 + 264);
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v3 - v4) >> 3);
  result = v13;
  if (v13 != v12) {
    if (v13 != nullptr) {
      v11 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v11))(result);
    }
    return result;
  }
LABEL_12:
  v11 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v11))(result);
}

__int64 game_facility_SellController_Clear_lambda0_Invoke(__int64 a1,
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
