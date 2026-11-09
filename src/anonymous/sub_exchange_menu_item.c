#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11912b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_9377a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
__int64 SubExchangeMenuItem_Unknown25_185f7e0(__int64 a1);
__int64 SubExchangeMenuItem_Unknown58(__int64 a1);

__int64 SubExchangeMenuItem_Unknown25_185f7e0(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  char* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[32];
  _BYTE* v14;
  const char* v15;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v3 = *(_QWORD*)(a1 + 152);
  if ((v2 & 1) != 0) {
    GameRoutine_9377a0(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL), v3,
                       *(unsigned int*)(a1 + 40));
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 144) + 1112LL))(
        *(_QWORD*)(a1 + 144));
    return 2;
  }
  if (*(_BYTE*)(v3 + 1944) != 0) {
    v5 = *(unsigned int*)(a1 + 40);
    v6 = (int)v5 >= 0
             ? (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                                8LL) +
                                     48LL) +
                          8 * v5)
             : GameData_212ceb0;
    v8 = *((unsigned __int8*)v6 + 1);
    v7 = (char*)v6 + 1;
    if (v8 != 0) {
      v9 = game_UnitPool_Get(v7);
      if (v9 != 0 && *(_BYTE*)(*(_QWORD*)(a1 + 152) + 1944LL) != 0 &&
          (*(_BYTE*)(*(_QWORD*)(v9 + 400) + 96LL) != 1 ||
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] +
                                                     64) +
                                          8LL *
                                              *(unsigned __int8*)(*(_QWORD*)(a1 +
                                                                             152) +
                                                                  1944LL)) +
                               50LL) >
               (unsigned int)*(unsigned __int8*)(v9 + 552))) {
        v10 = *(_QWORD*)(a1 + 8);
        v15 = "MID_DeployMenu_NotTactics_Message";
        if (*(_BYTE*)(v9 + 2136) != 0) {
          v11 = GameRoutine_97b2f0(v9 + 2104);
        }
        else {
          v11 = GameRoutine_67ed20(*(_QWORD*)(v9 + 392));
        }
        v14 = nullptr;
        GameRoutine_11912b0(v10, &v15, v11, v13);
        if (v14 == v13) {
          v12 = 32;
        }
        else {
          if (v14 == nullptr) {
            return 12;
          }
          v12 = 40;
        }
        (*(void (**)(void))(*(_QWORD*)v14 + v12))();
        return 12;
      }
    }
  }
  return 1;
}

__int64 SubExchangeMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  _BYTE* v4;
  int v5;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 152);
  if (*(_BYTE*)(v1 + 1944) == 0) {
    return 0;
  }
  v2 = *(unsigned int*)(a1 + 40);
  v3 = (int)v2 >= 0
           ? (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                              8LL) +
                                   48LL) +
                        8 * v2)
           : GameData_212ceb0;
  if (*(_BYTE*)v3 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(v1 + 400) + 96LL) != 1 ||
       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                      8LL * *(unsigned __int8*)v3) +
                           50LL) >
           (unsigned int)*(unsigned __int8*)(v1 + 552))) {
    return 0;
  }
  v5 = *((unsigned __int8*)v3 + 1);
  v4 = (char*)v3 + 1;
  if (v5 == 0 || game_UnitPool_Get(v4) == 0) {
    return 1;
  }
  if (*v4 == 0) {
    return 0;
  }
  result = game_UnitPool_Get(v4);
  if (result == 0) {
    return result;
  }
  return *(_BYTE*)(v1 + 1944) == 0 ||
         *(_BYTE*)(*(_QWORD*)(result + 400) + 96LL) == 1 &&
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] +
                                                       64) +
                                            8LL * *(unsigned __int8*)(v1 +
                                                                      1944)) +
                                 50LL) <=
                 (unsigned int)*(unsigned __int8*)(result + 552);
}

#pragma GCC visibility pop
