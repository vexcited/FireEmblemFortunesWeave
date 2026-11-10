#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1472240(void);
__int64 GameRoutine_159ae00(void);
__int64 GameVariable_826e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 (*GameData_20417b0[])();
extern __int64 GameData_22491f8;
extern __int64 GameData_2249208;
extern __int64 GameData_2249218;
extern __int64 GameData_2249228;
extern __int64 GameData_2249238;
extern __int64 GameData_2249248;
extern __int64 GameData_2249258;
extern __int64 GameData_2249278;
extern __int64 GameData_2249288;
extern __int64 GameData_2249298;
extern __int64 GameData_22492a8;
extern __int64 GameData_22492b8;
extern __int64 GameData_22492c8;
extern __int64 GameData_22492d8;
extern __int64 GameData_22492e8;
extern __int64 GameData_22492f8;
extern __int64 GameData_2249308;
extern __int64 GameData_2249378;
extern __int64 GameData_22493a0;
extern __int64 GameData_22493c8;
extern __int64 GameData_22493f0;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(void);
void game_facility_FacilityVariable_EntryState();
__int64 FacilityVariable_1472320();
__int64 FacilityVariable_1472830(__int64 result);
_QWORD* Unit_6d0b20(_QWORD* result, _DWORD*, char);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__attribute__((swiftcall)) void
game_12dd620(PSEUDO_X8, unsigned __int16* result, int, int, int);
__int64* game_149e9e0(unsigned __int8);
__int64 GameRoutine_2b0();
__int64 GameRoutine_682cd0(__int64, __int64, __int64);
__int64 GameVariable_828dc0_alt1(__int64, unsigned __int64*,
                                 int) __asm__("GameVariable_828dc0");
__int64 Unit_6d0700(__int64 result, _DWORD*, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(__int64 result);
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
const char* GameConst_7f8760(unsigned __int8);
extern _UNKNOWN* GameData_1f9cab8;
extern _UNKNOWN* GameData_1f9cc38;
extern _UNKNOWN GameData_1a8af28;
extern _UNKNOWN GameData_1af12de;
extern _UNKNOWN GameData_1af4ee0;
extern _UNKNOWN GameData_2249450;
extern __int64 (*GameData_203fbb0[])();
extern __int64* GameData_212c880[5];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_21c99b0;
extern __int64 GameData_2249270;
extern __int64 GameData_2249350;
extern __int64 GameData_2249350_alt1[] __asm__("GameData_2249350");
extern __int64 GameData_2249358;
extern __int64 GameData_2249360;
extern __int64 GameData_2249368;
extern __int64 GameData_2249370;
extern __int64 GameData_2249380;
extern __int64 GameData_2249388;
extern __int64 GameData_2249390;
extern __int64 GameData_2249398;
extern __int64 GameData_22493a8;
extern __int64 GameData_22493b0;
extern __int64 GameData_22493b8;
extern __int64 GameData_22493c0;
extern __int64 GameData_22493d0;
extern __int64 GameData_22493d8;
extern __int64 GameData_22493e0;
extern __int64 GameData_22493e8;
extern __int64 GameData_22493f8;
extern __int64 GameData_2249400;
extern __int64 GameData_2249408;
extern __int64 GameData_2249410;
extern __int64 GameData_2249440;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_UnitListSet_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_1a9f09e;
void FacilityUnitList_145e2c0(__int64**, __int64, char);
__int64* FacilityVariable_1472240();
__int64 FacilityVariable_1472420(unsigned __int64* a1, unsigned __int64* a2,
                                 char a3);
unsigned __int64 FacilityVariable_1472560(unsigned __int64 result);
__int64* FacilityVariable_1472720(__int64 a1);
__int64 FacilityVariable_1472c90(__int64 a1);
__int64 FacilityVariable_1472dc0(__int64 a1);

void game_facility_FacilityVariable_EntryState()
{
  __int64 v0;
  __int64 v1;
  _QWORD v2[4];
  _QWORD* v3;

  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameModeData_instance_ + 40;
    GameRoutine_1472240();
    v3 = v2;
    GameVariable_826e40(v0, 9, &GameData_2249378, 0, 0, 0, 0xFFFFFFFFLL, 2,
                        GameData_20417b0, v0);
    if (v3 == nullptr ||
        ((*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &GameData_22493a0),
         v3 == nullptr) ||
        ((*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &GameData_22493c8),
         v3 == nullptr)) {
      GameRoutine_60a310();
    }
    (*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &GameData_22493f0);
    if (v3 == v2) {
      v1 = 32;
    }
    else {
      if (v3 == nullptr) {
        return;
      }
      v1 = 40;
    }
    (*(void (**)(void))(*v3 + v1))();
  }
}

