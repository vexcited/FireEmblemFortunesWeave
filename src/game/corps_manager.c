#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CorpsManager_9726e0(__int64);
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_gmap_TroopMgr_Impl_UpdateCorps(__int64);
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_1fb0d30[])();
extern __int64 (*GameData_1fb0db0[])();
extern __int64 (*GameData_1fb0e30[])();
extern __int64 (*GameData_1fb0eb0[])();
extern __int64 (*GameData_1fb0fb0[])();
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
__int64 CorpsManager_972290(__int64 result);
bool game_CorpsManager_GetEmptyIndex();
__int64 CorpsManager_9725a0(int a1);

__int64 CorpsManager_972290(__int64 result)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 (**v8)();
    __int64* v9;
    char gap32_[16];
    __int64 (***v10)();
  } v8_;

  if ((result & 0x80000000) == 0) {
    v1 = result;
    v7 = 0;
    v8_.v8 = GameData_1fb0d30;
    v8_.v9 = &v7;
    v8_.v10 = &v8_.v8;
    game_CorpsManager_EachUnit(result, (__int64)&v8_.v8);
    result = (__int64)v8_.v10;
    if (v8_.v10 == &v8_.v8) {
      v3 = 4;
    }
    else {
      if (v8_.v10 == nullptr) {
        goto LABEL_7;
      }
      v3 = 5;
    }
    result = ((__int64 (*)(__int64))(*v8_.v10)[v3])((__int64)v8_.v10);
  LABEL_7:
    if (v7 != 0) {
      goto LABEL_8;
    }
    v8_.v8 = GameData_1fb0eb0;
    v8_.v9 = &v7;
    v8_.v10 = &v8_.v8;
    game_CorpsManager_EachUnit(v1, (__int64)&v8_.v8);
    result = (__int64)v8_.v10;
    if (v8_.v10 == &v8_.v8) {
      v4 = 4;
    }
    else {
      if (v8_.v10 == nullptr) {
      LABEL_16:
        if (v7 == 0) {
          goto LABEL_8;
        }
        v5 = *(unsigned __int8*)(v7 + 501);
        if ((*(_BYTE*)(v7 + 418) & 0x10) == 0) {
          v5 = -1;
        }
        if (v5 == v1) {
          v8_.v8 = GameData_1fb0db0;
          v8_.v9 = (__int64*)v7;
          v8_.v10 = &v8_.v8;
          game_CorpsManager_EachUnit(v1, (__int64)&v8_.v8);
          result = (__int64)v8_.v10;
          if (v8_.v10 == &v8_.v8) {
            v6 = 4;
          }
          else {
            if (v8_.v10 == nullptr) {
              goto LABEL_8;
            }
            v6 = 5;
          }
          result = ((__int64 (*)(__int64))(*v8_.v10)[v6])((__int64)v8_.v10);
        }
      LABEL_8:
        if (GameData_21c96e8 != 0) {
          return game_gmap_TroopMgr_Impl_UpdateCorps(
              *(_QWORD*)(GameData_21c96e8 + 8));
        }
        return result;
      }
      v4 = 5;
    }
    result = ((__int64 (*)(__int64))(*v8_.v10)[v4])((__int64)v8_.v10);
    goto LABEL_16;
  }
  return result;
}

bool game_CorpsManager_GetEmptyIndex()
{
  __int64 v0;
  int i;
  __int64 (**v2)();
  int v3;
  __int64 v4;
  struct {
    __int64 (**v6)();
    unsigned int* v7;
    char gap16_[16];
    unsigned __int64* v8;
  } v6_;
  unsigned int v9;

  v9 = 0;
  v6_.v6 = GameData_1fb0fb0;
  v6_.v7 = &v9;
  v6_.v8 = (unsigned __int64*)&v6_.v6;
  CorpsManager_9726e0((__int64)&v6_.v6);
  if (v6_.v8 == (unsigned __int64*)&v6_.v6) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v6_.v8 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6_.v8 + v0))((__int64)v6_.v8);
  }
  for (i = 0;; ++i) {
    v6_.v7 = (unsigned int*)&GameData_1ade186;
    v2 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ade186);
    v3 = game_GameModeData_instance_;
    v6_.v6 = v2;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v6_.v6);
      if (v4 == 0) {
        break;
      }
      v3 = *(_DWORD*)(v4 + 32);
    }
    if (i >= v3) {
      goto LABEL_14;
    }
  LABEL_11:
    if (((v9 >> i) & 1) == 0) {
      return i >= 0;
    }
  }
  if (i < 0) {
    goto LABEL_11;
  }
LABEL_14:
  i = -1;
  return i >= 0;
}

__int64 CorpsManager_9725a0(int a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  struct {
    __int64 (**v6)();
    int* v7;
    char gap16_[16];
    unsigned __int64* v8;
  } v6_;
  int v9;

  v6_.v7 = (int*)&GameData_1ade186;
  v6_.v6 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ade186);
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v6_.v6);
    if (v3 == 0) {
      if (a1 >= 0) {
        return 0;
      }
      goto LABEL_5;
    }
    v2 = *(_DWORD*)(v3 + 32);
  }
  if (a1 >= v2) {
    return 0;
  }
LABEL_5:
  v9 = 0;
  if (a1 < 0) {
    return 1;
  }
  v6_.v6 = GameData_1fb0e30;
  v6_.v7 = &v9;
  v6_.v8 = (unsigned __int64*)&v6_.v6;
  game_CorpsManager_EachUnit((unsigned int)a1, (__int64)&v6_.v6);
  if (v6_.v8 == (unsigned __int64*)&v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v8 == nullptr) {
      return v9 == 0;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v8 + v4))((__int64)v6_.v8);
  return v9 == 0;
}

#pragma GCC visibility pop
