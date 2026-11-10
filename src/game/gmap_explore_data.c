#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_util_Format(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a990f4;
extern _UNKNOWN GameData_1af9473;
extern __int64 (*GameData_1fc47a0[])();
extern __int64 (*GameData_1fc4830[])();
extern __int64 GameData_21c9e40;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_GmapExploreData_GetShowRareFlagName(__int64 a1, __int64 a2);
__int64 game_GmapExploreData_GetObtainedFirstFlagName(__int64 a1, __int64 a2);
__int64 game_GmapExploreData_GetShowRareFlagName_lambda0_Invoke(__int64 result,
                                                                __int64 a2);
__int64
game_GmapExploreData_GetObtainedFirstFlagName_lambda0_Invoke(__int64 result,
                                                             __int64 a2);

__int64 game_GmapExploreData_GetShowRareFlagName(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  char v14;
  __int64 v15;

  if (*(_QWORD*)(a1 + 48) != 0) {
    return 0;
  }
  v3 = v12;
  v14 = 0;
  v12[0] = GameData_1fc47a0;
  v12[1] = &v14;
  v13 = v12;
  v4 = GameData_21c9e40;
  v5 = *(unsigned __int16*)(a1 + 16) + 1LL;
  v6 = *(_QWORD*)(GameData_21c9e40 + 64);
  if (v5 >= (*(_QWORD*)(GameData_21c9e40 + 72) - v6) >> 3) {
    goto LABEL_10;
  }
  while (1) {
    v7 = *(_QWORD*)(v6 + 8 * v5);
    v3 = v13;
    if (*(_QWORD*)(v7 + 48) == 0) {
      break;
    }
    v15 = v7;
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15);
    v6 = *(_QWORD*)(v4 + 64);
    if (++v5 >= (*(_QWORD*)(v4 + 72) - v6) >> 3) {
      v3 = v13;
      break;
    }
  }
  if (v3 == v12) {
  LABEL_10:
    v8 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v3 + v8))(v3, a2);
LABEL_12:
  if (v14 != 1) {
    return 0;
  }
  v9 = *(_QWORD*)(a1 + 8);
  if (v9 != 0) {
    v10 = strchr(v9, 95);
    if (v10 != 0) {
      v9 = v10 + 1;
    }
  }
  return game_util_Format(&GameData_1af9473, v9);
}

__int64 game_GmapExploreData_GetObtainedFirstFlagName(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  char v14;
  __int64 v15;

  if (*(_QWORD*)(a1 + 48) != 0) {
    return 0;
  }
  v3 = v12;
  v14 = 0;
  v12[0] = GameData_1fc4830;
  v12[1] = &v14;
  v13 = v12;
  v4 = GameData_21c9e40;
  v5 = *(unsigned __int16*)(a1 + 16) + 1LL;
  v6 = *(_QWORD*)(GameData_21c9e40 + 64);
  if (v5 >= (*(_QWORD*)(GameData_21c9e40 + 72) - v6) >> 3) {
    goto LABEL_10;
  }
  while (1) {
    v7 = *(_QWORD*)(v6 + 8 * v5);
    v3 = v13;
    if (*(_QWORD*)(v7 + 48) == 0) {
      break;
    }
    v15 = v7;
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15);
    v6 = *(_QWORD*)(v4 + 64);
    if (++v5 >= (*(_QWORD*)(v4 + 72) - v6) >> 3) {
      v3 = v13;
      break;
    }
  }
  if (v3 == v12) {
  LABEL_10:
    v8 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v3 + v8))(v3, a2);
LABEL_12:
  if (v14 != 1) {
    return 0;
  }
  v9 = *(_QWORD*)(a1 + 8);
  if (v9 != 0) {
    v10 = strchr(v9, 95);
    if (v10 != 0) {
      v9 = v10 + 1;
    }
  }
  return game_util_Format(&GameData_1a990f4, v9);
}

__int64 game_GmapExploreData_GetShowRareFlagName_lambda0_Invoke(__int64 result,
                                                                __int64 a2)
{
  if (*(_BYTE*)(*(_QWORD*)a2 + 58LL) == 1) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

__int64

game_GmapExploreData_GetObtainedFirstFlagName_lambda0_Invoke(__int64 result,
                                                             __int64 a2)
{
  if (*(_BYTE*)(*(_QWORD*)a2 + 57LL) == 1) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

#pragma GCC visibility pop