__int64* FacilityVariable_1472240()
{
  _QWORD v1[6];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2249450,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2249450) != 0) {
    GameData_2249350 = 0;
    GameData_2249358 = (__int64)&GameData_1a9f09e;
    GameData_2249360 = 0;
    GameData_2249368 = 0;
    GameData_2249370 = 0;
    GameData_2249378 = 0;
    GameData_2249380 = (__int64)&GameData_1a9f09e;
    GameData_2249388 = 0;
    GameData_2249390 = 0;
    GameData_2249398 = 0;
    GameData_22493a0 = 0;
    GameData_22493a8 = (__int64)&GameData_1a9f09e;
    GameData_22493b0 = 0;
    GameData_22493b8 = 0;
    GameData_22493c0 = 0;
    GameData_22493c8 = 0;
    GameData_22493e0 = 0;
    GameData_22493e8 = 0;
    GameData_22493d0 = (__int64)&GameData_1a9f09e;
    GameData_22493d8 = 0;
    GameData_22493f0 = 0;
    GameData_22493f8 = (__int64)&GameData_1a9f09e;
    GameData_2249408 = 0;
    GameData_2249410 = 0;
    GameData_2249400 = 0;
    GameData_2249440 = 0;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_2249450);
  }
  if (GameData_2249350 == 0) {
    v1[4] = 0;
    GameRoutine_682cd0((__int64)&GameData_2249350, GameData_2249270,
                       (__int64)v1);
  }
  return &GameData_2249350;
}

__int64 FacilityVariable_1472320()
{
  char v0;

  v0 = GameRoutine_159ae00();
  game_VariableManager_SetFlag(&GameData_22491f8, v0 & 1);
  game_VariableManager_SetFlag(&GameData_2249208, 0);
  game_VariableManager_SetFlag(&GameData_2249218, 0);
  game_VariableManager_SetFlag(&GameData_2249228, 0);
  game_VariableManager_SetFlag(&GameData_2249238, 0);
  game_VariableManager_SetFlag(&GameData_2249248, 0);
  game_VariableManager_SetFlag(&GameData_2249258, 0);
  game_VariableManager_SetFlag(&GameData_22492a8, 0);
  game_VariableManager_SetFlag(&GameData_22492b8, 0);
  game_VariableManager_SetFlag(&GameData_22492c8, 0);
  game_VariableManager_SetFlag(&GameData_22492d8, 0);
  game_VariableManager_SetFlag(&GameData_22492e8, 0);
  game_VariableManager_SetFlag(&GameData_22492f8, 0);
  return game_VariableManager_SetFlag(&GameData_2249308, 0);
}

__int64 FacilityVariable_1472420(unsigned __int64* a1, unsigned __int64* a2,
                                 char a3)
{
  unsigned int v6;
  __int64 v7;
  __int16* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  _WORD v15[6];

  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), a1);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v8 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v8 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  if (v6 <= 10000 * v9 + 100 * v10 + v11) {
    game_12dd620((void*)((__int64)v15),
                 *(unsigned __int16**)GameData_212c6c0[0], v9, v10, v11);
    game_VariableManager_SetFlag_alt1((__int64)a1,
                                      10000 * v15[0] + 100 * v15[1] + v15[2]);
    return game_VariableManager_SetFlag_alt1((__int64)a2, 1 << a3);
  }
  else {
    v12 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v13 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), a2);
      if (v13 != 0) {
        v12 = *(_DWORD*)(v13 + 32);
      }
      else {
        v12 = 0;
      }
    }
    return game_VariableManager_SetFlag_alt1((__int64)a2,
                                             v12 | (unsigned int)(1 << a3));
  }
}

