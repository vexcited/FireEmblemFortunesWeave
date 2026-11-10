#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ca300;
extern __int64 GameData_21cd158;
extern __int64* GameData_212ce90[3];
bool MapSystemMap_Unknown8(__int64 a1, int a2, int a3);
__int64 MapSystemMap_Unknown6(__int64 a1, int a2, int a3);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void MapSystemMap_1a01880(PSEUDO_X8 x8_,
                                                     __int64 unused_int0,
                                                     unsigned __int8 a1,
                                                     char a2, int a3, int a4);

bool MapSystemMap_Unknown8(__int64 a1, int a2, int a3)
{
  __int64 v3;
  __int64 v6;
  _BOOL8 result;
  __int64 v8;

  v3 = GameData_21ca300;
  if (GameData_21ca300 == 0) {
    return true;
  }
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
  if (v6 == 0 || *(_BYTE*)(v6 + 57) != 10) {
    return true;
  }
  result = false;
  if (*(unsigned __int8*)(GameData_21ca300 + 18) >
          (unsigned int)(unsigned __int8)(a2 -
                                          *(_BYTE*)(GameData_21ca300 + 16)) &&
      *(unsigned __int8*)(GameData_21ca300 + 19) >
          (unsigned int)(unsigned __int8)(a3 -
                                          *(_BYTE*)(GameData_21ca300 + 17))) {
    if (*(_BYTE*)(*GameData_212ce90[0] +
                  *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
      v8 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
    }
    else {
      v8 = 0;
    }
    return ((*(_DWORD*)(*(_QWORD*)(v3 + 160) + (v8 << 7) +
                        4LL * ((a2 + 32 * a3) >> 5) + 8) >>
             a2) &
            1) != 0;
  }
  return result;
}

__attribute__((swiftcall)) void MapSystemMap_1a01880(PSEUDO_X8 x8_,
                                                     __int64 unused_int0,
                                                     unsigned __int8 a1,
                                                     char a2, int a3, int a4)
{
  char* a5 = (char*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  const char* v11;
  const char* v12;
  __int64 v13;
  char* v14;
  const char* v15;

  strcpy(a5, "&Battle_MiniMapLarge");
  result = GameRoutine_1a09ce0(a5, "_Unit", 5);
  if (a4 == 2) {
    v11 = "2x2";
  }
  else {
    if (a4 != 3) {
      goto LABEL_6;
    }
    v11 = "3x3";
  }
  result = GameRoutine_1a09ce0(a5, v11, 3);
LABEL_6:
  if (a1 <= 1u) {
    if (a1 != 0) {
      v12 = "_Enemy";
    }
    else {
      if ((a2 & 1) == 0) {
        v12 = "_Player";
        v14 = a5;
        v13 = 7;
        goto LABEL_16;
      }
      v12 = "_Guest";
    }
    goto LABEL_15;
  }
  if (a1 == 2) {
    v12 = "_Third";
  LABEL_15:
    v14 = a5;
    v13 = 6;
    goto LABEL_16;
  }
  if (a1 == 3) {
    v12 = "_Ally";
    v13 = 5;
    v14 = a5;
  LABEL_16:
    result = GameRoutine_1a09ce0(v14, v12, v13);
  }
  if (a3 == 1) {
    v15 = "Strong";
    {
      GameRoutine_1a09ce0(a5, v15, 6);
      return;
    }
  }
  if (a3 == 2) {
    v15 = "Leader";
    {
      GameRoutine_1a09ce0(a5, v15, 6);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 MapSystemMap_Unknown6(__int64 a1, int a2, int a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;

  v3 = *(_QWORD*)(GameData_21cd158 + 16);
  v4 = a2 + 32 * a3;
  if (v4 >= 0x400) {
    v5 = 0;
  }
  else {
    v5 = v4;
  }
  v6 = *(__int16*)(v3 + 2LL * (unsigned int)v5 + 4200);
  v7 = *(_QWORD*)(v3 + 8);
  if ((v6 < 0 || v7 == 0) &&
      ((v6 = *(__int16*)(v3 + 2 * v5 + 2152)) < 0 || v7 == 0)) {
    v9 = *(__int16*)(v3 + 104 + 2 * v5);
    if ((v9 & 0x8000000000000000LL) == 0 &&
        v7 + 144LL * (unsigned int)v9 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
    }
  }
  else if (v7 + 144LL * (unsigned int)v6 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  }
  return 0;
}

#pragma GCC visibility pop
