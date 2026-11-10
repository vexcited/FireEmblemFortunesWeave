#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a920(__int64, __int64, __int64, __int64, __int64,
                            __int64);
__int64 GameRoutine_14299d0(__int64 result, unsigned int, __int64);
__int64 game_util_Format(const char*, ...);
__int64 strlen(_QWORD);
bool GameRoutine_1389160(__int64, __int64, __int64);
extern _UNKNOWN** GameData_2131430[2];
extern _UNKNOWN** GameData_2131438;
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 GameData_212dce8;
extern char GameData_1ab9754[];
__int64 game_facility_TrainingSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
__int64 game_facility_TrainingSceneDiff_Initialize_lambda1_Invoke(__int64 a1);

__int64 game_facility_TrainingSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  _QWORD v19[6];
  _QWORD* v20;
  __int64 v21;
  __int64 v22;

  v20 = nullptr;
  v21 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v22 = 0;
  v2 = *(_QWORD*)(v1 + 48);
  v19[0] = game_facility_SceneManager_FacilityMapArgs_vtable;
  memset(&v19[1], 0, 40);
  v3 = *(_BYTE*)(v1 + 32);
  v4 = v1 + 33;
  if ((v3 & 1) != 0) {
    v5 = v2;
  }
  else {
    v5 = v4;
  }
  v6 = game_util_Format(GameData_1ab9754, v5);
  v7 = strlen(v6);
  GameRoutine_1389160((__int64)v19, v6, v7);
  GameRoutine_138a920(*(_QWORD*)GameData_212dce8, (__int64)v19, v8, v9, v10,
                      v11);
  result = (__int64)v20;
  v19[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v20 == &v19[2]) {
    v18 = 32;
  }
  else {
    if (v20 == nullptr) {
      return result;
    }
    v18 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64, __int64, __int64, __int64, __int64))(
      *v20 + v18))(v20, v12, v13, v14, v15, v16);
}

__int64 game_facility_TrainingSceneDiff_Initialize_lambda1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_14299d0(*(_QWORD*)(v1 + 96), 0, (__int64)*GameData_2131430[0]);
  return GameRoutine_14299d0(*(_QWORD*)(v1 + 96), 1u,
                             (__int64)*GameData_2131438);
}

#pragma GCC visibility pop