unsigned __int64 FacilityVariable_1472560(unsigned __int64 result)
{
  int v3;
  __int16* v4;
  unsigned __int8 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  void* v13;
  void* v14;
  int v15;
  int v16;
  struct {
    unsigned __int64 v17;
    char* v18;
  } v17_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  if ((int)result < 1) {
    return result;
  }
  v3 = result;
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)&v17_.v17),
               *(unsigned __int16**)GameData_212c6c0[0], *v4, v4[1], v4[2]),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  game_VariableManager_SetFlag_alt1(
      (__int64)&GameData_2249228,
      10000 * (__int16)v17_.v17 + 100 * SWORD1(v17_.v17) + SWORD2(v17_.v17)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (GameVariable_828dc0_alt1(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                (unsigned __int64*)&GameData_2249238, v3),
       game_GameModeData_instance_ != 0)) {
    v5 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v5 = 0;
  }
  v6 = GameConst_7f8760(v5),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v12 = *(unsigned int*)(game_GameModeData_instance_ + 60);
    if ((unsigned int)v12 > 3) {
      v13 = &GameData_1af4ee0;
    }
    else {
      v13 = *(&GameData_1f9cab8 + v12);
    }
    v11 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    if (v11 > 0xD) {
      v14 = &GameData_1af4ee0;
      goto LABEL_17;
    }
  }
  else {
    v13 = &GameData_1af12de;
  }
  v14 = *(&GameData_1f9cc38 + v11);
LABEL_17:
  v17_.v18 =
      game_util_Format((__int64)&GameData_1a8af28, (__int64)v6, (__int64)v13,
                       (__int64)v14, v7, v8, v9, v10, v17_.v17),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  result = game_HashString((__int64)v17_.v18),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v17_.v17 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), &v17_.v17),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    if (result != 0) {
      v15 = *(_DWORD*)(result + 32);
      if (v15 >= 1) {
        v16 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          result = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&GameData_2249238),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
          if (result == 0) {
            return result;
          }
          v16 = *(_DWORD*)(result + 32);
        }
        if (v16 >= v15) {
          return game_VariableManager_SetFlag_alt1((__int64)&GameData_2249248,
                                                   1);
        }
      }
    }
  }
  return result;
}

__int64* FacilityVariable_1472720(__int64 a1)
{
  __int16* v2;
  __int64* result;
  unsigned __int64 v4;
  int v5;
  __int64* v6;
  int v7;
  __int64 v8;
  _WORD v9[6];

  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v9), *(unsigned __int16**)GameData_212c6c0[0],
               *v2, v2[1], v2[2]);
  game_VariableManager_SetFlag_alt1((__int64)&GameData_2249258,
                                    10000 * v9[0] + 100 * v9[1] + v9[2]);
  result = FacilityVariable_1472240();
  if (*(_QWORD*)a1 != 0) {
    v4 = *(unsigned __int8*)(*(_QWORD*)a1 + 48LL);
    if (*(_BYTE*)(*(_QWORD*)a1 + 48LL) != 0) {
      v5 = 1 << v4;
      v6 = &GameData_2249350_alt1[5 * (unsigned int)(v4 >> 5)];
      v7 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v8 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v6 + 5);
        if (v8 != 0) {
          v7 = *(_DWORD*)(v8 + 32);
        }
        else {
          v7 = 0;
        }
      }
      game_VariableManager_SetFlag_alt1((__int64)(v6 + 5), v7 | v5);
      result = (__int64*)GameData_2249440;
      if (GameData_2249440 != 0) {
        return (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_2249440 +
                                                   48LL))(GameData_2249440);
      }
    }
  }
  return result;
}

