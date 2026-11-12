#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_172a580(_QWORD, _QWORD);
__int64 GameRoutine_17317a0(void);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_9725a0(_QWORD);
__int64 GmapCorpsMenu_172a860(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
__int64 game_gmap_TroopMgr_EachPlayerTroop(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_20b5ee8[])();
extern __int64 (*GameData_20b5f68[])();
extern __int64 (*GameData_20b5fe8[])();
extern __int64 GameData_20b33d8;
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 GmapCorpsMenu_Unknown38(__int64 a1);
__int64 GmapCorpsMenu_Unknown41(__int64 result);
__int64 GmapCorpsMenu_172a480(__int64 a1, char a2, __int64 a3);
__int64 GmapCorpsMenu_172b6e0(__int64 a1, __int64 a2);
__int64 GameRoutine_172aa00(__int64, char, _QWORD*, _QWORD*, char);
__int64 GameRoutine_972290(_QWORD);
__int64 GameRoutine_972b70(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_CorpsManager_EachUnit(_QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(_QWORD, _QWORD);
extern __int64 (*GameData_1fb0db0[])();
extern __int64 (*GameData_20b6368[])();
extern __int64 (*GameData_20b6668[])();
extern __int64 GameData_20b3af0;
extern __int64 game_g_game_setting;
extern __int64* GameData_21319f0[9];
bool game_gmap_GmapCorpsMenu_IsOppositeEmpty(__int64 a1, char a2);
__int64 game_gmap_GmapCorpsMenu_ChangeLeader(__int64 a1, __int64 a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda2_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_OnPreCreate_lambda0_Invoke_alt1(
    __int64 result,
    __int64 a2) __asm__("game_gmap_GmapCorpsMenu_OnPreCreate_lambda0_Invoke");
__int64 game_gmap_GmapCorpsMenu_OnPreCreate_lambda1_Invoke_alt1(
    __int64 result,
    __int64 a2) __asm__("game_gmap_GmapCorpsMenu_OnPreCreate_lambda1_Invoke");
__int64 GmapCorpsMenu_1734260(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_IsOppositeEmpty_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_CanChangeLeader_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_Exchange_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda3_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ChangeLeader_lambda0_Invoke(__int64 a1,
                                                            _QWORD* a2);
bool game_gmap_GmapCorpsMenu_SetPoolTab_lambda0_Invoke(__int64 a1, __int64* a2);
bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);
bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda1_Invoke(__int64 a1,
                                                                _QWORD* a2);
bool game_gmap_GmapCorpsMenu_SelectedUser_lambda0_Invoke(__int64 a1,
                                                         _QWORD* a2);
__int64 CorpsManager_972290(__int64 result);
__int64 GameRoutine_1567590_alt1(__int64 result,
                                 char) __asm__("GameRoutine_1567590");
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_972b70(__int64, __int64);
__int64
game_CorpsManager_EachUnit_alt1(__int64 result,
                                __int64) __asm__("game_CorpsManager_EachUnit");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_gmap_GmapCorpsMenu_SelectedCurrentPool(__int64, unsigned int);
__int64 game_gmap_GmapCorpsMenu_SelectedUser(__int64, unsigned int);
__int64 game_menu_BasicMenu_Unknown16dd9a0(__int64 result);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Unknown16de4d0");
__int64 game_menu_PageTab_Update(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___next_prime(_QWORD);
extern _UNKNOWN GameData_1ada5b4;
extern __int64 (*GameData_20b5d68[])();
extern __int64 (*GameData_20b5de8[])();
extern __int64 (*GameData_20b5e68[])();
extern __int64 (*GameData_20b64e8[])();
extern __int64 (*GameData_20b6568[])();
extern __int64 (*GameData_20b65e8[])();
extern __int64 (*GameData_20b66e8[])();
extern __int64 (*game_gmap_anonymous_CorpsPoolMenu_vtable[])();
extern __int64 GameData_20b5ac8;
extern __int64 GameData_20b5d20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
void GameRoutine_1728e00();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60a310_alt2(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
void game_menu_PageTab_Update_alt1(int*) __asm__("game_menu_PageTab_Update");
void snd_Fade_Fade_10c830(__int64, float);
__int64 (**game_gmap_GmapCorpsMenu_ExchangeImpl(__int64 a1, char a2, _QWORD* a3,
                                                _QWORD* a4, char a5))();
__int64 game_gmap_GmapCorpsMenu_SetPoolTab(__int64 result, char a2, char a3);
__int64 game_gmap_GmapCorpsMenu_ReturnPool(__int64 a1);
__int64 GmapCorpsMenu_1733920(__int64 a1, __int64 a2);
__int64 GmapCorpsMenu_1733c60(float* a1, int* a2, _DWORD** a3);
__int64 CorpsManager_9723f0(_QWORD);
__int64 GameRoutine_133f780(_QWORD, _QWORD, _QWORD);
__int64 TroopMgr_1353fb0(_QWORD, _QWORD, _QWORD);
__int64 collision_6704c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gmap_1341d60(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 wmemchr(void);
extern __int64 (*GameData_20b60d8[])();
extern __int64 (*GameData_20b6158[])();
extern __int64 (*game_gmap_anonymous_CorpsUserMenu_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d728[2];
extern __int64 GameData_212d750;
extern __int64 GameData_21316c8;
extern __int64 GameData_2131860;
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_6706a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 game_gmap_GmapCorpsMenu_Run_lambda0_Invoke(__int64 a1);
__int64 CorpsManager_9725a0(int);
__int64 GmapCorpsMenu_17317a0(__int64 result, int*, __int64, char);
__int64 game_gmap_TroopMgr_EachPlayerTroop_alt1(
    __int64 result, __int64) __asm__("game_gmap_TroopMgr_EachPlayerTroop");
__int64 game_menu_BasicMenu_Unknown16de2e0_alt1(__int64 result, char) __asm__(
    "game_menu_BasicMenu_Unknown16de2e0");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GameRoutine_6e5900_alt1(__int64*, _DWORD*) __asm__("GameRoutine_6e5900");
void GameRoutine_7d6200_alt1(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
void game_gmap_GmapCorpsMenu_OnPreCreate_lambda0_Invoke(__int64 a1, __int64 a2);
void game_gmap_GmapCorpsMenu_OnPreCreate_lambda1_Invoke(__int64 a1, __int64 a2);

bool game_gmap_GmapCorpsMenu_IsOppositeEmpty(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  int v17;
  __int64 v18;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a2 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 312);
    if (v2 == 0) {
      return false;
    }
  }
  else {
    v2 = *(_QWORD*)(a1 + 304);
    if (v2 == 0) {
      return false;
    }
  }
  v3 = __dynamic_cast(v2, GameData_21319f0[0], &GameData_20b3af0, 0),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v3 == 0) {
    return false;
  }
  v5 = v3;
  v7 = *(_QWORD*)(v3 + 232);
  v6 = *(_QWORD*)(v3 + 240);
  v8 = v15_.v15;
  v17 = 0;
  v15_.v15[0] = GameData_20b6368;
  v15_.v15[1] = &v17;
  v15_.v16 = v15_.v15;
  if (v6 == v7) {
    goto LABEL_17;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    v11 = *(_QWORD*)(v7 + 8 * v9);
    if (v11 != 0) {
      v12 = __dynamic_cast(v11, v10, &GameData_20b33d8, 0),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v12 == 0) {
        goto LABEL_8;
      }
      v18 = v12;
      if (v15_.v16 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                                  &v18) &
           1) != 0) {
        break;
      }
      v7 = *(_QWORD*)(v5 + 232);
      v6 = *(_QWORD*)(v5 + 240);
    }
  LABEL_8:
    ++v9;
  } while (v9 < (v6 - v7) >> 3);
  v8 = v15_.v16;
  if (v15_.v16 != v15_.v15) {
    if (v15_.v16 != nullptr) {
      v13 = 40;
      goto LABEL_18;
    }
    return v17 < 1;
  }
LABEL_17:
  v13 = 32;
LABEL_18:
  (*(void (**)(_QWORD*, __int64))(*v8 + v13))(v8, v4),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v17 < 1;
}

__int64 GmapCorpsMenu_Unknown38(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  unsigned int** v11;
  __int64 v12;
  __int64 v13;
  unsigned int** v14;
  int v15;
  unsigned int* v16;
  int i;
  __int64 (**v18)();
  int v19;
  __int64 v20;
  int v21;
  __int64 (**v22)();
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  int* v29;
  unsigned __int64 v30;
  struct {
    __int64 (**v32)();
    void* v33;
    char gap16_[16];
    unsigned __int64* v34;
  } v32_;

  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 392) = *(_QWORD*)(a1 + 384);
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  v5 = *(_DWORD*)(v2 + 56);
  if ((v5 & 0x80000000) == 0) {
    while (v3 != v4) {
      v7 = *v3++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v5) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v3 == v4) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *(_DWORD*)(v6 + 540);
  v10 = (unsigned int)(v8 - 1);
  v9 = v8 < 1;
  v11 = (unsigned int**)v6;
  if (!v9) {
    v12 = *(_QWORD*)(v6 + 24);
    v13 = *(_QWORD*)(v6 + 32) - v12;
    v14 = (unsigned int**)(v12 + 8LL * (unsigned int)v10);
    if (v10 >= v13 >> 3) {
      v11 = (unsigned int**)v6;
    }
    else {
      v11 = v14;
    }
  }
  v15 = *(_DWORD*)(a1 + 360);
  if (v15 == 1) {
    v21 = 0;
    *(_DWORD*)(a1 + 376) = *(_DWORD*)(v6 + 84);
    while (1) {
      v32_.v33 = &GameData_1ade186;
      v22 =
          (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v23 = game_GameModeData_instance_;
      v32_.v32 = v22;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_31;
      }
      v24 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v32_.v32),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v24 != 0) {
        break;
      }
      if (v21 >= 0) {
        goto LABEL_47;
      }
    LABEL_32:
      if ((CorpsManager_9725a0(v21) & 1) != 0) {
        LODWORD(v32_.v32) = v21;
        GameRoutine_7d6200_alt1((__int64*)(a1 + 384), &v32_.v32),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_47;
      }
      ++v21;
    }
    v23 = *(_DWORD*)(v24 + 32);
  LABEL_31:
    if (v21 >= v23) {
      goto LABEL_47;
    }
    goto LABEL_32;
  }
  v16 = *v11;
  if (v15 != 0) {
    *(_DWORD*)(a1 + 376) = *(_DWORD*)(v6 + 84);
    if (game_gmap_SpotMgr_GetCurrentSpot_alt1() == v16) {
      *(_BYTE*)(a1 + 408) = 1;
      LODWORD(v32_.v32) = -1;
      GameRoutine_6e5900_alt1((__int64*)(a1 + 384), &v32_.v32),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v25 = (__int64)v16;
    v32_.v32 = GameData_20b5fe8;
    v32_.v33 = (void*)a1;
    v32_.v34 = (unsigned __int64*)&v32_.v32;
    goto LABEL_41;
  }
  for (i = 0;; ++i) {
    v32_.v33 = &GameData_1ade186;
    v18 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = game_GameModeData_instance_;
    v32_.v32 = v18;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_18;
    }
    v20 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v32_.v32),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v20 != 0) {
      v19 = *(_DWORD*)(v20 + 32);
    LABEL_18:
      if (i >= v19) {
        goto LABEL_40;
      }
      goto LABEL_19;
    }
    if (i >= 0) {
      goto LABEL_40;
    }
  LABEL_19:
    if ((CorpsManager_9725a0(i) & 1) != 0) {
      break;
    }
  }
  *(_DWORD*)(a1 + 376) = i;
