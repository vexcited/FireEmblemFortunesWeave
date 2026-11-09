#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_17a1f20(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20cd4c8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212e008[9];
__int64 ProcDeliveryMaterialMenu_Unknown88(__int64 a1);
__int64 ProcDeliveryMaterialMenu_Unknown96(_QWORD* a1);
const char* ProcDeliveryMaterialMenu_Unknown139(__int64 a1);
const char* ProcDeliveryMaterialMenu_Unknown140(__int64 a1);

__int64 ProcDeliveryMaterialMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20cd4c8, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070(&v9, a1 + 848, "L_Menu/L_InfoDetail");
      result = v10;
      if (v10 != 0) {
        v4 = std___1___shared_weak_count_lock(v10);
        v5 = v9;
        result = v10;
        if (v10 != 0) {
          result = std___1___shared_weak_count___release_weak();
        }
        if (v4 != 0 && v5 != 0) {
          v6 = *(int*)(v3 + 40);
          v7 = *(_QWORD*)(v3 + 88);
          if (v7 != 0) {
            v8 = v7 + 8 * v6 + 828;
          }
          else {
            v8 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           8LL) +
                12LL * (int)v6 + 4;
          }
          result = GameRoutine_15d2910(v5, v8);
        }
        else if (v4 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak();
        }
      }
    }
  }
  return result;
}

__int64 ProcDeliveryMaterialMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return GameRoutine_17a1f20(a1[42], a1[138]);
}

const char* ProcDeliveryMaterialMenu_Unknown139(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_Title";
  }
  else {
    return "MID_HubMenu_Scout";
  }
}

const char* ProcDeliveryMaterialMenu_Unknown140(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_ItemSelect_Help";
  }
  else {
    return "MID_ScoutMenu_Give_Help";
  }
}

#pragma GCC visibility pop
