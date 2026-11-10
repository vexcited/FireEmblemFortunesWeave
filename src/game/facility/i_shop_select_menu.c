#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
extern __int64 (*GameData_20f74c0[])();
extern __int64 GameData_20f7088;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 game_facility_IShopSelectMenu_OnUnbindImpl(_QWORD* a1);
__int64 game_facility_IShopSelectMenu_OnUnbindImpl_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);

__int64 game_facility_IShopSelectMenu_OnUnbindImpl(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;

  v3 = a1[29];
  v2 = a1[30];
  v4 = v11;
  v11[0] = GameData_20f74c0;
  v12 = v11;
  if (v2 == v3) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_20f7088, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v13 = v8;
      if (v12 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v13) & 1) !=
          0) {
        break;
      }
      v3 = a1[29];
      v2 = a1[30];
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v12;
  if (v12 != v11) {
    if (v12 != nullptr) {
      v9 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v9 = 32;
LABEL_13:
  (*(void (**)(_QWORD*))(*v4 + v9))(v4);
LABEL_14:
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return (*(__int64 (**)(_QWORD*))(*a1 + 704LL))(a1);
}

__int64 game_facility_IShopSelectMenu_OnUnbindImpl_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 84LL) = 1;
  return 0;
}

#pragma GCC visibility pop