LABEL_40:
  *(_BYTE*)(a1 + 408) = 1;
  LODWORD(v32_.v32) = -1;
  GameRoutine_6e5900_alt1((__int64*)(a1 + 384), &v32_.v32),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32_.v34 = (unsigned __int64*)&v32_.v32;
  v25 = (__int64)v16;
  v32_.v32 = GameData_20b5f68;
  v32_.v33 = (void*)a1;
LABEL_41:
  game_gmap_TroopMgr_EachPlayerTroop_alt1(v25, (__int64)&v32_.v32),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v32_.v34 == (unsigned __int64*)&v32_.v32) {
    v27 = 32;
  LABEL_45:
    (*(void (**)(unsigned __int64*, __int64))(*v32_.v34 + v27))(v32_.v34, v26),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else if (v32_.v34 != nullptr) {
    v27 = 40;
    goto LABEL_45;
  }
LABEL_47:
  result = *(_QWORD*)(a1 + 384);
  v29 = *(int**)(a1 + 392);
  v30 = ((__int64)v29 - result) >> 2;
  if (v30 >= 2 && result != (_QWORD)v29) {
    return GmapCorpsMenu_17317a0(result, v29, (2 * __clz(v30)) ^ 0x7E, 1);
  }
  return result;
}

__int64 GmapCorpsMenu_Unknown41(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 356) & 1) != 0) {
    v1 = result;
    GameRoutine_1567590("Tutorial", 1);
    v2 = *(_QWORD*)(v1 + 320);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v2 + 240LL))(v2, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v2 + 248LL))(v2, 0);
    v3 = *(_QWORD*)(v1 + 312);
    LODWORD(v1) =
        *(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(v1 + 352) + 304) +
                   1064LL) != 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 240LL))(v3, (unsigned int)v1);
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 248LL))(
        v3, (unsigned int)v1);
  }
  return result;
}

__int64 GmapCorpsMenu_172a480(__int64 a1, char a2, __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;

  v3 = *(_DWORD*)(a1 + 356);
  *(_QWORD*)(a1 + 368) = a3;
  *(_DWORD*)(a1 + 356) = v3 | 1;
  if (a3 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a3 + 64LL))(a3, 1);
  }
  if ((a2 & 1) != 0) {
    GameRoutine_172a580(a1, 0);
  }
  else {
    GmapCorpsMenu_172a860(a1, 0);
  }
  GameRoutine_1567590("Tutorial", 1);
  v6 = *(_QWORD*)(a1 + 320);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 240LL))(v6, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 248LL))(v6, 0);
  v7 = *(_QWORD*)(a1 + 312);
  v8 = *(_DWORD*)(*(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 352) + 304) +
                  1064LL) != 0;
  (*(void (**)(__int64, _BOOL4))(*(_QWORD*)v7 + 240LL))(v7, v8);
  return (*(__int64 (**)(__int64, _BOOL4))(*(_QWORD*)v7 + 248LL))(v7, v8);
}

__int64 (**game_gmap_GmapCorpsMenu_ExchangeImpl(__int64 a1, char a2, _QWORD* a3,
                                                _QWORD* a4, char a5))()
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64* v20;
  __int64* v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 (**result)();
  __int64 v26;
  int v27;
  int v28;
  char* v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 (***v43)();
  unsigned __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 (***v51)();
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  int v68;
  char v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 (***v76)();
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v85;
  int v86;
  bool v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 (***v93)();
  __int64 v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 (***v103)();
  __int64 v104;
  __int64* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  int v110;
  char v111;
  _BYTE v112[4];
  int v113;
  _QWORD v114[2];
  struct {
    __int64 (**v115)();
    int* v116;
    _BYTE* v117;
    char gap56_[8];
    unsigned __int64* v118;
  } v115_;

  if ((*(__int64 (**)(_QWORD*))(*a3 + 560LL))(a3) == 0 &&
      (*(__int64 (**)(_QWORD*))(*a4 + 560LL))(a4) == 0) {
    snd_Fade_Fade_10c830((__int64)&v115_.v115, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_NG", (__int64)"SE_SYS_NG",
                   (__int64)&v115_.v115, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    return (__int64 (**)(void))snd_Fade_Destroy_Fade(&v115_.v115);
  }
  v111 = a5;
  snd_Fade_Fade_10c830((__int64)&v115_.v115, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                 (__int64)&v115_.v115, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&v115_.v115);
  v10 = *(_QWORD*)(a1 + 304);
  if (v10 != 0) {
    v11 = __dynamic_cast(v10, GameData_21319f0[0], &GameData_20b3af0, 0);
    v12 = *(_QWORD*)(a1 + 312);
    if (v12 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    v13 = nullptr;
    v14 = *(_QWORD*)(a1 + 368);
    if (v14 != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  v11 = 0;
  v12 = *(_QWORD*)(a1 + 312);
  if (v12 == 0) {
    goto LABEL_8;
  }
LABEL_5:
  v13 = (_QWORD*)__dynamic_cast(v12, GameData_21319f0[0], &GameData_20b3af0, 0);
  v14 = *(_QWORD*)(a1 + 368);
  if (v14 != 0) {
  LABEL_6:
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 560LL))(v14) == 0;
    goto LABEL_10;
  }
LABEL_9:
  v15 = false;
LABEL_10:
  v16 = (*(__int64 (**)(_QWORD*))(*a3 + 560LL))(a3);
  a3[12] = (*(__int64 (**)(_QWORD*))(*a4 + 560LL))(a4);
  a4[12] = v16;
  v17 = *(_QWORD*)(a1 + 368);
  if (v17 != 0) {
    if (!v15 || ((a2 & 1) == 0 ? (v18 = v11) : (v18 = (__int64)v13),
                 v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 1288LL))(v18),
                 v17 = *(_QWORD*)(a1 + 368), v19 < 0)) {
    LABEL_48:
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v17 + 64LL))(v17, 0);
      *(_QWORD*)(a1 + 368) = 0;
      goto LABEL_49;
    }
    v20 = *(__int64**)(v18 + 232);
    v21 = *(__int64**)(v18 + 240);
    if (v20 == v21) {
      v24 = 0;
    }
    else {
      v22 = 0;
      while (1) {
        v23 = *v20++;
        if (v23 == v17) {
          break;
        }
        ++v22;
        if (v20 == v21) {
          v22 = -1;
          break;
        }
      }
      v24 = v22 + 1;
    }
    v115_.v116 = (int*)&GameData_1ada5b4;
    v115_.v115 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ada5b4);
    if (game_GameModeData_instance_ != 0 &&
        (v26 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v115_.v115)) != 0) {
      v27 = *(_DWORD*)(v26 + 32) - 1;
    }
    else {
      v27 = -1;
    }
    if (v27 >= v24) {
      v28 = v24;
    }
    else {
      v28 = v27;
    }
    if ((v28 & 0x80000000) == 0) {
      v29 = *(char**)(v18 + 232);
      v30 = *(char**)(v18 + 240);
      if (v29 != v30) {
        v31 = v30 - v29 - 8;
        v32 = (v31 >> 3) + 1;
        if (v31 >= 0x18) {
          v70 = 0;
          if (v27 >= (__int64)v24) {
            v27 = v24;
          }
          while (v27 != (_DWORD)v70) {
            if (v28 == (_DWORD)v70 + 1) {
              v29 += 8;
              break;
            }
            if (v28 == (_DWORD)v70 + 2) {
              v29 += 16;
              break;
            }
            if (v28 == (_DWORD)v70 + 3) {
              v29 += 24;
              break;
            }
            v29 += 32;
            v70 += 4;
            v33 = v70;
            if ((v32 & 0x3FFFFFFFFFFFFFFCLL) == v70) {
              goto LABEL_35;
            }
          }
        LABEL_179:
          v36 = *(_QWORD*)v29;
          v37 = *(_QWORD*)(v18 + 336);
          if (v37 == 0) {
            goto LABEL_41;
          }
          goto LABEL_40;
        }
        v33 = 0;
      LABEL_35:
        v34 = v32 & 3;
        if (v34 != 0) {
          v35 = v28 - v33;
          while (v35 != 0) {
            v29 += 8;
            --v35;
            if (--v34 == 0) {
              goto LABEL_39;
            }
          }
          goto LABEL_179;
        }
      }
    }
  LABEL_39:
    v36 = 0;
    v37 = *(_QWORD*)(v18 + 336);
    if (v37 == 0) {
    LABEL_41:
      *(_QWORD*)(v18 + 336) = v36;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v18, 1, 0, 0);
      v38 = *(_QWORD*)(v18 + 336);
      if (v38 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 160LL))(v38);
        game_IsVibrationEnabled_alt1(
            (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
        v39 = *(_QWORD*)(v18 + 336);
        v40 = 4;
        if (v39 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v39 + 120LL))(v39) & 1) !=
              0) {
            v40 = 4;
          }
          else {
            v40 = 0;
          }
        }
      }
      else {
        v40 = 4;
      }
      *(_DWORD*)(v18 + 356) = *(_DWORD*)(v18 + 356) & 0xFFFFFFFB | v40;
      v17 = *(_QWORD*)(a1 + 368);
      goto LABEL_48;
    }
  LABEL_40:
    (*(void (**)(__int64))(*(_QWORD*)v37 + 168LL))(v37);
    goto LABEL_41;
  }
LABEL_49:
  v41 = v13[29];
  v42 = v13[30];
  v43 = &v115_.v115;
  v113 = 0;
  v112[0] = 1;
  v115_.v118 = (unsigned __int64*)&v115_.v115;
  v115_.v115 = GameData_20b5d68;
  v115_.v116 = &v113;
  v115_.v117 = v112;
  if (v42 == v41) {
    goto LABEL_60;
  }
  v44 = 0;
  v45 = GameData_212e008[0];
  do {
    v46 = *(_QWORD*)(v41 + 8 * v44);
    if (v46 != 0) {
      v47 = __dynamic_cast(v46, v45, &GameData_20b33d8, 0);
      if (v47 == 0) {
        goto LABEL_51;
      }
      v114[0] = v47;
      if (v115_.v118 == nullptr) {
      LABEL_181:
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(unsigned __int64*, _QWORD*))(*v115_.v118 + 48))(
               v115_.v118, v114) &
           1) != 0) {
        break;
      }
      v41 = v13[29];
      v42 = v13[30];
    }
  LABEL_51:
    ++v44;
  } while (v44 < (v42 - v41) >> 3);
  v43 = (__int64 (***)(void))v115_.v118;
  if (v115_.v118 != (unsigned __int64*)&v115_.v115) {
    if (v115_.v118 != nullptr) {
      v48 = 5;
      goto LABEL_61;
    }
    goto LABEL_62;
  }
LABEL_60:
  v48 = 4;
LABEL_61:
  ((__int64 (*)(__int64))(*v43)[v48])((__int64)v43);
