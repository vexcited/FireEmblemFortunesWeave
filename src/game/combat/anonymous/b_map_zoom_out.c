#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10a04e0(__int64*, float*, float*, __int64);
__int64 GameRoutine_10a0720(__int64*, float*, float*, __int64);
extern __int64 (*GameData_200cdb0[])();
extern __int64 (*GameData_200ceb0[])();
__int64 BMapZoomOut_Unknown18(__int64* a1);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_22355f8;
extern _UNKNOWN* GameData_212fea0;
extern int GameData_22355f0;
extern int* GameData_212fe98;
void game_combat_anonymous_BMapZoomOut_Schedule_closure_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 GameRoutine_758bc0(float);
extern __int64 GameData_21c96a8;
void BattleUtil_7a96a0(float);
__int64 game_combat_anonymous_BMapZoomOut_Schedule_closure0_Invoke(__int64 a1,
                                                                   float* a2);
__int64 CombatLegionManager_e2cca0();
__int64 CombatLegionManager_e2cfa0(__int64 result, __int64);
__int64 Config_bc5620(__int64, __int64);
__int64 Config_bc7840(__int64, __int64);
__int64 GameRoutine_10a2b90(__int64);
__int64 GameRoutine_14a4d00(__int64 result);
__int64 GameRoutine_18c8060(__int64);
__int64 game_GameView_Update();
__int64 game_combat_106c820(_QWORD*, __int64);
extern __int64 (*GameData_200ce20[])();
extern __int64* GameData_212fff8[2];
extern __int64* GameData_21320e8;
extern __int64 GameData_21cd0d0;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_224b668;
extern __int64 eft_g_effectSystem;
extern int GameData_21d92e0;
__int64 game_combat_anonymous_BMapZoomOut_Schedule_closure_Invoke_10ed780();

__int64 BMapZoomOut_Unknown18(__int64* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  int v11;
  float v12;

  v10 = v9;
  v9[0] = GameData_200cdb0;
  v11 = -1082130432;
  v12 = 0.5;
  v2 = (_QWORD*)a1[20];
  if ((unsigned __int64)v2 >= a1[21]) {
    v3 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v12, (float*)&v11, (__int64)v9);
  }
  else {
    v2[2] = GameData_200cdb0;
    v3 = v2 + 8;
    v2[6] = v2 + 2;
    *v2 = 0xBF8000003F000000LL;
  }
  v4 = v10;
  a1[20] = (__int64)v3;
  if (v4 == v9) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(_QWORD*))(*v4 + v5))(v4);
  v3 = (_QWORD*)a1[20];

LABEL_9:
  v10 = v9;
  v9[0] = GameData_200ceb0;
  v11 = 1065353216;
  v12 = 0.0;
  if ((unsigned __int64)v3 >= a1[21]) {
    v6 = GameRoutine_10a0720(a1 + 19, &v12, (float*)&v11, (__int64)v9);
  }
  else {
    v3[2] = GameData_200ceb0;
    v3[6] = v3 + 2;
    *v3 = 0x3F80000000000000LL;
    v6 = (__int64)(v3 + 8);
  }
  a1[20] = v6;
  result = (__int64)v10;
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v10 + v8))(v10);
}

__int64 game_combat_anonymous_BMapZoomOut_Schedule_closure_Invoke_10ed780()
{
  _DWORD* v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;

  if (GameData_21d92e0 != 1) {
    GameData_21d92e0 = 1;
    game_GameView_Update();
    if (GameData_21cd0d0 != 0) {
      v0 = *(_DWORD**)(GameData_21cd0d0 + 8);
      v1 = v0[2] - 1;
      v0[2] = v1;
      if (v1 == 0) {
        (*(void (**)(_DWORD*))(*(_QWORD*)v0 + 8LL))(v0);
      }
    }
  }
  if (GameData_21ec7b0 != 0) {
    v15_.v15[0] = GameData_200ce20;
    v15_.v16 = v15_.v15;
    game_combat_106c820((_QWORD*)GameData_21ec7b0, (__int64)v15_.v15);
    if (v15_.v16 == v15_.v15) {
      v2 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        goto LABEL_11;
      }
      v2 = 40;
    }
    (*(void (**)(__int64))(*v15_.v16 + v2))((__int64)v15_.v16);
  }
