#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ProcList_9bd480(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_ProcList_Tick_9bd2e0(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a9c92c;
extern _UNKNOWN GameData_21ee258;
extern __int64 (*GameData_1fa2230[])();
extern __int64 GameData_21ee248;
extern __int64 GameData_21ee250;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
__int64 game_GameSkip_TryWaitBind(__int64 a1);
__int64 game_GameSkip_TryWaitBind_lambda0_Invoke();
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_ProcList_Tick_9bd2e0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Tick_9bd2e0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 game_GameSkip_TryWaitBind(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  float v7;
  char v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  v1 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0 ||
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 5) != 4) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee258,
                            memory_order_acquire) &
       1) == 0) {
    v14 = a1;
    v15 = __cxa_guard_acquire_alt1((__int64)&GameData_21ee258);
    a1 = v14;
    if (v15 != 0) {
      GameData_21ee250 = (__int64)&GameData_1a9c92c;
      GameData_21ee248 = game_HashString_alt1((__int64)&GameData_1a9c92c);
      __cxa_guard_release_alt1((__int64)&GameData_21ee258);
      a1 = v14;
    }
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v2 = a1;
  v3 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&GameData_21ee248);
  v4 = 0;
  if (v3 != 0) {
    v5 = *(_DWORD*)(v3 + 32);
    if (v5 != 0) {
      v6 = (int)(float)((float)v5 * 0x1.eb851e0000000p-5f);
      if (v6 != 0) {
        v7 = *(float*)(v1 + 224);
        if (v7 < (float)v6 && (float)(v7 / (float)v6) <= 0x0.0p+0f) {
          return 0;
        }
        v9 = game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0) {
          if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
            v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
            if ((v10 & 8) != 0) {
              v11 = 2;
            }
            else {
              v11 = 3;
            }
            v9 = (v11 & v10) == 0;
          }
          else {
            v9 = 0;
          }
        }
        v4 = 0;
        if (v2 != 0 && (v9 & 1) == 0) {
          v12 = ProcList_9bd480_alt1(v2);
          v16_.v16[0] = GameData_1fa2230;
          v16_.v17 = v16_.v16;
          game_ProcList_Tick_9bd2e0_alt1(v12, (__int64)v16_.v16);
          if (v16_.v17 == v16_.v16) {
            v13 = 32;
          }
          else {
            if (v16_.v17 == nullptr) {
              return v12;
            }
            v13 = 40;
          }
          (*(void (**)(__int64))(*v16_.v17 + v13))((__int64)v16_.v17);
          return v12;
        }
      }
    }
  }
  return v4;
}

__int64 game_GameSkip_TryWaitBind_lambda0_Invoke()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 result;
  int v4;
  float v5;
  int v6;
  int v7;

  v0 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0 ||
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 5) != 4) {
    return 2;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee258,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21ee258) != 0) {
    GameData_21ee250 = (__int64)&GameData_1a9c92c;
    GameData_21ee248 = game_HashString_alt1((__int64)&GameData_1a9c92c);
    __cxa_guard_release_alt1((__int64)&GameData_21ee258);
  }
  if (game_GameModeData_instance_ == 0) {
    return 2;
  }
  v1 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&GameData_21ee248);
  if (v1 == 0) {
    return 2;
  }
  v2 = *(_DWORD*)(v1 + 32);
  result = 2;
  if (v2 != 0) {
    v4 = (int)(float)((float)v2 * 0x1.eb851e0000000p-5f);
    if (v4 != 0) {
      v5 = *(float*)(v0 + 224);
      if (v5 >= (float)v4 || (float)(v5 / (float)v4) != 0x0.0p+0f) {
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
          v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          if ((v6 & 8) != 0) {
            v7 = 2;
          }
          else {
            v7 = 3;
          }
          if ((v7 & v6) != 0) {
            return 0;
          }
          else {
            return 2;
          }
        }
        else {
          return 0;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