LABEL_62:
  v49 = *(_QWORD*)(v11 + 232);
  v50 = *(_QWORD*)(v11 + 240);
  v51 = &v115_.v115;
  v113 = 0;
  v112[0] = 1;
  v115_.v118 = (unsigned __int64*)&v115_.v115;
  v115_.v115 = GameData_20b5d68;
  v115_.v116 = &v113;
  v115_.v117 = v112;
  if (v50 == v49) {
    goto LABEL_73;
  }
  v52 = 0;
  v53 = GameData_212e008[0];
  while (2) {
    v54 = *(_QWORD*)(v49 + 8 * v52);
    if (v54 == 0 ||
        (v55 = __dynamic_cast(v54, v53, &GameData_20b33d8, 0)) == 0) {
    LABEL_64:
      if (++v52 >= (unsigned __int64)((v50 - v49) >> 3)) {
        goto LABEL_70;
      }
      continue;
    }
    break;
  }
  v114[0] = v55;
  if (v115_.v118 == nullptr) {
    goto LABEL_181;
  }
  if (((*(__int64 (**)(unsigned __int64*, _QWORD*))(*v115_.v118 + 48))(
           v115_.v118, v114) &
       1) == 0) {
    v49 = *(_QWORD*)(v11 + 232);
    v50 = *(_QWORD*)(v11 + 240);
    goto LABEL_64;
  }
LABEL_70:
  v51 = (__int64 (***)(void))v115_.v118;
  if (v115_.v118 != (unsigned __int64*)&v115_.v115) {
    if (v115_.v118 != nullptr) {
      v56 = 5;
      goto LABEL_74;
    }
    goto LABEL_75;
  }
LABEL_73:
  v56 = 4;
LABEL_74:
  ((__int64 (*)(__int64))(*v51)[v56])((__int64)v51);
LABEL_75:
  v57 = *(_QWORD*)(a1 + 304);
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 1080LL))(v57);
  }
  v58 = *(_QWORD*)(a1 + 312);
  if (v58 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 1080LL))(v58);
  }
  v59 = *(_QWORD*)(a1 + 320);
  if (v59 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 1080LL))(v59);
  }
  v60 = *(_DWORD*)(a1 + 356);
  if ((v60 & 1) != 0) {
    *(_DWORD*)(a1 + 356) = v60 & 0xFFFFFFFE;
    GameRoutine_1567590_alt1((__int64)"Tutorial", 0);
    v61 = *(_QWORD*)(a1 + 312);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v61 + 240LL))(v61, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v61 + 248LL))(v61, 1);
    v62 = *(_QWORD*)(a1 + 320);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v62 + 240LL))(v62, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v62 + 248LL))(v62, 1);
    if ((a2 & 1) != 0) {
      game_gmap_GmapCorpsMenu_SelectedCurrentPool(a1, 0);
      goto LABEL_84;
    }
    game_gmap_GmapCorpsMenu_SelectedUser(a1, 0);
    result = *(__int64 (***)(void))(a1 + 320);
    if (result == nullptr) {
    LABEL_94:
      if ((v111 & 1) == 0) {
        return result;
      }
      goto LABEL_155;
    }
  }
  else {
  LABEL_84:
    result = *(__int64 (***)(void))(a1 + 320);
    if (result == nullptr) {
      goto LABEL_94;
    }
  }
  result = (__int64 (**)(void))__dynamic_cast(result, GameData_21319f0[0],
                                              &GameData_20b5ac8, 0);
  if (result == nullptr) {
    goto LABEL_94;
  }
  v63 = *(_DWORD*)(a1 + 360);
  v64 = (__int64)result;
  if (v63 == 0) {
    if ((((__int64 (*)(__int64))GameRoutine_1728e00)(v11) & 1) == 0) {
      if (*(_DWORD*)(a1 + 360) == 1) {
        goto LABEL_88;
      }
      goto LABEL_112;
    }
  LABEL_97:
    v69 = 0;
    *(_BYTE*)(a1 + 409) = 0;
    goto LABEL_151;
  }
  if (v63 != 1) {
    goto LABEL_112;
  }
LABEL_88:
  if ((((__int64 (*)(_QWORD*))GameRoutine_1728e00)(v13) & 1) != 0) {
    v65 = *(_QWORD*)(a1 + 304);
    if (v65 == 0) {
      goto LABEL_97;
    }
    v66 = __dynamic_cast(v65, GameData_21319f0[0], &GameData_20b3af0, 0);
    if (v66 == 0) {
      goto LABEL_97;
    }
    v67 = (_QWORD*)v66;
    if ((((__int64 (*)(void))GameRoutine_1728e00)() & 1) != 0) {
      v68 = -1;
    }
    else {
      v71 = (__int64*)v67[29];
      do {
        v73 = *v71++;
        v72 = v73;
      } while (((*(__int64 (**)(__int64))(*(_QWORD*)v73 + 48LL))(v73) & 1) ==
               0);
      v68 = *(__int16*)((*(__int64 (**)(__int64))(*(_QWORD*)v72 + 560LL))(v72) +
                        490);
    }
    if ((*(unsigned int (**)(_QWORD*))(*v67 + 1296LL))(v67) == v68) {
      goto LABEL_97;
    }
  }
LABEL_112:
  v74 = v13[32];
  v75 = v13[33];
  v76 = &v115_.v115;
  LOBYTE(v113) = 0;
  v115_.v115 = GameData_20b5de8;
  v115_.v116 = &v113;
  v115_.v118 = (unsigned __int64*)&v115_.v115;
  if (v75 == v74) {
    goto LABEL_123;
  }
  v77 = 0;
  v78 = GameData_212e008[0];
  while (2) {
    v79 = *(_QWORD*)(v74 + 8 * v77);
    if (v79 == 0 ||
        (v80 = __dynamic_cast(v79, v78, &GameData_20b33d8, 0)) == 0) {
    LABEL_115:
      if (++v77 >= (unsigned __int64)((v75 - v74) >> 3)) {
        goto LABEL_120;
      }
      continue;
    }
    break;
  }
  v114[0] = v80;
  if (v115_.v118 == nullptr) {
    goto LABEL_181;
  }
  if (((*(__int64 (**)(unsigned __int64*, _QWORD*))(*v115_.v118 + 48))(
           v115_.v118, v114) &
       1) == 0) {
    v74 = v13[32];
    v75 = v13[33];
    goto LABEL_115;
  }
LABEL_120:
  v76 = (__int64 (***)(void))v115_.v118;
  if (v115_.v118 != (unsigned __int64*)&v115_.v115) {
    if (v115_.v118 != nullptr) {
      v81 = 5;
      goto LABEL_124;
    }
    goto LABEL_125;
  }
LABEL_123:
  v81 = 4;
LABEL_124:
  ((__int64 (*)(__int64))(*v76)[v81])((__int64)v76);
LABEL_125:
  if ((v113 & 1) != 0) {
    v82 = 1;
    goto LABEL_150;
  }
  v83 = *(_QWORD*)(a1 + 304);
  if (v83 != 0 && (v84 = __dynamic_cast(v83, GameData_21319f0[0],
                                        &GameData_20b3af0, 0)) != 0) {
    v85 = (_QWORD*)v84;
    if ((((__int64 (*)(void))GameRoutine_1728e00)() & 1) != 0) {
      v86 = -1;
    }
    else {
      v88 = (__int64*)v85[29];
      do {
        v90 = *v88++;
        v89 = v90;
      } while (((*(__int64 (**)(__int64))(*(_QWORD*)v90 + 48LL))(v90) & 1) ==
               0);
      v86 = *(__int16*)((*(__int64 (**)(__int64))(*(_QWORD*)v89 + 560LL))(v89) +
                        490);
    }
    v87 = (*(unsigned int (**)(_QWORD*))(*v85 + 1296LL))(v85) != v86;
  }
  else {
    v87 = false;
  }
  v91 = *(_QWORD*)(v11 + 232);
  v92 = *(_QWORD*)(v11 + 240);
  LOBYTE(v113) = v87;
  v93 = &v115_.v115;
  v115_.v115 = GameData_20b5e68;
  v115_.v116 = &v113;
  v115_.v118 = (unsigned __int64*)&v115_.v115;
  if (v92 == v91) {
    goto LABEL_147;
  }
  v94 = 0;
  v95 = GameData_212e008[0];
  while (2) {
    v96 = *(_QWORD*)(v91 + 8 * v94);
    if (v96 == 0 ||
        (v97 = __dynamic_cast(v96, v95, &GameData_20b33d8, 0)) == 0) {
    LABEL_139:
      if (++v94 >= (unsigned __int64)((v92 - v91) >> 3)) {
        goto LABEL_144;
      }
      continue;
    }
    break;
  }
  v114[0] = v97;
  if (v115_.v118 == nullptr) {
    goto LABEL_181;
  }
  if (((*(__int64 (**)(unsigned __int64*, _QWORD*))(*v115_.v118 + 48))(
           v115_.v118, v114) &
       1) == 0) {
    v91 = *(_QWORD*)(v11 + 232);
    v92 = *(_QWORD*)(v11 + 240);
    goto LABEL_139;
  }
LABEL_144:
  v93 = (__int64 (***)(void))v115_.v118;
  if (v115_.v118 != (unsigned __int64*)&v115_.v115) {
    if (v115_.v118 != nullptr) {
      v98 = 5;
      goto LABEL_148;
    }
    goto LABEL_149;
  }
LABEL_147:
  v98 = 4;
LABEL_148:
  ((__int64 (*)(__int64))(*v93)[v98])((__int64)v93);
LABEL_149:
  v82 = v113;
LABEL_150:
  v69 = v82 & 1;
  *(_BYTE*)(a1 + 409) = v82 & 1;
LABEL_151:
  v99 = *(__int64**)(v64 + 232);
  if (v99 == *(__int64**)(v64 + 240)) {
    v100 = 0;
  }
  else {
    v100 = *v99;
  }
  *(_BYTE*)(__dynamic_cast(v100, GameData_212e008[0], &GameData_20b5d20, 0) +
            82) = v69;
  result = (__int64 (**)(void))game_menu_BasicMenu_Unknown16dd9a0(v64);
  if ((v111 & 1) == 0) {
    return result;
  }
LABEL_155:
  v102 = *(_QWORD*)(v11 + 232);
  v101 = *(_QWORD*)(v11 + 240);
  v103 = &v115_.v115;
  v113 = 0;
  v115_.v115 = GameData_20b64e8;
  v115_.v116 = &v113;
  v115_.v118 = (unsigned __int64*)&v115_.v115;
  if (v101 == v102) {
    goto LABEL_166;
  }
  v104 = 0;
  v105 = GameData_212e008[0];
  while (2) {
    v106 = *(_QWORD*)(v102 + 8 * v104);
    if (v106 == 0 ||
        (v107 = __dynamic_cast(v106, v105, &GameData_20b33d8, 0)) == 0) {
    LABEL_158:
      if (++v104 >= (unsigned __int64)((v101 - v102) >> 3)) {
        goto LABEL_163;
      }
      continue;
    }
    break;
  }
  v114[0] = v107;
  if (v115_.v118 == nullptr) {
    goto LABEL_181;
  }
  if (((*(__int64 (**)(unsigned __int64*, _QWORD*))(*v115_.v118 + 48))(
           v115_.v118, v114) &
       1) == 0) {
    v102 = *(_QWORD*)(v11 + 232);
    v101 = *(_QWORD*)(v11 + 240);
    goto LABEL_158;
  }
