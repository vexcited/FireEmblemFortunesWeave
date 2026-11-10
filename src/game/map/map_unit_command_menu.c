#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_16ef9a0(void);
__int64 GameRoutine_777be0(_QWORD);
extern __int64 GameData_21cd0e8;
extern char GameData_22736e0;
extern int game_map_g_unit_menu_index;
__int64 MapUnitCommandMenu_Unknown85(__int64 a1);
void MapUnitCommandMenu_19f6660();
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_21270a0;
extern __int64* GameData_212e008[9];
__int64 game_map_MapUnitCommandMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                              _QWORD* a2,
                                                              _DWORD** a3);
bool game_map_MapUnitCommandMenu_CreateBind_lambda2_Invoke(__int64 a1,
                                                           _QWORD* a2);

__int64 MapUnitCommandMenu_Unknown85(__int64 a1)
{
  __int64 result;

  GameRoutine_16ef9a0();
  GameRoutine_1562cf0(a1 + 848, "Bmap");
  result = GameRoutine_777be0(GameData_21cd0e8 + 8);
  if ((GameData_22736e0 & 1) == 0) {
    GameData_22736e0 = 1;
  }
  return result;
}

void MapUnitCommandMenu_19f6660()
{
  game_map_g_unit_menu_index = -1;
  GameData_22736e0 = 0;
}

__int64 game_map_MapUnitCommandMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                              _QWORD* a2,
                                                              _DWORD** a3)
{
  _DWORD* v3;
  _DWORD* v4;
  int v5;

  v3 = *a3;
  if (*a2 != 0) {
    v4 =
        (_DWORD*)__dynamic_cast(*a2, GameData_212e008[0], &GameData_21270a0, 0);
    if (v3 == nullptr) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = nullptr;
  if (v3 != nullptr) {
  LABEL_3:
    v3 = (_DWORD*)__dynamic_cast(v3, GameData_212e008[0], &GameData_21270a0, 0);
  }
LABEL_4:
  v5 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v4 + 464LL))(v4) & 1;
  if (v5 == ((*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 464LL))(v3) & 1)) {
    return v4[10] < v3[10];
  }
  else {
    return (*(__int64 (**)(_DWORD*))(*(_QWORD*)v4 + 464LL))(v4);
  }
}

bool game_map_MapUnitCommandMenu_CreateBind_lambda2_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  return ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) != 0 &&
         *(_DWORD*)(v2 + 40) == *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
