#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15f3480(void);
extern __int64 GameData_21f3d10;
__int64 ProcHotelMenu_Unknown84();
extern __int64 GameData_2243960;
extern __int64 game_GameModeData_instance_;
__int64 ProcHotelMenu_Unknown141(__int64 a1);
__int64 ProcHotelMenu_Unknown8(__int64 a1);
void game_facility_anonymous_ProcHotelMenu_CreateBind_closure_Invoke();
__int64 GameRoutine_15f3480_alt1(_QWORD) __asm__("GameRoutine_15f3480");
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 ProcHotelMenu_Unknown96(_QWORD* a1);

__int64 ProcHotelMenu_Unknown84()
{
  __int64 result;

  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 0) {
    return GameRoutine_15f3480();
  }
  return result;
}

__int64 ProcHotelMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 0) {
    GameRoutine_15f3480_alt1(a1);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

__int64 ProcHotelMenu_Unknown141(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 1064);
}

__int64 ProcHotelMenu_Unknown8(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 8);
}

void game_facility_anonymous_ProcHotelMenu_CreateBind_closure_Invoke()
{
  int v0;

  if (GameData_2243960 != 0) {
    v0 = 3;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v0 = 4;
      }
      else {
        v0 = 3;
      }
    }
    *(_DWORD*)(GameData_2243960 + 152) = v0;
  }
}

#pragma GCC visibility pop