LABEL_163:
  v103 = (__int64 (***)(void))v115_.v118;
  if (v115_.v118 != (unsigned __int64*)&v115_.v115) {
    if (v115_.v118 != nullptr) {
      v108 = 5;
      goto LABEL_167;
    }
    goto LABEL_168;
  }
LABEL_166:
  v108 = 4;
LABEL_167:
  ((__int64 (*)(__int64))(*v103)[v108])((__int64)v103);
LABEL_168:
  v109 = v113;
  v115_.v116 = (int*)&GameData_1ada5b4;
  result = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ada5b4);
  v115_.v115 = result;
  v110 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_171:
    if (v109 < v110) {
      return result;
    }
    return (__int64 (**)(void))MultiMenuSequence_17871c0(a1, 2u, 0);
  }
  result = (__int64 (**)(void))game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&v115_.v115);
  if (result != nullptr) {
    v110 = *((_DWORD*)result + 8);
    goto LABEL_171;
  }
  if (v109 >= 0) {
    return (__int64 (**)(void))MultiMenuSequence_17871c0(a1, 2u, 0);
  }
  return result;
}

__int64 game_gmap_GmapCorpsMenu_SetPoolTab(__int64 result, char a2, char a3)
{
  __int64 v3;
  int v4;
  int v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;
  __int64 v22;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(result + 312);
  *(_BYTE*)(result + 410) = a3;
  if (v3 == 0 ||
      *(__int64 (***)(void))v3 != game_gmap_anonymous_CorpsPoolMenu_vtable) {
    v3 = 0;
  }
  v4 = *(_DWORD*)(v3 + 656);
  v21 = v3;
  if (v4 <= 0) {
    v6 = (_QWORD*)(v3 + 1072);
  }
  else {
    if ((a2 & 1) != 0) {
      v5 = 0;
    }
    else {
      v5 = ((*(_QWORD*)(v3 + 1080) - *(_QWORD*)(v3 + 1072)) >> 2) - 1;
    }
    v7 = *(_DWORD*)(v3 + 660);
    if (v7 == v5) {
      v6 = (_QWORD*)(v3 + 1072);
    LABEL_12:
      v8 = *(_QWORD*)(v3 + 672);
      v9 = *(int*)(v3 + 660);
      if (v9 < (*(_QWORD*)(v3 + 680) - v8) >> 2) {
        v9 = *(int*)(v8 + 4 * v9);
      }
      v10 = (_DWORD*)(*v6 + 4 * v9);
      goto LABEL_16;
    }
    *(_DWORD*)(v3 + 664) = v7;
    *(_DWORD*)(v3 + 660) = v5;
    game_menu_PageTab_Update_alt1((int*)(v3 + 656)),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = game_menu_BasicMenu_Unknown16de4d0_alt1(v3),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v6 = (_QWORD*)(v3 + 1072);
    if (*(int*)(v3 + 656) >= 1) {
      goto LABEL_12;
    }
  }
  v10 = (_DWORD*)*v6;
LABEL_16:
  if (*v10 != -1) {
    return result;
  }
  result = ((__int64 (*)(__int64))GameRoutine_1728e00)(v3),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((result & 1) == 0) {
    return result;
  }
  v13 = *(_QWORD*)(v3 + 232);
  v12 = *(_QWORD*)(v3 + 240);
  result = (__int64)v19_.v19;
  v19_.v19[0] = GameData_20b66e8;
  v19_.v19[1] = &v21;
  v19_.v20 = v19_.v19;
  if (v12 == v13) {
    goto LABEL_29;
  }
  v14 = 0;
  v15 = GameData_212e008[0];
  do {
    v16 = *(_QWORD*)(v13 + 8 * v14);
    if (v16 != 0) {
      v17 = __dynamic_cast(v16, v15, &GameData_20b33d8, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v17 == 0) {
        goto LABEL_20;
      }
      v22 = v17;
      if (v19_.v20 == nullptr) {
        GameRoutine_60a310_alt1(),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v19_.v20 + 48LL))(v19_.v20,
                                                                  &v22) &
           1) != 0) {
        break;
      }
      v13 = *(_QWORD*)(v3 + 232);
      v12 = *(_QWORD*)(v3 + 240);
    }
  LABEL_20:
    ++v14;
  } while (v14 < (v12 - v13) >> 3);
  result = (__int64)v19_.v20;
  if (v19_.v20 != v19_.v19) {
    if (v19_.v20 != nullptr) {
      v18 = 40;
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v18))(result,
                                                                         v11);
    }
    return result;
  }
LABEL_29:
  v18 = 32;
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v18))(result,
                                                                     v11);
}

__int64 GmapCorpsMenu_172b6e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  unsigned int v14;
  __int64 v15;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  v5 = v12_.v12;
  v14 = 0;
  v12_.v12[0] = GameData_20b5ee8;
  v12_.v12[1] = &v14;
  v12_.v13 = v12_.v12;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v6);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v7, &GameData_20b33d8, 0);
      if (v9 == 0) {
        goto LABEL_3;
      }
      v15 = v9;
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12_.v13 + 48LL))(v12_.v13,
                                                                  &v15) &
           1) != 0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  v5 = v12_.v13;
  if (v12_.v13 != v12_.v12) {
    if (v12_.v13 != nullptr) {
      v10 = 40;
      goto LABEL_13;
    }
    return v14;
  }
LABEL_12:
  v10 = 32;
LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v5 + v10))(v5, a2);
  return v14;
}

__int64 game_gmap_GmapCorpsMenu_ChangeLeader(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  _QWORD* v17;
  __int64 v18;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[11];
  v4 = *(_QWORD*)(v3 + 304);
  if (v4 != 0) {
    v5 = __dynamic_cast(v4, GameData_21319f0[0], &GameData_20b3af0, 0);
  }
  else {
    v5 = 0;
  }
  v7 = *(_QWORD*)(v5 + 232);
  v6 = *(_QWORD*)(v5 + 240);
  v8 = v15_.v15;
  v17 = nullptr;
  v15_.v15[0] = GameData_20b6668;
  v15_.v15[1] = &v17;
  v15_.v16 = v15_.v15;
  if (v6 == v7) {
    goto LABEL_15;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    v11 = *(_QWORD*)(v7 + 8 * v9);
    if (v11 != 0) {
      v12 = __dynamic_cast(v11, v10, &GameData_20b33d8, 0);
      if (v12 == 0) {
        goto LABEL_6;
      }
      v18 = v12;
      if (v15_.v16 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                                  &v18) &
           1) != 0) {
        break;
      }
      v7 = *(_QWORD*)(v5 + 232);
      v6 = *(_QWORD*)(v5 + 240);
    }
  LABEL_6:
    ++v9;
  } while (v9 < (v6 - v7) >> 3);
  v8 = v15_.v16;
  if (v15_.v16 != v15_.v15) {
    if (v15_.v16 != nullptr) {
      v13 = 40;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
LABEL_15:
  v13 = 32;
LABEL_16:
  (*(void (**)(_QWORD*, __int64))(*v8 + v13))(v8, a2);
LABEL_17:
  if (v17 != nullptr) {
    game_gmap_GmapCorpsMenu_ExchangeImpl(v3, 1, v2, v17, 0);
    (*(void (**)(_QWORD*, _QWORD))(*v2 + 64LL))(v2, 0);
    game_menu_BasicMenu_Unknown16de2e0_alt1(v5, 1);
  }
  return 2;
}

__int64 game_gmap_GmapCorpsMenu_ReturnPool(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  int v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  _QWORD* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  int v55;
  __int64 v56;
  _QWORD* v57;
  _QWORD* v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  int v79;
  _QWORD* v80;
  _QWORD* v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  __int64 v89;
  int v90;
  struct {
    _QWORD v91[2];
    __int64* v92;
    char gap40_[8];
    _QWORD* v93;
  } v91_;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = v1[11];
  v3 = *(_QWORD*)(v2 + 312);
  if (v3 == 0 ||
      *(__int64 (***)(void))v3 != game_gmap_anonymous_CorpsPoolMenu_vtable) {
    v3 = 0;
  }
  v4 = *(_DWORD*)(v3 + 656);
  v95 = v3;
  if (v4 >= 1) {
    v5 = *(_DWORD*)(v3 + 660);
    if (v5 != 0) {
      *(_DWORD*)(v3 + 664) = v5;
      *(_DWORD*)(v3 + 660) = 0;
      game_menu_PageTab_Update_alt1((int*)(v3 + 656));
      game_menu_BasicMenu_Unknown16de4d0_alt1(v3);
    }
  }
  v7 = *(_QWORD*)(v3 + 232);
  v6 = *(_QWORD*)(v3 + 240);
  v8 = v91_.v91;
  v94 = nullptr;
  v91_.v91[0] = GameData_20b6568;
  v91_.v91[1] = &v95;
  v91_.v93 = v91_.v91;
  v91_.v92 = (__int64*)&v94;
  if (v6 == v7) {
    goto LABEL_18;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    v11 = *(_QWORD*)(v7 + 8 * v9);
    if (v11 != 0) {
      v12 = __dynamic_cast(v11, v10, &GameData_20b33d8, 0);
      if (v12 == 0) {
        goto LABEL_9;
      }
      v96 = v12;
      if (v91_.v93 == nullptr) {
      LABEL_148:
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v91_.v93 + 48LL))(v91_.v93,
                                                                  &v96) &
           1) != 0) {
        break;
      }
      v7 = *(_QWORD*)(v3 + 232);
      v6 = *(_QWORD*)(v3 + 240);
    }
  LABEL_9:
    ++v9;
  } while (v9 < (v6 - v7) >> 3);
  v8 = v91_.v93;
  if (v91_.v93 != v91_.v91) {
    if (v91_.v93 != nullptr) {
      v13 = 40;
      goto LABEL_19;
    }
    goto LABEL_20;
  }
LABEL_18:
  v13 = 32;
LABEL_19:
  (*(void (**)(__int64))(*v8 + v13))((__int64)v8);
LABEL_20:
  if (v94 == nullptr) {
    return 2;
  }
  v14 = *(_QWORD*)(v2 + 304);
  if (v14 != 0) {
    v15 = __dynamic_cast(v14, GameData_21319f0[0], &GameData_20b3af0, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *(_QWORD**)(v15 + 232);
  v17 = *(_QWORD**)(v15 + 240);
  if (v16 != v17) {
    v18 = 0;
    do {
      v19 = (_QWORD*)*v16;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v16 + 48LL))(*v16) & 1) != 0 &&
          ((*(__int64 (**)(_QWORD*))(*v19 + 40LL))(v19) & 1) != 0) {
        if (v19 == v1) {
          goto LABEL_32;
        }
        ++v18;
      }
      ++v16;
    } while (v16 != v17);
  }
  v18 = -1;
