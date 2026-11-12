#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9a28e0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_Unit_IsImmobile(_QWORD, _QWORD);
extern _DWORD game_g_param_minimums[11];
extern _UNKNOWN GameData_1aa453a;
extern _UNKNOWN GameData_21ca2b0;
extern _UNKNOWN* game_g_param_orders;
extern __int64 GameData_21ca2a0;
extern __int64 GameData_21ca2a8;
extern __int64 game_GameModeData_instance_;
extern int GameData_21d98dc;
__int64 UnitParams_6dd470(__int64 a1, _BYTE* a2, __int64 a3, char a4);
__int64* game_9a28e0(int);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
bool game_Unit_IsImmobile_alt1(__int64) __asm__("game_Unit_IsImmobile");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 UnitParams_6dd470(__int64 a1, _BYTE* a2, __int64 a3, char a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  char v18;
  float* v20;
  int v21;
  __int64* v22;
  int v23;
  __int64 v24;
  float v25;
  int v26;
  float v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  bool v35;
  bool v36;
  int v37;
  unsigned int v38;
  int v39;
  _BOOL4 v40;
  int v41;
  int v42;
  int v43;

  v4 = *(_QWORD*)(a1 + 392);
  if (v4 == 0) {
    return 0;
  }
  v5 = *((unsigned __int8*)*(&game_g_param_orders +
                             *(unsigned __int8*)(a1 + 804)) +
         (unsigned __int8)*a2);
  v6 = v4 + 2 * v5;
  v7 = *(__int16*)(v6 + 450);
  if (a3 != 0) {
    if (*(_WORD*)(v6 + 450) == 0) {
      v7 = *(__int16*)(a3 + 2 * v5 + 288);
    }
    v7 += *(__int16*)(a3 + 2 * v5 + 310);
  }
  v8 = v6 + 22LL * *(unsigned __int8*)(a1 + 624);
  v9 = *(__int16*)(v6 + 562);
  v10 = v7 + *(__int16*)(a1 + 2 * v5 + 468) + *(__int16*)(v8 + 472);
  if (a3 != 0) {
    v11 = a3 + 2 * v5;
    v12 = *(__int16*)(v11 + 332);
    v13 = *(__int16*)(v11 + 310);
    if (v12 < v9) {
      v9 = v12;
    }
    v9 += v13;
  }
  if (v9 >= v10) {
    v9 = v10;
  }
  if (v10 >= 0) {
    v14 = v9;
  }
  else {
    v14 = 0;
  }
  if ((a4 & 1) == 0) {
  LABEL_52:
    if (*a2 != 10) {
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  v15 = *(_QWORD*)(a1 + 440);
  v16 = a1;
  v17 = a2;
  if (v15 != 0) {
    v18 = *(_BYTE*)(v15 + 16);
  }
  else {
    v18 = 9;
  }
  v20 = (float*)(a1 + 8 * v5 + 716);
  if (((1 << v18) & 6) != 0) {
    v21 = 63;
  }
  else {
    v21 = 62;
  }
  v22 = game_9a28e0(v21);
  v23 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v24 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v22);
    if (v24 != 0) {
      v23 = *(_DWORD*)(v24 + 32);
    }
    else {
      v23 = 0;
    }
  }
  v25 = v20[1];
  v26 = v23 + v14;
  a1 = v16;
  a2 = v17;
  if (v25 <= 0x1.0000000000000p+0f) {
    v27 = v25 * (float)(v14 + *(__int16*)v20);
  }
  else {
    v27 = (float)*(__int16*)v20 + (float)((float)v14 * v25);
  }
  if (v26 >= (int)v27) {
    v26 = (int)v27;
  }
  v14 = v26 + *((__int16*)v20 + 1);
  if (*v17 == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2b0,
                              memory_order_acquire) &
         1) == 0) {
      v41 = __cxa_guard_acquire_alt1((__int64)&GameData_21ca2b0);
      a2 = v17;
      v42 = v41;
      a1 = v16;
      if (v42 != 0) {
        GameData_21ca2a8 = (__int64)&GameData_1aa453a;
        GameData_21ca2a0 = game_HashString_alt1((__int64)&GameData_1aa453a);
        __cxa_guard_release_alt1((__int64)&GameData_21ca2b0);
        a2 = v17;
        a1 = v16;
      }
    }
    v28 = *(unsigned __int8*)(a1 + 500);
    if (*(_BYTE*)(a1 + 500) != 0) {
      v29 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v30 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&GameData_21ca2a0);
        if (v30 != 0) {
          v29 = *(_DWORD*)(v30 + 32);
        }
        else {
          v29 = 0;
        }
        a1 = v16;
        a2 = v17;
      }
      v31 = v29 * v28;
      if (v29 * v28 >= 1) {
        v32 = *(_QWORD*)(a1 + 1744);
        v33 = *(_QWORD*)(a1 + 1752) - v32;
        v43 = GameData_21d98dc & 0xFFF;
        v34 = ((unsigned __int64)(unsigned int)GameData_21d98dc >> 5) & 0x7F;
        if (v34 + 1 > v33 >> 2 ||
            ((*(_DWORD*)(v32 + 4LL * (unsigned int)v34) >> GameData_21d98dc) &
             1) == 0 ||
            (v35 = game_HasActiveSkill_843420_alt1(&v43, v16 + 1744), a2 = v17,
             v36 = v35, a1 = v16, !v36)) {
          if (v14 >= 1) {
            v37 = 1;
          }
          else {
            v37 = v14;
          }
          if (v37 <= (100 - v31) * v14 / 100) {
            v14 = (100 - v31) * v14 / 100;
          }
          else {
            v14 = v37;
          }
        }
      }
    }
    goto LABEL_52;
  }
  if (*v17 != 10) {
  LABEL_55:
    v39 = game_g_param_minimums[v5];
    v40 = v14 < v39;
    if (v14 >= 255) {
      v38 = 255;
    }
    else {
      v38 = v14;
    }
    goto LABEL_58;
  }
LABEL_53:
  if (!game_Unit_IsImmobile_alt1(a1)) {
    goto LABEL_55;
  }
  v38 = 0;
  v39 = game_g_param_minimums[v5];
  v40 = v39 > 0;
LABEL_58:
  if (v40) {
    return (unsigned int)v39;
  }
  else {
    return v38;
  }
}

#pragma GCC visibility pop
