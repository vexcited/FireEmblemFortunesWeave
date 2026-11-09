#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_936f60(_QWORD* __return_ptr, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_2132048;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212cd68[26];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e030[4];
extern __int64* game_map_history_g_legion_pool_ptr[7];
__int64* ObeliskDepositoryLegionMenuItem_Unknown70(__int64 a1);
__int64 ObeliskDepositoryLegionMenuItem_Unknown73(__int64 a1);
__int64 ObeliskDepositoryLegionMenuItem_Unknown74(__int64 a1);
__int64 ObeliskDepositoryLegionMenuItem_Unknown79(__int64 a1);

__int64* ObeliskDepositoryLegionMenuItem_Unknown70(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    return (
        __int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v1);
  }
  else {
    return GameData_212ceb0;
  }
}

__int64 ObeliskDepositoryLegionMenuItem_Unknown73(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;

  if (*(int*)(a1 + 84) >= 1) {
    v2 = 0;
    v3 = game_GameModeData_instance_;
    v4 = GameData_212cf80[0];
    v5 = GameData_212ceb0;
    v6 = GameData_212c998[0];
    v7 = GameData_212cd68[0];
    v8 = game_map_history_g_legion_pool_ptr[0];
    do {
      if (v3 != 0) {
        v9 = *(_DWORD*)(v3 + 80);
      }
      else {
        v9 = 0;
      }
      v10 = *(unsigned int*)(a1 + 40);
      if ((int)v10 >= 0) {
        v11 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) +
                         8 * v10);
      }
      else {
        v11 = v5;
      }
      v12 = *(
          _QWORD*)(*(_QWORD*)(*v7 + 64) +
                   8LL *
                       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                                      8LL * *(unsigned __int8*)
                                                                v11) +
                                           51LL));
      if (v12 != 0) {
        LODWORD(v12) = *(unsigned __int16*)(v12 + 32);
      }
      if (v9 >= (int)v12) {
        GameRoutine_936f60(&v20, *(_QWORD*)(*v8 + 16));
        v3 = game_GameModeData_instance_;
        if ((v20 & 0x8000000000000000LL) == 0) {
          v13 = *(unsigned int*)(a1 + 40);
          if ((int)v13 >= 0) {
            v14 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) +
                             8 * v13);
          }
          else {
            v14 = v5;
          }
          v15 = *(
              _QWORD*)(*(_QWORD*)(*v7 + 64) +
                       8LL *
                           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                                          8LL *
                                                              *(unsigned __int8*)
                                                                  v14) +
                                               51LL));
          if (v15 != 0) {
            LODWORD(v15) = *(unsigned __int16*)(v15 + 32);
          }
          if (game_GameModeData_instance_ != 0) {
            v16 = (*(_DWORD*)(game_GameModeData_instance_ + 80) - v15) &
                  ~((*(_DWORD*)(game_GameModeData_instance_ + 80) - (int)v15) >>
                    31);
            if (v16 >= 99999) {
              v16 = 99999;
            }
            *(_DWORD*)(game_GameModeData_instance_ + 80) = v16;
          }
        }
      }
      ++v2;
    } while (v2 < *(_DWORD*)(a1 + 84));
  }
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 88) + 80LL))(a1 + 88);
  if (v17 != 0) {
    v18 = v17;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 1128LL))(v17);
    (*(void (**)(__int64))(*(_QWORD*)v18 + 1136LL))(v18);
    (*(void (**)(__int64))(*(_QWORD*)v18 + 1120LL))(v18);
  }
  return 2;
}

__int64 ObeliskDepositoryLegionMenuItem_Unknown74(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE v12[32];
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  v4 = *(unsigned int*)(a1 + 40);
  if ((int)v4 >= 0) {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v4);
  }
  else {
    v5 = GameData_212ceb0;
  }
  v6 = *(unsigned __int8*)v5;
  v7 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998
                                                                   [0] +
                                                               64) +
                                                    8 * v6) +
                                         51LL));
  if (v7 != 0) {
    LODWORD(v7) = *(unsigned __int16*)(v7 + 32);
  }
  if (v3 < (int)v7) {
    return 1;
  }
  if ((_DWORD)v6 != 0 &&
      *(int*)(*(_QWORD*)(*game_map_history_g_legion_pool_ptr[0] + 16) + 72LL) <
          300) {
    return 1;
  }
  v14 = v1;
  v15 = v2;
  v9 = *(_QWORD*)(a1 + 8);
  v16 = "MID_DepositoryMenu_FullItem_Legion_Message";
  v10 = GameRoutine_667ea0(v9, &v16);
  if (v10 != 0) {
    v13 = nullptr;
    GameRoutine_6680e0(v12, v10 + 1248);
    if (v13 == v12) {
      v11 = 32;
      goto LABEL_18;
    }
    if (v13 != nullptr) {
      v11 = 40;
    LABEL_18:
      (*(void (**)(void))(*(_QWORD*)v13 + v11))();
    }
  }
  return 12;
}

__int64 ObeliskDepositoryLegionMenuItem_Unknown79(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return __dynamic_cast(result, GameData_212e030[0], GameData_2132048, 0);
  }
  return result;
}

#pragma GCC visibility pop