LABEL_32:
  v90 = *(__int16*)((*(__int64 (**)(_QWORD*))(*v1 + 560LL))(v1) + 490);
  game_gmap_GmapCorpsMenu_ExchangeImpl(v2, 1, v1, v94, 0);
  (*(void (**)(_QWORD*, _QWORD))(*v1 + 64LL))(v1, 0);
  v20 = v95;
  v21 = v91_.v91;
  v89 = 0;
  v91_.v91[0] = GameData_20b65e8;
  v91_.v91[1] = &v90;
  v91_.v93 = v91_.v91;
  v91_.v92 = &v89;
  v23 = *(_QWORD*)(v95 + 232);
  v22 = *(_QWORD*)(v95 + 240);
  if (v22 == v23) {
    goto LABEL_43;
  }
  v24 = 0;
  v25 = GameData_212e008[0];
  while (2) {
    v26 = *(_QWORD*)(v23 + 8 * v24);
    if (v26 == 0 ||
        (v27 = __dynamic_cast(v26, v25, &GameData_20b33d8, 0)) == 0) {
    LABEL_35:
      if (++v24 >= (unsigned __int64)((v22 - v23) >> 3)) {
        goto LABEL_40;
      }
      continue;
    }
    break;
  }
  v96 = v27;
  if (v91_.v93 == nullptr) {
    goto LABEL_148;
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v91_.v93 + 48LL))(v91_.v93, &v96) &
       1) == 0) {
    v23 = *(_QWORD*)(v20 + 232);
    v22 = *(_QWORD*)(v20 + 240);
    goto LABEL_35;
  }
LABEL_40:
  v21 = v91_.v93;
  if (v91_.v93 != v91_.v91) {
    if (v91_.v93 != nullptr) {
      v28 = 40;
      goto LABEL_44;
    }
    goto LABEL_45;
  }
LABEL_43:
  v28 = 32;
LABEL_44:
  (*(void (**)(__int64))(*v21 + v28))((__int64)v21);
LABEL_45:
  v29 = v89;
  if (v89 != 0) {
    v30 = *(_DWORD*)(v95 + 552);
    v31 = *(_QWORD**)(v95 + 232);
    v32 = *(_QWORD**)(v95 + 240);
    if (v31 != v32) {
      v33 = 0;
      do {
        v34 = *v31;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v31 + 48LL))(*v31) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v34 + 40LL))(v34) & 1) != 0) {
          if (v34 == v29) {
            goto LABEL_54;
          }
          ++v33;
        }
        ++v31;
      } while (v31 != v32);
    }
    v33 = -1;
  LABEL_54:
    if (v33 < v30) {
      v35 = v95;
      if (v33 >= -1) {
        v36 = *(_QWORD**)(v95 + 232);
        v37 = *(_QWORD**)(v95 + 240);
        if (v36 != v37) {
          v38 = v33 + 1;
          v39 = 0;
          do {
            v40 = *v36;
            if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v36 + 48LL))(*v36) & 1) !=
                    0 &&
                ((*(__int64 (**)(__int64))(*(_QWORD*)v40 + 40LL))(v40) & 1) !=
                    0) {
              if (v38 == v39) {
                goto LABEL_71;
              }
              ++v39;
            }
            ++v36;
          } while (v36 != v37);
        }
      }
      v40 = 0;
    LABEL_71:
      v48 = *(_QWORD*)(v35 + 336);
      if (v48 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v48 + 168LL))(v48);
      }
      *(_QWORD*)(v35 + 336) = v40;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v35, 1, 0, 0);
      v49 = *(_QWORD*)(v35 + 336);
      if (v49 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v49 + 160LL))(v49);
        game_IsVibrationEnabled_alt1(
            (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
        v50 = *(_QWORD*)(v35 + 336);
        v51 = 4;
        if (v50 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v50 + 120LL))(v50) & 1) !=
              0) {
            v51 = 4;
          }
          else {
            v51 = 0;
          }
        }
      }
      else {
        v51 = 4;
      }
      *(_DWORD*)(v35 + 356) = *(_DWORD*)(v35 + 356) & 0xFFFFFFFB | v51;
      v52 = v95;
      v57 = *(_QWORD**)(v95 + 232);
      v58 = *(_QWORD**)(v95 + 240);
      if (v57 != v58) {
        v59 = 0;
        do {
          v60 = *v57;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v57 + 48LL))(*v57) & 1) !=
              0) {
            if (v60 == *(_QWORD*)(v52 + 336)) {
              goto LABEL_96;
            }
            ++v59;
          }
          ++v57;
        } while (v57 != v58);
      }
      v59 = -1;
    LABEL_96:
      if (v59 <= 1) {
        v61 = 1;
      }
      else {
        v61 = v59;
      }
      v62 = v61 - 1;
      goto LABEL_104;
    }
    v41 = v95;
    v42 = v89;
    v43 = *(_QWORD*)(v95 + 336);
    if (v43 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 168LL))(v43);
    }
    v44 = v30 + 10;
    *(_QWORD*)(v41 + 336) = v42;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v41, 1, 0, 0);
    v45 = *(_QWORD*)(v41 + 336);
    if (v45 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 160LL))(v45);
      game_IsVibrationEnabled_alt1(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
      v46 = *(_QWORD*)(v41 + 336);
      v47 = 4;
      if (v46 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v46 + 120LL))(v46) & 1) != 0) {
          v47 = 4;
        }
        else {
          v47 = 0;
        }
      }
    }
    else {
      v47 = 4;
    }
    *(_DWORD*)(v41 + 356) = *(_DWORD*)(v41 + 356) & 0xFFFFFFFB | v47;
    if (v33 > v44) {
      v52 = v95;
      v53 = *(_QWORD**)(v95 + 232);
      v54 = *(_QWORD**)(v95 + 240);
      if (v53 == v54) {
        v63 = 0;
      }
      else {
        v55 = 0;
        do {
          v56 = *v53;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v53 + 48LL))(*v53) & 1) !=
              0) {
            if (v56 == *(_QWORD*)(v52 + 336)) {
              goto LABEL_101;
            }
            ++v55;
          }
          ++v53;
        } while (v53 != v54);
        v55 = -1;
      LABEL_101:
        v63 = v55 + 1;
      }
      v64 = (*(__int64 (**)(__int64))(*(_QWORD*)(v52 + 176) + 8LL))(v52 + 176);
      v62 = (v63 - v64) & ~((v63 - v64) >> 31);
    LABEL_104:
      *(_DWORD*)(v52 + 552) = v62;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v52, 1, 0, 0);
    }
    v65 = v95;
    v66 = *(_QWORD*)(v95 + 336);
    if (v66 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v66 + 168LL))(v66);
    }
    *(_QWORD*)(v65 + 336) = 0;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v65, 0, 1u, 0);
    v67 = *(_QWORD*)(v65 + 336);
    if (v67 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v67 + 160LL))(v67);
      game_IsVibrationEnabled_alt1(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
      v68 = *(_QWORD*)(v65 + 336);
      v69 = 4;
      if (v68 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v68 + 120LL))(v68) & 1) != 0) {
          v69 = 4;
        }
        else {
          v69 = 0;
        }
      }
    }
    else {
      v69 = 4;
    }
    v70 = v89;
    *(_DWORD*)(v65 + 356) = *(_DWORD*)(v65 + 356) & 0xFFFFFFFB | v69;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v70 + 56LL))(v70, 0);
  }
  if (v18 < 0) {
    return 2;
  }
  v71 = *(_QWORD**)(v15 + 232);
  v72 = *(_QWORD**)(v15 + 240);
  if (v71 == v72) {
    return 2;
  }
  v73 = 0;
  while (2) {
    v74 = *v71;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v71 + 48LL))(*v71) & 1) == 0 ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v74 + 40LL))(v74) & 1) == 0) {
    LABEL_117:
      if (++v71 == v72) {
        return 2;
      }
      continue;
    }
    break;
  }
  if (v18 != v73) {
    ++v73;
    goto LABEL_117;
  }
  v75 = __dynamic_cast(v74, GameData_212e008[0], &GameData_20b33d8, 0);
  if (v75 != 0) {
    v76 = (*(__int64 (**)(__int64))(*(_QWORD*)v75 + 560LL))(v75);
    if (v18 <= 1) {
      v77 = 1;
    }
    else {
      v77 = v18;
    }
    v78 = v77 - 1;
    if (v76 != 0) {
      v79 = v18;
    }
    else {
      v79 = v78;
    }
    if ((v79 & 0x80000000) == 0) {
      v80 = *(_QWORD**)(v15 + 232);
      v81 = *(_QWORD**)(v15 + 240);
      if (v80 != v81) {
        v82 = 0;
        do {
          v83 = *v80;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v80 + 48LL))(*v80) & 1) !=
                  0 &&
              ((*(__int64 (**)(__int64))(*(_QWORD*)v83 + 40LL))(v83) & 1) !=
                  0) {
            if (v79 == v82) {
              goto LABEL_138;
            }
            ++v82;
          }
          ++v80;
        } while (v80 != v81);
      }
    }
    v83 = 0;
  LABEL_138:
    v84 = *(_QWORD*)(v15 + 336);
    if (v84 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v84 + 168LL))(v84);
    }
    *(_QWORD*)(v15 + 336) = v83;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v15, 1, 0, 0);
    v85 = *(_QWORD*)(v15 + 336);
    if (v85 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v85 + 160LL))(v85);
      game_IsVibrationEnabled_alt1(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
      v86 = *(_QWORD*)(v15 + 336);
      v87 = 4;
      if (v86 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v86 + 120LL))(v86) & 1) != 0) {
          v87 = 4;
        }
        else {
          v87 = 0;
        }
      }
    }
    else {
      v87 = 4;
    }
    *(_DWORD*)(v15 + 356) = *(_DWORD*)(v15 + 356) & 0xFFFFFFFB | v87;
  }
  return 2;
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  _DWORD* v3;
  __int64 v4;
  int v5;

  v3 = *(_DWORD**)(a1 + 8);
  v4 = *a2;
  v5 = (*v3)++;
  *(_DWORD*)(v4 + 112) = v5;
  *(_BYTE*)(v4 + 116) = **(_BYTE**)(a1 + 16);
  if (**(_BYTE**)(a1 + 16) == 1 &&
      (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) != 0) {
    **(_BYTE**)(a1 + 16) = 0;
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  _DWORD* v2;
  __int64 v4;
  int v5;

  v2 = (_DWORD*)*a2;
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    v4 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v2 + 560LL))(v2);
    v5 = *(unsigned __int8*)(v4 + 501);
    if ((*(_BYTE*)(v4 + 418) & 0x10) == 0) {
      v5 = -1;
    }
    if (v5 != v2[27]) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return **(unsigned __int8**)(a1 + 8);
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda2_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  _DWORD* v2;
  __int64 v4;
  int v5;

  v2 = (_DWORD*)*a2;
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    v4 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v2 + 560LL))(v2);
    v5 = *(unsigned __int8*)(v4 + 501);
    if ((*(_BYTE*)(v4 + 418) & 0x10) == 0) {
      v5 = -1;
    }
    if (v5 != v2[27]) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return **(unsigned __int8**)(a1 + 8);
}

void game_gmap_GmapCorpsMenu_OnPreCreate_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  int v6;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  if (v5 != *(_DWORD*)(v4 + 376)) {
    v6 = v5;
    GameRoutine_6e5900_alt1((__int64*)(v4 + 384), &v6);
  }
}

void game_gmap_GmapCorpsMenu_OnPreCreate_lambda1_Invoke(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  int v6;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  if (v5 != *(_DWORD*)(v4 + 376)) {
    v6 = v5;
    GameRoutine_6e5900_alt1((__int64*)(v4 + 384), &v6);
  }
}