__int64 FacilityVariable_1472830(__int64 result)
{
  int v1;
  __int64 v2;

  if ((int)result >= 1) {
    if (game_GameModeData_instance_ == 0) {
      return game_VariableManager_SetFlag(&GameData_2249298, 1);
    }
    GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                        &GameData_2249278, (unsigned int)result);
    if (game_GameModeData_instance_ == 0) {
      return game_VariableManager_SetFlag(&GameData_2249298, 1);
    }
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_2249278);
    if (result != 0) {
      v1 = *(_DWORD*)(result + 32);
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
      LABEL_10:
        if (v1 < (int)v2) {
          return result;
        }
        return game_VariableManager_SetFlag(&GameData_2249298, 1);
      }
    }
    else {
      v1 = 0;
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_10;
      }
    }
    result =
        game_GameVariableTable_Find(*(_QWORD*)(v2 + 48), &GameData_2249288);
    if (result != 0) {
      LODWORD(v2) = *(_DWORD*)(result + 32);
      goto LABEL_10;
    }
    if (v1 >= 0) {
      return game_VariableManager_SetFlag(&GameData_2249298, 1);
    }
  }
  return result;
}

__int64 FacilityVariable_1472c90(__int64 a1)
{
  _DWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64** v8;
  __int64 result;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v1 = (_DWORD*)(a1 + 16);
  v3 = *(_QWORD*)(GameData_21c99b0 + 64);
  if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v3 +
                                        8LL * (*(_DWORD*)(a1 + 16) & 0xFFF)) +
                             24LL) +
                  8LL) &
       0xFFF) != 0) {
    v4 = *(
        _QWORD*)(v3 +
                 8LL * (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v3 +
                                                         8LL * (*(_DWORD*)(a1 +
                                                                           16) &
                                                                0xFFF)) +
                                              24LL) +
                                   8LL) &
                        0xFFF));
    v5 = *(unsigned __int16*)(v4 + 728);
    v6 = (__int64*)(*(_QWORD*)(v4 + 24) + 16LL);
  }
  else {
    v5 = 0;
    v6 = game_g_empty_item_ptr;
  }
  TransporterConst_89b3d0(
      (void*)(v11_.v11),
      *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      v6, v5);
  Unit_6d0700(*(_QWORD*)(a1 + 8), v1, 1);
  FacilityVariable_1472830(1);
  v7 = game_149e9e0(7u);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828dc0_alt1(*(_QWORD*)(game_GameModeData_instance_ + 48),
                             (unsigned __int64*)v7, 1);
  }
  v8 = *(__int64***)(game_UnitListSet_instance_ + 32);
  v11_.v12 = v11_.v11;
  v11_.v11[0] = GameData_203fbb0;
  v11_.v11[1] = v8;
  FacilityUnitList_145e2c0(v8, (__int64)v11_.v11, 0);
  result = (__int64)v11_.v12;
  if (v11_.v12 == v11_.v11) {
    v10 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(__int64))(*v11_.v12 + v10))((__int64)v11_.v12);
}

__int64 FacilityVariable_1472dc0(__int64 a1)
{
  _DWORD* v1;
  __int64 v2;
  __int64* v3;
  __int64** v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v1 = (_DWORD*)(a1 + 16);
  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(a1 + 16) & 0xFFF));
  TransporterConst_89b3d0(
      (void*)(v7_.v7), *(_QWORD*)(game_TransporterConst_List_instance_ + 8),
      *(_QWORD*)(v2 + 24) + 24LL, *(unsigned __int16*)(v2 + 752));
  Unit_6d0b20(*((_QWORD**)v1 - 1), v1, 1);
  v3 = game_149e9e0(6u);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828dc0_alt1(*(_QWORD*)(game_GameModeData_instance_ + 48),
                             (unsigned __int64*)v3, 1);
  }
  v7_.v8 = v7_.v7;
  v4 = *(__int64***)(game_UnitListSet_instance_ + 40);
  v7_.v7[0] = GameData_203fbb0;
  v7_.v7[1] = v4;
  FacilityUnitList_145e2c0(v4, (__int64)v7_.v7, 0);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

#pragma GCC visibility pop
