#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1167bc0(__int64, unsigned int, char);
__int64 GameRoutine_12a5400(_QWORD, _QWORD);
__int64 GameRoutine_12a5840(_QWORD, _QWORD);
__int64 GameRoutine_12a5de0(_QWORD);
__int64 GameRoutine_12a5f20(_QWORD, _QWORD);
__int64 GameRoutine_812800(void);
__int64 GameRoutine_8129a0(_QWORD, _QWORD);
__int64 GameRoutine_812b00(_QWORD);
__int64 as_string_c_str(_QWORD);
extern __int64 GameData_22400f8;
extern __int64 game_script_map_obj_g_object_records;
__int64 map_obj_PlayState_1167f50(__int64 a1, unsigned int a2, char a3);
__int64 map_obj_PlayState_1168020(unsigned int a1, unsigned int a2,
                                  unsigned int a3, char a4);

__int64 map_obj_PlayState_1167f50(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v6 = as_string_c_str(a1);
  v7 = GameRoutine_812b00(v6);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
  if ((result & 1) != 0) {
    GameRoutine_1167bc0(v7, a2, a3 & 1);
    result = as_string_c_str(a1);
    v9 = GameData_22400f8;
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v10 = result;
      v11 = GameRoutine_812b00(result);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 40LL))(v11);
      if ((result & 1) != 0) {
        result = GameRoutine_12a5de0(v10);
        if ((result & 1) != 0 ||
            (result = game_script_map_obj_g_object_records,
             game_script_map_obj_g_object_records != 0) &&
                ((result = GameRoutine_12a5400(
                      game_script_map_obj_g_object_records, v10)) &
                 1) != 0) {
          *(_DWORD*)(v9 + 12) |= 0x2000u;
        }
      }
    }
  }
  return result;
}

__int64 map_obj_PlayState_1168020(unsigned int a1, unsigned int a2,
                                  unsigned int a3, char a4)
{
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;

  v8 = GameRoutine_812800();
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8);
  if ((result & 1) != 0) {
    result = (__int64)GameRoutine_1167bc0(v8, a3, a4 & 1);
    v10 = GameData_22400f8;
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v11 = GameRoutine_8129a0(a1, a2);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 40LL))(v11);
      if ((result & 1) != 0) {
        result = GameRoutine_12a5f20(a1, a2);
        if ((result & 1) != 0 ||
            ((result = GameRoutine_12a5840(a1, a2)) & 1) != 0) {
          *(_DWORD*)(v10 + 12) |= 0x2000u;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