__int64 game_gmap_GmapCorpsMenu_Run_lambda0_Invoke(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64** v3;
  __int64** v4;
  int v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  int v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int* v19;
  int* v20;
  _QWORD* v21;
  char* v22;
  char* v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int16 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int16 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  unsigned __int64 v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v85;
  unsigned __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  unsigned __int64 v93;
  int v94;
  __int64 v95;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  int v105;
  _QWORD* v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  _QWORD* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  char* v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  __int64 v129;
  _QWORD v130[2];
  _QWORD* v131;
  _QWORD* v132;
  _QWORD v133[2];
  _QWORD* v134;
  __int64 v135;
  int v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;

  v1 = GameData_212c790;
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64***)(v2 + 8);
  v4 = *(__int64***)(v2 + 16);
  v5 = *(_DWORD*)(v2 + 56);
  if ((v5 & 0x80000000) == 0) {
    if (v3 != v4) {
      v6 = *(__int64***)(v2 + 8);
      do {
        v8 = *v6++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v5) {
          goto LABEL_14;
        }
      } while (v6 != v4);
    }
  LABEL_13:
    v7 = nullptr;
    goto LABEL_14;
  }
  if (v3 == v4) {
    goto LABEL_13;
  }
  v9 = *(_QWORD**)(v2 + 8);
  while (1) {
    v7 = (__int64*)*v9;
    if (*(_QWORD*)(*v9 + 96LL) == 0 && v7[69] == 0) {
      break;
    }
    if (++v9 == v4) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v10 = *((_DWORD*)v7 + 135);
  v11 = *(_QWORD*)(a1 + 8);
  v12 = __OFSUB__(v10, 1);
  v13 = (unsigned int)(v10 - 1);
  if (((v13 & 0x80000000) != 0LL) == v12) {
    v14 = v7[3];
    v15 = v7[4] - v14;
    v16 = (__int64*)(v14 + 8LL * (unsigned int)v13);
    if (v13 < v15 >> 3) {
      v7 = v16;
    }
  }
  if (v5 < 0) {
    do {
      do {
        v17 = (__int64)*v3++;
      } while (*(_QWORD*)(v17 + 96) != 0);
    } while (*(_QWORD*)(v17 + 552) != 0);
    v5 = *(_DWORD*)(v17 + 84);
  }
  v18 = *v7;
  v128 = v5;
  v138 = 0;
  v139 = 0;
  v19 = *(int**)(v11 + 384);
  v20 = *(int**)(v11 + 392);
  v137 = 0;
  v127 = v18;
  v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v19 != v20) {
    v22 = nullptr;
    v23 = nullptr;
    v24 = 0;
    while (1) {
      v25 = *v19;
      if ((*v19 & 0x80000000) == 0) {
        v26 = *(_QWORD*)(*v1 + 8);
        v27 = *(__int64**)(v26 + 8);
        v28 = *(__int64**)(v26 + 16);
        if (v27 != v28) {
          while (1) {
            v30 = *v27++;
            v29 = v30;
            if (*(_DWORD*)(v30 + 84) == v25) {
              break;
            }
            if (v27 == v28) {
              goto LABEL_60;
            }
          }
          v31 = v138;
          v32 = *(_WORD*)(v29 + 544);
          if (v138 == v139 << 6) {
            if ((__int64)(v138 + 1) < 0) {
              goto LABEL_207;
            }
            v33 = v139 << 7;
            if (v139 << 7 <= (v138 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
              v33 = (v138 & 0x3FFFFFFFFFFFFFC0LL) + 64;
            }
            if (v138 <= 0x3FFFFFFFFFFFFFFELL) {
              v34 = v33;
            }
            else {
              v34 = 0x7FFFFFFFFFFFFFFFLL;
            }
            a1 = collision_6704c0(&v137, v34);
            v31 = v138;
          }
          v35 = v31 >> 6;
          v138 = v31 + 1;
          v36 = 1LL << v31;
          if ((v32 & 0x10) != 0) {
            v37 = *(_QWORD*)(v137 + 8 * v35) | v36;
          }
          else {
            v37 = *(_QWORD*)(v137 + 8 * v35) & ~v36;
          }
          *(_QWORD*)(v137 + 8 * v35) = v37;
          if ((unsigned __int64)v23 >= v24) {
            v38 = (char*)(v23 - v22);
            v39 = (v23 - v22) >> 2;
            v40 = v39 + 1;
            if ((unsigned __int64)(v39 + 1) >> 62 != 0) {
              goto LABEL_208;
            }
            if ((__int64)(v24 - (_QWORD)v22) >> 1 > v40) {
              v40 = (__int64)(v24 - (_QWORD)v22) >> 1;
            }
            if (v24 - (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFFCLL) {
              v41 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v41 = v40;
            }
            if (v41 != 0) {
              if (v41 >> 62 != 0) {
                goto LABEL_209;
              }
              v42 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v41, 16, 0);
            }
            else {
              v42 = 0;
            }
            v24 = v42 + 4 * v41;
            v43 = (char*)(v23 - v22);
            v44 = (__int64)&v38[v42 + -4 * v39];
            *(_DWORD*)&v38[v42] = v25;
            v23 = &v38[v42 + 4];
            a1 = memcpy(v44, v22, v43);
            if (v22 != nullptr) {
              v45 = fw_memory_g_heap_manager_ptr;
              v46 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v46 = 56;
              }
              a1 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
              v22 = (char*)v44;
              v21 = (_QWORD*)v45;
            }
            else {
              v22 = (char*)v44;
              v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            }
          }
          else {
            *(_DWORD*)v23 = v25;
            v23 += 4;
          }
          v1 = GameData_212c790;
          if ((*(_DWORD*)(v29 + 84) & 0x80000000) == 0) {
            game_gmap_1341d60(v29, 0);
            a1 = CorpsManager_9723f0(*(unsigned int*)(v29 + 84));
          }
        }
      }
    LABEL_60:
      if (v25 == *(_DWORD*)(*(_QWORD*)(v11 + 392) - 4LL) &&
          *(_DWORD*)(v11 + 360) == 1) {
        v47 = v138;
        if (v138 == v139 << 6) {
          if ((__int64)(v138 + 1) < 0) {
            goto LABEL_207;
          }
          v48 = v139 << 7;
          if (v139 << 7 <= (v138 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
            v48 = (v138 & 0x3FFFFFFFFFFFFFC0LL) + 64;
          }
          if (v138 <= 0x3FFFFFFFFFFFFFFELL) {
            v49 = v48;
          }
          else {
            v49 = 0x7FFFFFFFFFFFFFFFLL;
          }
          a1 = collision_6704c0(&v137, v49);
          v47 = v138;
        }
        v138 = v47 + 1;
        *(_QWORD*)(v137 + ((v47 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |= 1LL << v47;
        if ((unsigned __int64)v23 < v24) {
          *(_DWORD*)v23 = v25;
          v23 += 4;
        }
        else {
          v50 = (char*)(v23 - v22);
          v51 = (v23 - v22) >> 2;
          v52 = v51 + 1;
          if ((unsigned __int64)(v51 + 1) >> 62 != 0) {
            goto LABEL_208;
          }
          if ((__int64)(v24 - (_QWORD)v22) >> 1 > v52) {
            v52 = (__int64)(v24 - (_QWORD)v22) >> 1;
          }
          if (v24 - (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFFCLL) {
            v53 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v53 = v52;
          }
          if (v53 != 0) {
            if (v53 >> 62 != 0) {
              goto LABEL_209;
            }
            v54 = fw_memory_HeapManager_Allocate_alt1(*v21, 4 * v53, 16, 0);
          }
          else {
            v54 = 0;
          }
          v24 = v54 + 4 * v53;
          v55 = (char*)(v23 - v22);
          v56 = (__int64)&v50[v54 + -4 * v51];
          *(_DWORD*)&v50[v54] = v25;
          v23 = &v50[v54 + 4];
          a1 = memcpy(v56, v22, v55);
          if (v22 != nullptr) {
            v57 = 128;
            if (*(_QWORD*)(*v21 + 200LL) == 0) {
              v57 = 56;
            }
            a1 = nn_mem_StandardAllocator_Free(*v21 + v57);
          }
          v22 = (char*)v56;
          v1 = GameData_212c790;
        }
      }
      if (++v19 == v20) {
        goto LABEL_87;
      }
    }
  }
  v24 = 0;
  v23 = nullptr;
  v22 = nullptr;
LABEL_87:
  v58 = *(_DWORD*)(v11 + 376);
  if (v58 < 0) {
    goto LABEL_106;
  }
  v59 = *(_QWORD*)(*v1 + 8);
  v60 = *(__int64**)(v59 + 8);
  v61 = *(__int64**)(v59 + 16);
  if (v60 == v61) {
    goto LABEL_106;
  }
  while (1) {
    v63 = *v60++;
    v62 = v63;
    if (*(_DWORD*)(v63 + 84) == v58) {
      break;
    }
    if (v60 == v61) {
      goto LABEL_106;
    }
  }
  v64 = v138;
  v65 = *(_WORD*)(v62 + 544);
  if (v138 == v139 << 6) {
    if ((__int64)(v138 + 1) < 0) {
    LABEL_207:
      GameRoutine_6706a0(a1);
    }
    v66 = v139 << 7;
    if (v139 << 7 <= (v138 & 0x3FFFFFFFFFFFFFC0LL) + 64) {
      v66 = (v138 & 0x3FFFFFFFFFFFFFC0LL) + 64;
    }
    if (v138 <= 0x3FFFFFFFFFFFFFFELL) {
      v67 = v66;
    }
    else {
      v67 = 0x7FFFFFFFFFFFFFFFLL;
    }
    a1 = collision_6704c0(&v137, v67);
    v64 = v138;
  }
  v68 = v64 >> 6;
  v138 = v64 + 1;
  v69 = 1LL << v64;
  if ((v65 & 0x10) != 0) {
    v70 = *(_QWORD*)(v137 + 8 * v68) | v69;
  }
  else {
    v70 = *(_QWORD*)(v137 + 8 * v68) & ~v69;
  }
  *(_QWORD*)(v137 + 8 * v68) = v70;
  if ((unsigned __int64)v23 >= v24) {
    v121 = (char*)(v23 - v22);
    v122 = (v23 - v22) >> 2;
    v123 = v122 + 1;
    if ((unsigned __int64)(v122 + 1) >> 62 != 0) {
    LABEL_208:
      GameRoutine_6e5a20(a1);
    }
    if ((__int64)(v24 - (_QWORD)v22) >> 1 > v123) {
      v123 = (__int64)(v24 - (_QWORD)v22) >> 1;
    }
    if (v24 - (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFFCLL) {
      v123 = 0x3FFFFFFFFFFFFFFFLL;
    }
    if (v123 != 0) {
      if (v123 >> 62 != 0) {
      LABEL_209:
        GameRoutine_60a210_alt1(a1);
      }
      v124 = fw_memory_HeapManager_Allocate_alt1(*v21, 4 * v123, 16, 0);
    }
    else {
      v124 = 0;
    }
    v125 = (__int64)&v121[v124 + -4 * v122];
    *(_DWORD*)&v121[v124] = *(_DWORD*)(v11 + 376);
    v23 = &v121[v124 + 4];
    memcpy(v125, v22, v121);
    if (v22 != nullptr) {
      v126 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v126 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v126);
    }
    v22 = (char*)v125;
    v1 = GameData_212c790;
    if ((*(_DWORD*)(v62 + 84) & 0x80000000) != 0) {
      goto LABEL_106;
    }
  }
  else {
    *(_DWORD*)v23 = *(_DWORD*)(v11 + 376);
    v23 += 4;
    if ((*(_DWORD*)(v62 + 84) & 0x80000000) != 0) {
      goto LABEL_106;
    }
  }
  game_gmap_1341d60(v62, 0);
  CorpsManager_9723f0(*(unsigned int*)(v62 + 84));
LABEL_106:
  v134 = nullptr;
  v135 = 0;
  v133[0] = 0;
  v133[1] = 0;
  v136 = 1065353216;
  v71 = *(_QWORD*)(v11 + 312);
  if (v71 == 0 ||
      *(__int64 (***)())v71 != game_gmap_anonymous_CorpsPoolMenu_vtable) {
    v71 = 0;
  }
  v73 = *(_QWORD*)(v71 + 256);
  v72 = *(_QWORD*)(v71 + 264);
  v74 = v130;
  v130[0] = GameData_20b60d8;
  v130[1] = v11;
  v132 = v130;
  v131 = v133;
  if (v72 == v73) {
    v81 = 32;
  LABEL_122:
    (*(void (**)(__int64))(*v74 + v81))((__int64)v74);
    goto LABEL_123;
  }
  v75 = 0;
  v76 = GameData_212e008[0];
  do {
    v77 = *(_QWORD*)(v73 + 8 * v75);
    if (v77 != 0) {
      v78 = __dynamic_cast(v77, v76, &GameData_20b33d8, 0);
      if (v78 == 0) {
        goto LABEL_112;
      }
      v140 = v78;
      v80 = v132;
      if (v132 == nullptr) {
      LABEL_206:
        GameRoutine_60a310_alt2(v80, v79);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v132 + 48LL))(v132, &v140) &
           1) != 0) {
        break;
      }
      v73 = *(_QWORD*)(v71 + 256);
      v72 = *(_QWORD*)(v71 + 264);
    }
  LABEL_112:
    ++v75;
  } while (v75 < (v72 - v73) >> 3);
  v74 = v132;
  if (v132 == v130) {
    v81 = 32;
    v1 = GameData_212c790;
    goto LABEL_122;
  }
  v1 = GameData_212c790;
  if (v132 != nullptr) {
    v81 = 40;
    goto LABEL_122;
  }
LABEL_123:
  v129 = 0;
  v82 = *(_QWORD*)(v11 + 304);
  if (v82 == 0 ||
      *(__int64 (***)())v82 != game_gmap_anonymous_CorpsUserMenu_vtable) {
    v82 = 0;
  }
  v84 = *(_QWORD*)(v82 + 232);
  v83 = *(_QWORD*)(v82 + 240);
  v85 = v130;
  v131 = (_QWORD*)v11;
  v130[0] = GameData_20b6158;
  v130[1] = &v129;
  v132 = v130;
  if (v83 == v84) {
    v92 = 32;
    v90 = fw_memory_g_heap_manager_ptr;
    v91 = v128;
  LABEL_139:
    (*(void (**)(__int64))(*v85 + v92))((__int64)v85);
    goto LABEL_140;
  }
  v86 = 0;
  v87 = GameData_212e008[0];
  do {
    v88 = *(_QWORD*)(v84 + 8 * v86);
    if (v88 != 0) {
      v89 = __dynamic_cast(v88, v87, &GameData_20b33d8, 0);
      if (v89 == 0) {
        goto LABEL_128;
      }
      v140 = v89;
      v80 = v132;
      if (v132 == nullptr) {
        goto LABEL_206;
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v132 + 48LL))(v132, &v140) &
           1) != 0) {
        break;
      }
      v84 = *(_QWORD*)(v82 + 232);
      v83 = *(_QWORD*)(v82 + 240);
    }
  LABEL_128:
    ++v86;
  } while (v86 < (v83 - v84) >> 3);
  v85 = v132;
  if (v132 == v130) {
    v92 = 32;
    v90 = fw_memory_g_heap_manager_ptr;
    v91 = v128;
    v1 = GameData_212c790;
    goto LABEL_139;
  }
  v90 = fw_memory_g_heap_manager_ptr;
  v91 = v128;
  v1 = GameData_212c790;
  if (v132 != nullptr) {
    v92 = 40;
    goto LABEL_139;
  }
