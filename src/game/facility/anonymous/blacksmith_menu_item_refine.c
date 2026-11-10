#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120d940(_QWORD, _QWORD);
__int64 GameRoutine_15de780(void);
__int64 GameRoutine_16d88b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_177c650(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern _BYTE* GameData_2132020;
extern __int64 GameData_21c99b8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212e000[10];
extern __int64* GameData_212e030[4];
__int64 BlacksmithMenuItem_Refine_Unknown58(__int64 a1);
__int64 BlacksmithMenuItem_Refine_Unknown81(__int64 a1);
__int64 BlacksmithMenuItem_Refine_Unknown82(__int64 a1, __int64 a2, __int64 a3);
__int64 BlacksmithMenuItem_Refine_Unknown5(__int64 a1, __int64 a2, __int64 a3);

__int64 BlacksmithMenuItem_Refine_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 104);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    v3 = v1 + 8 * v2 + 828;
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v2 + 4;
  }
  return GameRoutine_120d940(v3, *(unsigned int*)(a1 + 120));
}

__int64 BlacksmithMenuItem_Refine_Unknown81(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int16* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16* v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 104);
  *GameData_2132020 = 1;
  v3 = *(int*)(a1 + 40);
  if (v2 != 0) {
    v4 = (unsigned __int16*)(v2 + 8 * v3 + 828);
  }
  else {
    v4 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v3 + 4);
  }
  v5 = *v4;
  GameRoutine_15de780();
  v6 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v6 + 152) != 0) {
    v7 = *(_QWORD*)(v6 + 152);
  }
  else {
    v7 = *(_QWORD*)(a1 + 8);
  }
  v8 = *(_QWORD*)(a1 + 104);
  v9 = *(int*)(a1 + 40);
  if (v8 != 0) {
    v10 = (unsigned __int16*)(v8 + 8 * v9 + 828);
  }
  else {
    v10 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v9 + 4);
  }
  GameRoutine_177c650(
      v7, *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v5),
      *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *v10), 1);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v11 != 0) {
    v12 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 1128LL))(v11);
    (*(void (**)(__int64))(*(_QWORD*)v12 + 1136LL))(v12);
    (*(void (**)(__int64))(*(_QWORD*)v12 + 1120LL))(v12);
  }
  return 2;
}

__int64 BlacksmithMenuItem_Refine_Unknown82(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v3 = __dynamic_cast(v3, GameData_212e030[0], GameData_212e000[0], 0);
  }
  return GameRoutine_16d88b0(v3, "MID_RefineMenu_Confirm",
                             "MID_Shop_Consumption", a2, a3, a3);
}

__int64 BlacksmithMenuItem_Refine_Unknown5(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 - 88);
  if (v3 != 0) {
    v3 = __dynamic_cast(v3, GameData_212e030[0], GameData_212e000[0], 0);
  }
  return GameRoutine_16d88b0(v3, "MID_RefineMenu_Confirm",
                             "MID_Shop_Consumption", a2, a3, a3);
}

#pragma GCC visibility pop