LABEL_11:
  v15_.v16 = v15_.v15;
  v15_.v15[0] = GameData_21320e8 + 2;
  GameRoutine_18c8060((__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v3 = 32;
    goto LABEL_15;
  }
  if (v15_.v16 != nullptr) {
    v3 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v15_.v16 + v3))((__int64)v15_.v16);
  }
  if (GameData_21ec7b0 != 0) {
    v4 = *(_QWORD*)(GameData_21ec7b0 + 128);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 472) = 0;
      *(_DWORD*)(v4 + 464) = 0;
    }
  }
  v15_.v16 = v15_.v15;
  v15_.v15[0] = GameData_212fff8[0] + 2;
  GameRoutine_10a2b90((__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v5 = 32;
    goto LABEL_23;
  }
  if (v15_.v16 != nullptr) {
    v5 = 40;
  LABEL_23:
    (*(void (**)(__int64))(*v15_.v16 + v5))((__int64)v15_.v16);
  }
  v6 = *(_QWORD*)(eft_g_effectSystem + 296);
  v7 = *(__int64**)(v6 - 24);
  v8 = *(__int64**)(v6 - 16);
  while (v7 != v8) {
    v9 = *v7;
    if (*v7 != 0 && *(_DWORD*)(v9 + 4) == 7) {
      while (1) {
        v10 = *(_QWORD*)(v9 + 56);
        if (v10 == v9 + 48) {
          break;
        }
        Config_bc7840(eft_g_effectSystem, v10);
      }
      while (1) {
        v11 = *(_QWORD*)(v9 + 72);
        if (v11 == v9 + 64) {
          break;
        }
        Config_bc5620(eft_g_effectSystem, v11 - 136);
      }
    }
    ++v7;
  }
  GameRoutine_14a4d00((__int64)&GameData_224b668);
  v12 = *(_QWORD*)(GameData_21ec7b0 + 120);
  if (v12 != 0 && *(_DWORD*)(v12 + 80) != 4) {
    *(_DWORD*)(v12 + 80) = 4;
    if (*(_BYTE*)(v12 + 104) == 1) {
      *(_BYTE*)(v12 + 104) = 0;
    }
    CombatLegionManager_e2cfa0(v12, *(_QWORD*)(v12 + 16));
    CombatLegionManager_e2cfa0(v12, *(_QWORD*)(v12 + 24));
    CombatLegionManager_e2cfa0(v12, *(_QWORD*)(v12 + 32));
  }
  result = CombatLegionManager_e2cca0();
  if (GameData_21ec7b0 != 0) {
    v14 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v14 != 0) {
      *(_DWORD*)(v14 + 112) |= 0x1000000u;
    }
  }
  return result;
}

void game_combat_anonymous_BMapZoomOut_Schedule_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 80);
  if (v3 != 0 &&
      ((v4 = *(_QWORD*)(v2 + 88), *(_QWORD*)(v3 + 8) != -1) ? (v5 = v4 == 0)
                                                            : (v5 = true),
       (v5 || (*(_BYTE*)(*(_QWORD*)(v4 + 8) + 289LL) = *(_BYTE*)(v2 + 100),
               (v3 = *(_QWORD*)(v2 + 80)) != 0)) &&
           ((v6 = *(_QWORD*)(v2 + 88), *(_QWORD*)(v3 + 8) != -1)
                ? (v7 = v6 == 0)
                : (v7 = true),
            !v7))) {
    v8 = *(_QWORD*)(v6 + 8);
  }
  else {
    v8 = 0;
  }
  v9 = &GameData_22355f0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22355f8,
                            memory_order_acquire) &
       1) == 0) {
    v19 = v8;
    v20 = __cxa_guard_acquire(GameData_212fea0);
    v8 = v19;
    v9 = GameData_212fe98;
    if (v20 != 0) {
      GameData_22355f0 = wld_Crc32(0, "CharacterDie", 12);
      __cxa_guard_release(&GameData_22355f8);
      v8 = v19;
      v9 = GameData_212fe98;
    }
  }
  v10 = *v9;
  v12 = *(_QWORD*)(v8 + 504);
  v11 = *(_QWORD*)(v8 + 512);
  v13 = v11;
  for (i = v11; i != v12; i -= 16) {
    v15 = *(_DWORD*)(i - 16);
    v13 -= 16;
    if (v15 == v10) {
      if (v11 != v13) {
        v16 = *(_QWORD*)(v13 + 8);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v16 + 56);
          if (v17 != 0) {
            *(_QWORD*)(v16 + 56) = 0;
            (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
          }
          v18 = *(_QWORD*)(v16 + 64);
          if (v18 != 0) {
            *(_QWORD*)(v16 + 64) = 0;
            (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
          }
        }
      }
      return;
    }
  }
}

__int64 game_combat_anonymous_BMapZoomOut_Schedule_closure0_Invoke(__int64 a1,
                                                                   float* a2)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 result;

  v2 = *a2;
  BattleUtil_7a96a0(*a2);
  if (v2 < 0x1.0000000000000p-1f) {
    v3 = (float)((float)((float)(v2 * (float)(v2 * v2)) *
                         0x1.0000000000000p-1f) *
                 0x1.0000000000000p+3f) +
         0x0.0p+0f;
  }
  else {
    v3 =
        (float)((float)((float)((float)(0x1.0000000000000p-1f -
                                        (float)(v2 + -0x1.0000000000000p-1f)) *
                                (float)((float)(0x1.0000000000000p-1f -
                                                (float)(v2 +
                                                        -0x1.0000000000000p-1f)) *
                                        (float)(0x1.0000000000000p-1f -
                                                (float)(v2 +
                                                        -0x1.0000000000000p-1f)))) *
                        -0x1.0000000000000p-1f) *
                0x1.0000000000000p+3f) +
        0x1.0000000000000p+0f;
  }
  result = GameRoutine_758bc0(v3);
  if (GameData_21c96a8 != 0) {
    *(float*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = v3;
  }
  return result;
}

#pragma GCC visibility pop