LABEL_140:
  if (v129 == 0) {
    CorpsManager_9723f0(*(unsigned int*)(v11 + 376));
  }
  if (v23 != v22) {
    v93 = 0;
    do {
      v94 = *(_DWORD*)&v22[4 * v93];
      if ((v94 & 0x80000000) == 0) {
        v95 = *(_QWORD*)(*v1 + 8);
        v96 = *(__int64**)(v95 + 8);
        v97 = *(__int64**)(v95 + 16);
        if (v96 != v97) {
          while (1) {
            v99 = *v96++;
            v98 = v99;
            if (*(_DWORD*)(v99 + 84) == v94) {
              break;
            }
            if (v96 == v97) {
              goto LABEL_144;
            }
          }
          GameRoutine_133f780(v98, v127, 1);
          if (((*(_QWORD*)(v137 + 8 * (v93 >> 6)) >> v93) & 1) != 0) {
            game_gmap_1341d60(v98, 1);
          }
        }
      }
    LABEL_144:
      ++v93;
    } while (v93 != (v23 - v22) >> 2);
  }
  v100 = *(_QWORD*)(*v1 + 8);
  if (v91 < 0 || (v101 = *(__int64**)(v100 + 8), v102 = *(__int64**)(v100 + 16),
                  v101 == v102)) {
  LABEL_156:
    *(_DWORD*)(v100 + 56) = -1;
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
  }
  else {
    while (1) {
      v103 = *v101++;
      if (*(_DWORD*)(v103 + 84) == v91) {
        break;
      }
      if (v101 == v102) {
        goto LABEL_156;
      }
    }
    LODWORD(v130[0]) = v91;
    v109 = *(_QWORD*)(v100 + 40);
    *(_DWORD*)(v100 + 56) = v91;
    v110 = wmemchr();
    v111 = *(_QWORD*)(v100 + 32);
    v112 = *(_QWORD*)(v100 + 40);
    if (v110 != 0) {
      v109 = v110;
    }
    if (v109 != v112) {
      v113 = v112 - (v109 + 4);
      if (v112 != v109 + 4) {
        memmove(v109, v109 + 4, v112 - (v109 + 4));
        v111 = *(_QWORD*)(v100 + 32);
      }
      *(_QWORD*)(v100 + 40) = v109 + v113;
    }
    TroopMgr_1353fb0(v100 + 32, v111, v130);
  }
  v104 = *(_QWORD*)GameData_2131860;
  if (*(_DWORD*)(v11 + 360) != 0) {
    v105 = 10;
  }
  else {
    v105 = 9;
  }
  if (v104 != 0) {
    *(_DWORD*)(v104 + 272) = v105;
    v106 = v134;
    if (v134 == nullptr) {
      goto LABEL_178;
    }
    do {
    LABEL_174:
      v114 = (_QWORD*)*v106;
      if (*(_QWORD*)(*(_QWORD*)v90 + 200LL) != 0) {
        v115 = 128;
      }
      else {
        v115 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v90 + v115);
      v106 = v114;
    } while (v114 != nullptr);
  }
  else {
    v107 = *(_QWORD*)GameData_21316c8;
    if (*(_QWORD*)GameData_21316c8 != 0) {
      *(_DWORD*)(v107 + 208) = v105;
      v108 = 5;
    }
    else {
      v107 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = v105;
      v108 = 12;
    }
    *(_DWORD*)(v107 + 152) = v108;
    v106 = v134;
    if (v134 != nullptr) {
      goto LABEL_174;
    }
  }
LABEL_178:
  v116 = v133[0];
  v133[0] = 0;
  if (v116 != 0) {
    v117 = 128;
    if (*(_QWORD*)(*(_QWORD*)v90 + 200LL) == 0) {
      v117 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v90 + v117);
  }
  if (v137 != 0) {
    v118 = 128;
    if (*(_QWORD*)(*(_QWORD*)v90 + 200LL) == 0) {
      v118 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v90 + v118);
  }
  if (v22 != nullptr) {
    v119 = 128;
    if (*(_QWORD*)(*(_QWORD*)v90 + 200LL) == 0) {
      v119 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v90 + v119);
  }
  return 4;
}

__int64 GmapCorpsMenu_1733920(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _DWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  signed __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  struct {
    _DWORD* v28[4];
    _DWORD** v29;
  } v28_;
  unsigned int v30;

  v2 = *(_DWORD**)a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(unsigned int*)(*(_QWORD*)a2 + 108LL);
  v30 = v4;
  if ((v4 & 0x80000000) != 0) {
    return 0;
  }
  if ((_DWORD)v4 == *(_DWORD*)(v3 + 376)) {
    return 0;
  }
  v6 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v2 + 560LL))(v2);
  if (v6 == 0) {
    return 0;
  }
  v8 = *(char**)(v3 + 384);
  v7 = *(char**)(v3 + 392);
  v9 = v6;
  if (v8 != v7) {
    v10 = v7 - v8 - 4;
    if ((~(_BYTE)v10 & 0xC) != 0) {
      v11 = ((unsigned __int8)((unsigned int)v10 >> 2) + 1) & 3;
      while (*(_DWORD*)v8 != (_DWORD)v4) {
        v8 += 4;
        if (--v11 == 0) {
          goto LABEL_9;
        }
      }
    }
    else {
    LABEL_9:
      if (v10 < 0xC) {
        goto LABEL_24;
      }
      v8 += 8;
      while (1) {
        if (*((_DWORD*)v8 - 2) == (_DWORD)v4) {
          v8 -= 8;
          goto LABEL_20;
        }
        if (*((_DWORD*)v8 - 1) == (_DWORD)v4) {
          v8 -= 4;
          goto LABEL_20;
        }
        if (*(_DWORD*)v8 == (_DWORD)v4) {
          goto LABEL_20;
        }
        if (*((_DWORD*)v8 + 1) == (_DWORD)v4) {
          break;
        }
        v12 = v8 + 8;
        v8 += 16;
        if (v12 == v7) {
          goto LABEL_24;
        }
      }
      v8 += 4;
    }
  }
LABEL_20:
  if (v8 != v7) {
    v13 = v7 - (v8 + 4);
    if (v7 != v8 + 4) {
      memmove(v8, v8 + 4, v7 - (v8 + 4));
    }
    *(_QWORD*)(v3 + 392) = &v8[v13];
  }
