#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BelongingMenu_16ca580(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_157e0f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_16ca2e0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2093420;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
extern char* GameData_2093940[4];
char* EmptyMaterialMenuItem_16c3cc0(__int64 a1, char a2);
const char* EmptyMaterialMenuItem_16c3d00(__int64 a1, char a2);
__int64 EmptyMaterialMenuItem_16c3d30(__int64 a1);
__int64 EmptyMaterialMenuItem_16c3d90(__int64 a1);

char* EmptyMaterialMenuItem_16c3cc0(__int64 a1, char a2)
{
  if ((a2 & 0xFC) != 0) {
    return nullptr;
  }
  else {
    return GameData_2093940[a2 & 3];
  }
}

const char* EmptyMaterialMenuItem_16c3d00(__int64 a1, char a2)
{
  const char* v2;

  v2 = "MID_Menu_Default";
  if (a2 == 1) {
    v2 = "MID_Menu_Lv_Rare";
  }
  if (a2 == 2) {
    return "MID_Menu_Stock";
  }
  else {
    return v2;
  }
}

__int64 EmptyMaterialMenuItem_16c3d30(__int64 a1)
{
  __int64 v2;

  GameRoutine_16ca2e0();
  GameRoutine_1562cf0(a1 + 952, "Menu_09_Header");
  v2 = GameRoutine_155fbe0(a1 + 952, "L_MenuItem_InfoHeader");
  GameRoutine_157e0f0(v2, "MID_Menu_Detail", 0);
  return BelongingMenu_16ca580(a1);
}

__int64 EmptyMaterialMenuItem_16c3d90(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64* v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2093420, 0);
    if (result != 0) {
      v3 = result;
      v4 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = *(_DWORD*)(v3 + 40);
      if ((v5 & 0x80000000) != 0) {
        v6 = game_g_empty_item_ptr;
      }
      else {
        v6 =
            (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                 game_TransporterConst_List_instance__ptr
                                                     [0] +
                                             8LL) +
                                  8LL) +
                       12LL * v5 + 4);
      }
      return GameRoutine_15d2910(v4, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