LABEL_24:
  if ((game_972b70((unsigned int)v4, v9) & 1) != 0) {
    v14 = *(_DWORD*)(v9 + 416);
    if ((v14 & 0x180000) == 0x100000) {
      v15 = *(unsigned __int8*)(v9 + 501);
      *(_BYTE*)(v9 + 501) = -1;
      *(_DWORD*)(v9 + 416) = v14 & 0xFFE7FFFF;
      CorpsManager_972290(v15);
      v14 = *(_DWORD*)(v9 + 416);
    }
    *(_BYTE*)(v9 + 501) = v4;
    *(_DWORD*)(v9 + 416) = v14 | 0x100000;
    CorpsManager_972290((unsigned int)v4);
  }
  v16 = *(_QWORD*)(a1 + 16);
  v17 = *(_QWORD*)(v16 + 8);
  if (v17 != 0 && *(_QWORD*)(v16 + 24) != 0) {
    v19 = v17 - 1;
    if ((v17 & (v17 - 1)) != 0) {
      v20 = v4;
      if (v17 <= v4) {
        v20 = (unsigned int)v4 % (unsigned int)v17;
      }
    }
    else {
      v20 = ((_DWORD)v17 + 0x7FFFFFFF) & (unsigned int)v4;
    }
    v21 = *(__int64***)(*(_QWORD*)v16 + 8 * v20);
    if (v21 != nullptr) {
      v22 = *v21;
      if (v22 != nullptr) {
        if ((v17 & v19) == 0) {
          while (1) {
            v24 = v22[1];
            if (v24 == v4) {
              if (*((_DWORD*)v22 + 4) == (_DWORD)v4) {
                goto LABEL_52;
              }
            }
            else if ((v24 & v19) != v20) {
              goto LABEL_53;
            }
            v22 = (__int64*)*v22;
            if (v22 == nullptr) {
              goto LABEL_53;
            }
          }
        }
        do {
          v23 = v22[1];
          if (v23 == v4) {
            if (*((_DWORD*)v22 + 4) == (_DWORD)v4) {
            LABEL_52:
              if (v2[28] < *(_DWORD*)(v22[3] + 112)) {
                break;
              }
              return 0;
            }
          }
          else {
            if (v23 >= v17) {
              v23 %= v17;
            }
            if (v23 != v20) {
              break;
            }
          }
          v22 = (__int64*)*v22;
        } while (v22 != nullptr);
      }
    }
  }
LABEL_53:
  v28_.v28[0] = &v30;
  *(_QWORD*)(GmapCorpsMenu_1733c60((float*)v16, (int*)&v30, v28_.v28) + 24) =
      v2;
  v25 = *(unsigned __int8*)(v9 + 501);
  if ((*(_BYTE*)(v9 + 418) & 0x10) == 0) {
    v25 = -1;
  }
  if (v25 == v30) {
    v28_.v28[0] = GameData_1fb0db0;
    v28_.v28[1] = (_DWORD*)v9;
    v28_.v29 = v28_.v28;
    game_CorpsManager_EachUnit_alt1(v30, (__int64)v28_.v28);
    if (v28_.v29 == v28_.v28) {
      v26 = 8;
    }
    else {
      if (v28_.v29 == nullptr) {
        return 0;
      }
      v26 = 10;
    }
    (*(void (**)(void)) & (*v28_.v29)[v26])();
  }
  return 0;
}

__int64 GmapCorpsMenu_1733c60(float* a1, int* a2, _DWORD** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  _DWORD* v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 primeEm;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  float* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;

  v4 = *a2;
  v5 = *((_QWORD*)a1 + 1);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
    }
    else {
      v3 = v8 & v4;
    }
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != 0) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = *(_QWORD*)(result + 8);
            if (v12 == v4) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = *(_QWORD*)(result + 8);
          if (v11 == v4) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v14 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  v15 = a1[8];
  LODWORD(v14) = *v14;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 16) = (_DWORD)v14;
  v16 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v5 == 0 || (float)(v15 * (float)v5) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v5 >= 3) {
      v18 = (v5 & (v5 - 1)) != 0;
    }
    v19 = v18 | (2 * v5);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      primeEm = v20;
    }
    else {
      primeEm = v19;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v22 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v22;
      v5 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v5) {
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      v29 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v42 = result;
        v29 = std___1___next_prime(v29);
        result = v42;
      }
      else {
        v30 = 1LL << -(char)__clz(v29 - 1);
        if (v29 >= 2) {
          v29 = v30;
        }
      }
      if (primeEm <= v29) {
        primeEm = v29;
      }
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v43 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v43 != 0) {
          v44 = result;
          v45 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v45);
          result = v44;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v23 = result;
    v24 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v25 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v24;
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v26);
    }
    v27 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v28 = 0;
      result = v23;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v28 + 48) = 0;
        v31 = *(_QWORD*)a1 + 8 * v28;
        v28 += 8;
        *(_QWORD*)(v31 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v28);
    }
    else {
      v28 = 0;
      result = v23;
    }
    if ((primeEm & 7) != 0) {
      v32 = 8 * v28;
      do {
        --v27;
        *(_QWORD*)(*(_QWORD*)a1 + v32) = 0;
        v32 += 8;
      } while (v27 != 0);
    }
    v34 = a1 + 4;
    v33 = *((_QWORD**)a1 + 2);
    if (v33 != nullptr) {
      v35 = v33[1];
      v36 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v35 >= primeEm) {
          v35 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v35) = v34;
        v37 = (_QWORD*)*v33;
        if (*v33 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v38 = v37[1];
          if (v38 >= primeEm) {
            v38 %= primeEm;
          }
          if (v38 != v35) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v38) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v33;
              goto LABEL_60;
            }
            *v33 = *v37;
            *v37 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v38);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v38) = v37;
            v37 = v33;
          }
          v38 = v35;
        LABEL_60:
          v33 = v37;
          v37 = (_QWORD*)*v37;
          v35 = v38;
          if (v37 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v39 = v35 & v36;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v34;
      while (1) {
        v40 = (_QWORD*)*v33;
        if (*v33 == 0) {
          break;
        }
        v41 = v40[1] & v36;
        if (v41 == v39) {
          v33 = (_QWORD*)*v33;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) != 0) {
          *v33 = *v40;
          *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v33;
          v33 = v40;
          v39 = v41;
        }
      }
    }
  LABEL_83:
    v5 = *((_QWORD*)a1 + 1);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = (v5 - 1) & v4;
    }
  }
  v46 = *(_QWORD*)a1;
  v47 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v47 != nullptr) {
    *(_QWORD*)result = *v47;
    *v47 = result;
  }
  else {
    v48 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *(_QWORD*)result = v48;
    *(_QWORD*)(v46 + 8 * v3) = a1 + 4;
    if (*(_QWORD*)result != 0) {
      v49 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v49 >= v5) {
          v49 %= v5;
        }
      }
      else {
        v49 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__int64 GmapCorpsMenu_1734260(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(__int64**)(a1 + 8);
  v6 = v4;
  if (*v5 == 0) {
    *v5 = v4;
    v11 = **(_QWORD**)(a1 + 8);
    if (v11 != 0) {
      v12 = *(unsigned __int8*)(v11 + 501);
      v13 = *(unsigned int*)(v3 + 376);
      if ((*(_BYTE*)(v11 + 418) & 0x10) == 0) {
        v12 = -1;
      }
      if (v12 == (_DWORD)v13) {
        v15[0] = GameData_1fb0db0;
        v15[1] = v11;
        v16 = v15;
        game_CorpsManager_EachUnit(v13, v15);
        if (v16 == v15) {
          v14 = 32;
        }
        else {
          if (v16 == nullptr) {
            goto LABEL_3;
          }
          v14 = 40;
        }
        (*(void (**)(void*))(*v16 + v14))(v16);
      }
    }
  }
LABEL_3:
  v7 = *(_DWORD*)(v3 + 376);
  if ((GameRoutine_972b70(v7, v6) & 1) != 0) {
    v8 = *(_DWORD*)(v6 + 416);
    if ((v8 & 0x180000) == 0x100000) {
      v9 = *(unsigned __int8*)(v6 + 501);
      *(_BYTE*)(v6 + 501) = -1;
      *(_DWORD*)(v6 + 416) = v8 & 0xFFE7FFFF;
      GameRoutine_972290(v9);
      v8 = *(_DWORD*)(v6 + 416);
    }
    *(_BYTE*)(v6 + 501) = v7;
    *(_DWORD*)(v6 + 416) = v8 | 0x100000;
    GameRoutine_972290(v7);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_IsOppositeEmpty_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_CanChangeLeader_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_Exchange_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (*(_QWORD*)(*(_QWORD*)(*a2 + 8LL) + 344LL) == *a2 ||
      (*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 560LL))(*a2) != 0) {
    return 0;
  }
  **(_QWORD**)(a1 + 8) = v2;
  return 1;
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda3_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0 ||
      *(_QWORD*)(**(_QWORD**)(a1 + 8) + 344LL) == v2) {
    return 0;
  }
  **(_QWORD**)(a1 + 16) = v2;
  return 1;
}

__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (result != 0) {
    if (**(_DWORD**)(a1 + 8) == *(__int16*)(result + 490)) {
      **(_QWORD**)(a1 + 16) = v2;
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 game_gmap_GmapCorpsMenu_ChangeLeader_lambda0_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (result != 0) {
    if (*(_BYTE*)(v2 + 116) == 1) {
      **(_QWORD**)(a1 + 8) = v2;
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

bool game_gmap_GmapCorpsMenu_SetPoolTab_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8) + 344LL);
  if (v3 == *a2) {
    v4 = *(__int64**)(a1 + 8);
    v5 = *v4;
    v6 = *(_QWORD*)(*v4 + 336);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
    }
    *(_QWORD*)(v5 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 1, 0, 0);
    v7 = *(_QWORD*)(v5 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v8 = *(_QWORD*)(v5 + 336);
      v9 = 4;
      if (v8 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 120LL))(v8) & 1) != 0) {
          v9 = 4;
        }
        else {
          v9 = 0;
        }
      }
    }
    else {
      v9 = 4;
    }
    *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v9;
  }
  return v3 == v2;
}

bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8) + 344LL);
  if (v3 == *a2) {
    v4 = *(__int64**)(a1 + 8);
    v6 = *v4;
    v7 = *(_QWORD*)(*v4 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v6 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
    v8 = *(_QWORD*)(v6 + 336);
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v9 = *(_QWORD*)(v6 + 336);
      v10 = 4;
      if (v9 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
      }
    }
    else {
      v10 = 4;
    }
    *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v10;
    **(_DWORD**)(a1 + 16) = 0;
  }
  return v3 == v2;
}

bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda1_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = *a2;
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v4 == 0) {
    v5 = *(__int64**)(a1 + 8);
    v6 = *v5;
    v7 = *(_QWORD*)(*v5 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v6 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
    v8 = *(_QWORD*)(v6 + 336);
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v9 = *(_QWORD*)(v6 + 336);
      v10 = 4;
      if (v9 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
      }
    }
    else {
      v10 = 4;
    }
    *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v10;
    **(_DWORD**)(a1 + 16) = 0;
  }
  return v4 == 0;
}

bool game_gmap_GmapCorpsMenu_SelectedUser_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = *a2;
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v4 == 0) {
    v5 = *(__int64**)(a1 + 8);
    v6 = *v5;
    v7 = *(_QWORD*)(*v5 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v6 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
    v8 = *(_QWORD*)(v6 + 336);
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v9 = *(_QWORD*)(v6 + 336);
      v10 = 4;
      if (v9 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
      }
    }
    else {
      v10 = 4;
    }
    *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v10;
    **(_DWORD**)(a1 + 16) = 0;
  }
  return v4 == 0;
}

#pragma GCC visibility pop
