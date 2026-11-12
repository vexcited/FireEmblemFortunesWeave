#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14d2660(_QWORD, _QWORD);
__int64 GameRoutine_1515810(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1517ac0(_QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f710(_QWORD);
__int64 GameRoutine_70e880(_QWORD, _QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_714b20(void);
__int64 GameRoutine_889be0(_QWORD);
__int64 GameRoutine_ae07e0(_QWORD, _QWORD);
__int64 GmapExploreInfo_135d3c0(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(__int64);
__int64 Impl_1326560(__int64);
__int64 Impl_14def00(_QWORD);
__int64 Impl_1514580(_QWORD, _QWORD);
__int64 Impl_1521320(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 GameData_2131858[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_21316e0[15];
extern __int64* GameData_2131820[5];
extern __int64* GameData_2131828[4];
extern __int64* GameData_2131830[3];
extern __int64* GameData_2131838[2];
extern char GameData_1a9f09e;
__int64 Spot_132abc0(__int64 a1);
__int64 Spot_132ac40(__int64 a1, char a2);
__int64 Spot_132ad00(__int64 a1, __int64 a2);
__int64 Spot_132adf0(__int64 a1);
__int64 Spot_132b0a0(__int64 a1);
__int64 Spot_132b100(__int64 a1, char a2);
__int64 Spot_132b230(__int64 a1, __int64 a2);
__int64 Spot_132b480_alt1(__int64 a1, __int64* a2,
                          int a3) __asm__("Spot_132b480");
__int64 Spot_132c920(__int64 result);
__int64 game_gmap_Spot_CanPopTroop_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 GameRoutine_132c1c0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_132c1c0");
__int64 GameRoutine_14b92e0(_QWORD, _QWORD);
__int64 GameRoutine_adfd80(_QWORD, _QWORD);
__int64 GameRoutine_ae0060(__int64 result, __int64);
__int64 Impl_13261c0_alt1(_QWORD) __asm__("Impl_13261c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_gmap_TroopMgr_CountTroop_134e600(__int64, __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_202b938[])();
extern __int64 (*GameData_202b9c8[])();
extern __int64 (*GameData_202ba48[])();
extern __int64 (*GameData_202bac8[])();
extern __int64 (*GameData_202bbc8[])();
extern __int64 fw_memory_g_heap_manager;
void GameRoutine_132c1c0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_8875e0();
void __attribute__((noreturn)) String_60a1d0();
__attribute__((swiftcall)) void game_gmap_Spot_GetEnemies(PSEUDO_X8 x8_,
                                                          __int64 a1);
__attribute__((swiftcall)) void game_gmap_Spot_GetCaravans(PSEUDO_X8 x8_,
                                                           __int64 a1);
bool game_gmap_Spot_CanPopTroop(__int64 a1, char a2);
bool Spot_132ba80(__int64 a1, __int64 a2);
unsigned __int64 Spot_132c460(unsigned __int64 result, __int64 a2);
__attribute__((swiftcall)) void Dir_70e880(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__int64* GameRoutine_ae07e0_alt1(__int64) __asm__("GameRoutine_ae07e0");
__int64 GameHr_14d2660(__int64, __int64);
__int64 GameHr_adfd80(__int64 result, int, __int64);
__int64 GameRoutine_14b92e0_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_14b92e0");
__int64 GmapExploreInfo_135d3c0_alt1(_QWORD*, __int64,
                                     int) __asm__("GmapExploreInfo_135d3c0");
__int64 Impl_14def00_alt1(__int64 result) __asm__("Impl_14def00");
__int64 Impl_1514580_alt1(__int64 result, __int64*) __asm__("Impl_1514580");
__int64 Impl_1521320_alt1(__int64, __int64*) __asm__("Impl_1521320");
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_1517ac0(__int64, __int64);
unsigned __int64 GameRoutine_65f710_alt1(__int64) __asm__("GameRoutine_65f710");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 Spot_132b480(__int64 a1, __int64 a2, int a3);

__attribute__((swiftcall)) void game_gmap_Spot_GetEnemies(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _WORD* v10;
  _WORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v20_;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(a1 + 120);
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v20 = 0;
  if (v3 == 0) {
    goto LABEL_11;
  }
  v18_.v18[0] = GameData_202b938;
  v18_.v18[1] = &v20_.v20;
  v18_.v19 = v18_.v18;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v5 = 0;
  }
  GameHr_adfd80(v3, v5, (__int64)v18_.v18),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v18_.v19 == v18_.v18) {
    v7 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_10;
    }
    v7 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v18_.v19 + v7))(v18_.v19, v6),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_10:
  v8 = v20_.v20;
  if (v20_.v21 != v20_.v20) {
  LABEL_28:
    v16 = v20_.v21;
    v17 = v20_.v22;
    *a2 = v8;
    a2[1] = v16;
    a2[2] = v17;
    return;
  }
LABEL_11:
  if ((unsigned __int8)Impl_13261c0(a1) != 4 && *(_QWORD*)(a1 + 136) != 0) {
    Impl_13261c0(a1),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = *(_QWORD*)(a1 + 136);
    if (game_GameModeData_instance_ != 0) {
      v10 = (_WORD*)(v9 + 96);
      v11 = (_WORD*)(v9 + 80);
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v11 = v10;
      }
      if (*v11 != 0) {
      LABEL_17:
        Impl_13261c0(a1),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = *(_QWORD*)(a1 + 136);
        v18_.v18[0] = GameData_202b9c8;
        v18_.v18[1] = &v20_.v20;
        v18_.v19 = v18_.v18;
        GameRoutine_14b92e0_alt1(v12, (__int64)v18_.v18),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v18_.v19 == v18_.v18) {
          v13 = 32;
        }
        else {
          if (v18_.v19 == nullptr) {
          LABEL_27:
            v8 = v20_.v20;
            goto LABEL_28;
          }
          v13 = 40;
        }
        (*(void (**)(__int64))(*v18_.v19 + v13))((__int64)v18_.v19),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_27;
      }
    }
    else if (*(_WORD*)(v9 + 80) != 0) {
      goto LABEL_17;
    }
  }
  v14 = v20_.v20;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v14 != 0) {
    v20_.v21 = v14;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

__attribute__((swiftcall)) void game_gmap_Spot_GetCaravans(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  _QWORD* v4;
  __n128 result;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v22_;
  __int64 v25;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = a2;
      if (*(_WORD*)(v3 + 240) != 0) {
        goto LABEL_5;
      }
      v7 = Impl_13261c0(a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      a2 = v4;
      if (v7 != 4) {
        v8 = *(_QWORD*)(a1 + 136);
        if (v8 != 0 && *(_WORD*)(v8 + 112) != 0) {
          v3 = *(_QWORD*)(a1 + 120);
          if (v3 == 0) {
            goto LABEL_19;
          }
        LABEL_5:
          v20_.v20[0] = GameData_202ba48;
          v20_.v20[1] = &v22_.v22;
          v20_.v21 = v20_.v20;
          GameRoutine_ae0060(v3, (__int64)v20_.v20),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v20_.v21 == v20_.v20) {
            v6 = 32;
          }
          else {
            if (v20_.v21 == nullptr) {
              goto LABEL_17;
            }
            v6 = 40;
          }
          (*(void (**)(__int64))(*v20_.v21 + v6))((__int64)v20_.v21),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_17:
          v9 = v22_.v22;
          if (v22_.v23 != v22_.v22) {
          LABEL_18:
            v10 = v22_.v23;
            v11 = v22_.v24;
            *v4 = v9;
            v4[1] = v10;
            v4[2] = v11;
            {
              result;
              return;
            }
          }
        LABEL_19:
          if ((unsigned __int8)Impl_13261c0(a1) != 4 &&
              *(_QWORD*)(a1 + 136) != 0) {
            Impl_13261c0(a1),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (*(_WORD*)(*(_QWORD*)(a1 + 136) + 112LL) == 0) {
              Impl_13261c0(a1),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v15 = *(_QWORD*)(a1 + 136);
              v16 = v20_.v20;
              v20_.v20[0] = GameData_202bac8;
              v20_.v20[1] = &v22_.v22;
              v20_.v21 = v20_.v20;
              v17 = *(unsigned __int16*)(v15 + 112);
              if (*(_WORD*)(v15 + 112) == 0) {
                goto LABEL_33;
              }
              v18 = 8;
              do {
                v25 = *(_QWORD*)(*(_QWORD*)(v15 + 120) + v18);
                if (v20_.v21 == nullptr) {
                  GameRoutine_60a310(),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v14 = COERCE_AS(
                          __typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                (*(void (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21,
                                                                    &v25),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                --v17;
                v18 += 16;
              } while (v17 != 0);
              v16 = v20_.v21;
              if (v20_.v21 == v20_.v20) {
              LABEL_33:
                v19 = 32;
              }
              else {
                if (v20_.v21 == nullptr) {
                LABEL_35:
                  v9 = v22_.v22;
                  goto LABEL_18;
                }
                v19 = 40;
              }
              (*(void (**)(_QWORD*, __int64))(*v16 + v19))(v16, v14),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_35;
            }
          }
          v12 = v22_.v22;
          v4[1] = 0;
          v4[2] = 0;
          *v4 = 0;
          if (v12 != 0) {
            v22_.v23 = v12;
            v13 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v13 = 56;
            }
            {
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v13),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              return;
            }
          }
          {
            result;
            return;
          }
        }
      }
    }
  }
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  {
    result;
    return;
  }
}

bool game_gmap_Spot_CanPopTroop(__int64 a1, char a2)
{
  int v4;
  _BOOL8 result;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 (**v12)();
    char v13;
    char gap9_[23];
    __int64 (***v14)();
  } v12_;

  if ((unsigned __int8)Impl_13261c0(a1) != 5 &&
      (unsigned __int8)Impl_13261c0(a1) != 6 &&
      (unsigned __int8)Impl_13261c0(a1) != 7 &&
      (unsigned __int8)Impl_13261c0(a1) != 10 &&
      (unsigned __int8)Impl_13261c0(a1) != 11) {
    return false;
  }
  v4 = (unsigned __int8)Impl_13261c0(a1);
  result = false;
  if (v4 != 4 && *(_QWORD*)(a1 + 136) != 0) {
    v12_.v12 = GameData_202bbc8;
    v12_.v13 = a2 & 1;
    v12_.v14 = &v12_.v12;
    v6 = game_gmap_TroopMgr_CountTroop_134e600(a1, (__int64)&v12_.v12);
    if (v12_.v14 == &v12_.v12) {
      v7 = 4;
    }
    else {
      if (v12_.v14 == nullptr) {
        goto LABEL_13;
      }
      v7 = 5;
    }
    ((__int64 (*)(__int64))(*v12_.v14)[v7])((__int64)v12_.v14);
  LABEL_13:
    if (v6 > 0) {
      return false;
    }
    v8 = *(_QWORD*)(a1 + 280);
    if (v8 != 0) {
      v9 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
      v10 = *(_QWORD*)(a1 + 280);
      if (v9 == 1) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 112LL))(v10) & 1) == 0 &&
            *(_QWORD*)(a1 + 280) != 0) {
          return false;
        }
      }
      else if (v10 != 0) {
        return false;
      }
    }
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_30;
    }
    v11 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v11 == 0) {
      goto LABEL_30;
    }
    if (*(_BYTE*)(v11 + 152) == 4 &&
        *(_QWORD*)(v11 + 168) == *(_QWORD*)(a1 + 120)) {
      return false;
    }
    if (*(_BYTE*)(v11 + 152) == 6) {
      result = false;
      if (*(_QWORD*)(v11 + 168) == *(_QWORD*)(a1 + 120) ||
          (*(_BYTE*)(a1 + 112) & 1) != 0) {
        return result;
      }
    }
    else {
    LABEL_30:
      if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
        return false;
      }
    }
    return *(_BYTE*)(a1 + 176) != 2;
  }
  return result;
}

__int64 Spot_132abc0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 280);
  if (result != 0) {
    return ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(
                result) != 1 ||
            ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
                 *(_QWORD*)(a1 + 280)) &
             1) == 0) &&
           *(_QWORD*)(a1 + 280) != 0;
  }
  return result;
}

__int64 Spot_132ac40(__int64 a1, char a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  if ((a2 & 1) != 0) {
    result = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
    result = GameRoutine_714b20();
    if (result == 0) {
      return result;
    }
    v4 = result;
    while (*(_BYTE*)(v4 + 33) != 18) {
      if ((GameRoutine_889be0(v4) & 1) != 0 || *(_BYTE*)(v4 + 32) != 0) {
        v4 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 16LL);
        if (v4 != 0) {
          continue;
        }
      }
      return 0;
    }
  }
  return game_GameModeData_instance_ != 0 &&
         (v5 = *(_QWORD*)(game_GameModeData_instance_ + 24)) != 0 &&
         *(_BYTE*)(v5 + 152) == 4 &&
         *(_QWORD*)(v5 + 168) == *(_QWORD*)(a1 + 120);
}

__int64 Spot_132ad00(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  _BYTE v10[12];

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  v5 = v4;
  if (a2 != 0) {
    result = GameRoutine_1515810(v4, a1, a2);
  }
  else {
    v7 = GameData_21316e0[0];
    *(_DWORD*)(v4 + 16) = 0;
    *(_QWORD*)v4 = v7 + 2;
    *(_QWORD*)(v4 + 8) = 0;
    if (game_gmap_GmapClock_instance_ != 0) {
      v8 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v8 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    GameRoutine_70e880(v8, 6);
    result = GameRoutine_70ea50(v8, v10);
    *(_QWORD*)(v5 + 32) = a1;
    *(_BYTE*)(v5 + 42) = 0;
    *(_WORD*)(v5 + 40) = 256;
    v9 = GameData_2131820[0];
    *(_DWORD*)(v5 + 44) = 0;
    *(_DWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_BYTE*)(v5 + 88) = 0;
    *(_QWORD*)v5 = v9 + 2;
  }
  *(_QWORD*)(a1 + 280) = v5;
  return result;
}

__int64 Spot_132adf0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _BYTE v13[12];

  v2 = *(_QWORD*)(a1 + 280);
  if (v2 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
               *(_QWORD*)(a1 + 280)) &
           1) != 0 ||
      (v3 = *(_QWORD*)(a1 + 280)) == 0) {
    result = Impl_13261c0(a1);
    switch ((unsigned __int8)result) {
    case 9u:
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v11 = GameData_21316e0[0];
      *(_DWORD*)(v5 + 16) = 0;
      *(_QWORD*)v5 = v11 + 2;
      *(_QWORD*)(v5 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v12 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v12 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v12, 6);
      result = GameRoutine_70ea50(v12, v13);
      *(_QWORD*)(v5 + 32) = a1;
      *(_BYTE*)(v5 + 42) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 40) = 256;
      v8 = GameData_2131830[0];
      break;
    case 8u:
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v9 = GameData_21316e0[0];
      *(_DWORD*)(v5 + 16) = 0;
      *(_QWORD*)v5 = v9 + 2;
      *(_QWORD*)(v5 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v10 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v10 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v10, 6);
      result = GameRoutine_70ea50(v10, v13);
      *(_QWORD*)(v5 + 32) = a1;
      *(_BYTE*)(v5 + 42) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 40) = 256;
      v8 = GameData_2131838[0];
      break;
    case 5u:
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v6 = GameData_21316e0[0];
      *(_DWORD*)(v5 + 16) = 0;
      *(_QWORD*)v5 = v6 + 2;
      *(_QWORD*)(v5 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v7 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v7 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      GameRoutine_70e880(v7, 6);
      result = GameRoutine_70ea50(v7, v13);
      *(_QWORD*)(v5 + 32) = a1;
      *(_BYTE*)(v5 + 42) = 0;
      *(_QWORD*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 72) = 0;
      *(_WORD*)(v5 + 40) = 256;
      v8 = GameData_2131828[0];
      break;
    default:
      return result;
    }
    *(_QWORD*)(a1 + 280) = v5;
    *(_QWORD*)v5 = v8 + 2;
  }
  else {
    result =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)v3 + 24LL))(*(_QWORD*)(a1 + 280));
    if ((unsigned __int8)result == 5) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 160LL))(v3, 0);
    }
  }
  return result;
}

__int64 Spot_132b0a0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 280);
  if (result != 0) {
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) ==
            1 &&
        ((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 280) + 112LL))(
             *(_QWORD*)(a1 + 280)) &
         1) != 0) {
      return 0;
    }
    else {
      return *(_QWORD*)(a1 + 280);
    }
  }
  return result;
}

__int64 Spot_132b100(__int64 a1, char a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  unsigned int v12;
  struct {
    unsigned int v14[2];
    char* v15;
  } v14_;

  result = *(_QWORD*)(a1 + 280);
  if (result != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)result + 280LL))(result, a2 & 1);
    result = *(_QWORD*)(a1 + 280);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      *(_QWORD*)(a1 + 280) = 0;
    }
  }
  else {
    v4 = 0;
    v5 = GameData_212cf80[0];
    v6 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v7 = GameData_212c780;
    while (1) {
      v8 = *(_QWORD*)(v6 + 48);
      if (*(_BYTE*)(v8 + v4) != 0) {
        v9 = *(_DWORD*)(v8 + v4 + 4);
        if (v9 != 0 && *v7 != 0) {
          v14_.v15 = &GameData_1a9f09e;
          v14_.v14[0] = v9;
          v14_.v14[1] = 0;
          result = SpotMgr_132ffa0_alt1(v14_.v14);
          if (result == a1) {
            break;
          }
        }
      }
      v4 += 8;
      if (v4 == 2400) {
        return result;
      }
    }
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 8LL) + 48LL) + v4;
    v12 = *(_DWORD*)(v11 + 4);
    if (v12 != 0 && *v7 != 0) {
      v14_.v15 = &GameData_1a9f09e;
      v14_.v14[0] = v12;
      v14_.v14[1] = 0;
      result = SpotMgr_132ffa0_alt1(v14_.v14);
      if (result != 0) {
        *(_DWORD*)(v11 + 4) = 0;
      }
    }
  }
  return result;
}

__int64 Spot_132b230(__int64 a1, __int64 a2)
{
  __int64 (**v2)(__int64, int*);
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  int v35;
  int v36;
  int v37;

  v2 = *(__int64 (***)(__int64, int*))a2;
  v35 = 0;
  if (((*v2)(a2, &v35) & 1) != 0) {
    v5 = *(int*)(a2 + 20);
    v6 = *(_BYTE*)(a1 + 176);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v6;
    v7 = *(int*)(a2 + 20);
    v8 = *(_BYTE*)(a1 + 177);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v8;
    v9 = *(int*)(a2 + 20);
    v10 = *(_BYTE*)(a1 + 178);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    v12 = *(_QWORD*)(a1 + 152);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    v13 = *(_QWORD*)(a2 + 8);
    if (v12 != 0) {
      *(_BYTE*)(v13 + v11) = 1;
      v14 = *(int*)(a2 + 20);
      v15 = *(_QWORD*)(a1 + 152);
      *(_DWORD*)(a2 + 20) = v14 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = 4;
      v36 = 0;
      if (((**(__int64 (***)(__int64, int*))a2)(a2, &v36) & 1) != 0) {
        v16 = *(__int64**)(v15 + 80);
        if (v16 != nullptr) {
          v17 = *v16;
        }
        else {
          v17 = 0;
        }
        GameRoutine_65f240(a2, v17);
        v18 = *(int*)(a2 + 20);
        v19 = *(_DWORD*)(v15 + 64);
        *(_DWORD*)(a2 + 20) = v18 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v19;
        v20 = *(__int64**)(v15 + 72);
        if (v20 != nullptr) {
          v21 = *v20;
        }
        else {
          v21 = 0;
        }
        GameRoutine_65f240(a2, v21);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
    else {
      *(_BYTE*)(v13 + v11) = 0;
    }
    v22 = *(int*)(a2 + 20);
    v23 = *(_QWORD*)(a1 + 160);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    v24 = *(_QWORD*)(a2 + 8);
    if (v23 != 0) {
      *(_BYTE*)(v24 + v22) = 1;
      v37 = 0;
      v25 = *(_QWORD*)(a1 + 160);
      if (((**(__int64 (***)(__int64, int*))a2)(a2, &v37) & 1) != 0) {
        v26 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v26 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 1;
        v27 = *(__int64**)(v25 + 8);
        if (v27 != nullptr) {
          v28 = *v27;
        }
        else {
          v28 = 0;
        }
        GameRoutine_65f240(a2, v28);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
    else {
      *(_BYTE*)(v24 + v22) = 0;
    }
    v29 = *(int*)(a2 + 20);
    v30 = *(_QWORD*)(a1 + 280);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    v31 = *(_QWORD*)(a2 + 8);
    if (v30 != 0) {
      *(_BYTE*)(v31 + v29) = 1;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 280) + 288LL))(
          *(_QWORD*)(a1 + 280), a2);
    }
    else {
      *(_BYTE*)(v31 + v29) = 0;
    }
    v32 = *(int*)(a2 + 20);
    v33 = *(_BYTE*)(a1 + 116);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v33;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 Spot_132b480(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v7;
  int v8;
  __int64 v9;
  bool v10;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64* v36;
  __int16* v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int16* v41;
  __int64* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v49;
  int v50;
  int v51;
  _DWORD v52[3];

  v3 = *(_QWORD*)a2;
  v52[0] = 0;
  if (((*(__int64 (**)(__int64, _DWORD*))(v3 + 16))(a2, v52) & 1) == 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  }
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  v8 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v7);
  if (*(unsigned __int8*)(a1 + 176) != v8) {
    v9 = *(_QWORD*)(a1 + 120);
    v10 = v8 == 1 || v9 == 0;
    if (v10 || (*(_WORD*)(v9 + 258) & 0x80) == 0) {
      *(_BYTE*)(a1 + 176) = v8;
      if (v8 == 2) {
        *(_BYTE*)(a1 + 177) = 3;
      }
      if (v8 != 1 && v9 != 0) {
        v12 = GameRoutine_ae07e0_alt1(v9);
        if (*v12 != 0) {
          game_VariableManager_SetFlag_alt1((__int64)v12, 1);
        }
      }
    }
  }
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(a1 + 177) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(a1 + 178) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14);
  v15 = *(_DWORD*)(a2 + 20);
  v16 = *(_QWORD*)(a2 + 8);
  if (a3 <= 19) {
    *(_DWORD*)(a2 + 20) = v15 + 1;
    if (*(_BYTE*)(v16 + v15) != 0) {
      v17 = *(_QWORD**)(a1 + 144);
      if (v17 == nullptr) {
        v24 = *(_QWORD*)a2;
        v52[0] = 0;
        (*(void (**)(__int64, _DWORD*))(v24 + 16))(a2, v52);
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
        if (a3 < 15) {
          goto LABEL_34;
        }
        goto LABEL_21;
      }
      GmapExploreInfo_135d3c0_alt1(v17, a2, a3);
    }
    if (a3 < 15) {
      goto LABEL_34;
    }
  LABEL_21:
    v15 = *(_DWORD*)(a2 + 20);
    v16 = *(_QWORD*)(a2 + 8);
  }
  v18 = v15 + 1LL;
  *(_DWORD*)(a2 + 20) = v18;
  if (*(_BYTE*)(v16 + v15) != 1) {
    goto LABEL_25;
  }
  v19 = *(_QWORD*)(a1 + 152);
  if (v19 != 0) {
    Impl_1514580_alt1(v19, (__int64*)a2);
    goto LABEL_25;
  }
  v22 = v15 + 2LL;
  *(_DWORD*)(a2 + 20) = v15 + 2;
  if ((unsigned int)a3 < 0x13) {
    v49 = v15 + 3;
    v50 = *(unsigned __int8*)(v16 + v18);
    *(_DWORD*)(a2 + 20) = v49;
    v51 = *(unsigned __int8*)(v16 + v22);
    if (v51 != 0) {
      v49 += 4 * v51;
      *(_DWORD*)(a2 + 20) = v49;
    }
    if (v50 != 0) {
      *(_DWORD*)(a2 + 20) = v49 + 8;
      if (v50 != 1) {
        *(_DWORD*)(a2 + 20) = v49 + 9;
        GameRoutine_65f710_alt1(a2);
      }
    }
  LABEL_25:
    if ((unsigned int)a3 < 0x10) {
      goto LABEL_44;
    }
    goto LABEL_26;
  }
  v23 = *(_QWORD*)a2;
  v52[0] = 0;
  (*(void (**)(__int64, _DWORD*))(v23 + 16))(a2, v52);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
LABEL_26:
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  if (*(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) == 1) {
    v21 = *(_QWORD*)(a1 + 160);
    if (v21 != 0) {
      Impl_1521320_alt1(v21, (__int64*)a2);
    }
    else {
      v25 = *(_QWORD*)a2;
      v52[0] = 0;
      (*(void (**)(__int64, _DWORD*))(v25 + 16))(a2, v52);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    }
  }
LABEL_34:
  if ((a3 & 0xFFFFFFFE) == 0x12) {
    v26 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v26 + 1;
    if (*(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) != 0) {
      v27 = *(__int64**)(a1 + 168);
      if (v27 != nullptr) {
        v28 = *(_QWORD*)a2;
        v52[0] = 0;
        if (((*(__int64 (**)(__int64, _DWORD*))(v28 + 16))(a2, v52) & 1) != 0) {
          v29 = *(int*)(a2 + 20);
          v30 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v29 + 2;
          if (*(_BYTE*)(v30 + v29 + 1) != 0) {
            Impl_14def00_alt1(*v27);
          }
        }
      }
      else {
        v31 = *(_QWORD*)a2;
        v52[0] = 0;
        (*(void (**)(__int64, _DWORD*))(v31 + 16))(a2, v52);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    }
  }
  else if (a3 <= 12) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  }
LABEL_44:
  v32 = *(int*)(a2 + 20);
  v33 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  if (*(_BYTE*)(v33 + v32) == 0) {
    goto LABEL_69;
  }
  *(_DWORD*)(a2 + 20) = v32 + 2;
  v34 = *(unsigned __int8*)(v33 + v32 + 1);
  if (v34 > 2) {
    switch (v34) {
    case 3u:
      v35 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      game_gmap_1517ac0(v35, a1);
      break;
    case 4u:
      Spot_132adf0(a1);
      goto LABEL_63;
    case 5u:
      v35 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      v36 = GameData_21316e0[0];
      *(_DWORD*)(v35 + 16) = 0;
      *(_QWORD*)v35 = v36 + 2;
      *(_QWORD*)(v35 + 8) = 0;
      if (game_gmap_GmapClock_instance_ != 0) {
        v37 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
      }
      else {
        v37 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
      }
      Dir_70e880((void*)((__int64)v52), (__int64)v37, 6);
      Dir_70ea50((void*)(v35 + 20), v37, (__int64)v52);
      *(_QWORD*)(v35 + 32) = a1;
      *(_BYTE*)(v35 + 42) = 0;
      *(_WORD*)(v35 + 40) = 256;
      v38 = GameData_2131858[0];
      *(_DWORD*)(v35 + 44) = 0;
      *(_QWORD*)v35 = v38 + 16;
      *(_QWORD*)(v35 + 48) = Impl_1326560(a1);
      break;
    default:
      goto LABEL_63;
    }
    goto LABEL_62;
  }
  if (*(_BYTE*)(v33 + v32 + 1) == 0) {
    v35 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    GameHr_14d2660(v35, a1);
  LABEL_62:
    *(_QWORD*)(a1 + 280) = v35;
    goto LABEL_63;
  }
  if (v34 == 1) {
    v39 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v40 = GameData_21316e0[0];
    *(_DWORD*)(v39 + 16) = 0;
    *(_QWORD*)v39 = v40 + 2;
    *(_QWORD*)(v39 + 8) = 0;
    if (game_gmap_GmapClock_instance_ != 0) {
      v41 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v41 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    Dir_70e880((void*)((__int64)v52), (__int64)v41, 6);
    Dir_70ea50((void*)(v39 + 20), v41, (__int64)v52);
    *(_QWORD*)(v39 + 32) = a1;
    *(_BYTE*)(v39 + 42) = 0;
    *(_WORD*)(v39 + 40) = 256;
    v42 = GameData_2131820[0];
    *(_DWORD*)(v39 + 44) = 0;
    *(_DWORD*)(v39 + 48) = 0;
    *(_QWORD*)(v39 + 56) = 0;
    *(_QWORD*)(v39 + 64) = 0;
    *(_QWORD*)(v39 + 72) = 0;
    *(_QWORD*)(v39 + 80) = 0;
    *(_BYTE*)(v39 + 88) = 0;
    *(_QWORD*)(a1 + 280) = v39;
    *(_QWORD*)v39 = v42 + 2;
  }
LABEL_63:
  v43 = *(_QWORD*)(a1 + 280);
  if (v43 != 0) {
    v44 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v43 + 24LL))(v43);
    v45 = *(_QWORD*)(a1 + 280);
    if (v44 != 1) {
      goto LABEL_67;
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 112LL))(v45) & 1) == 0) {
      v45 = *(_QWORD*)(a1 + 280);
    LABEL_67:
      if (v45 != 0) {
        v46 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v46 + 1;
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v45 + 296LL))(
            v45, a2, *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v46));
      }
    }
  }
LABEL_69:
  if ((unsigned int)a3 >= 0x11) {
    v47 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v47 + 1;
    *(_BYTE*)(a1 + 116) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47) != 0;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
}

bool Spot_132ba80(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64* v30;
  char* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  float v48;
  float v49;
  __int64 v50;
  _BOOL8 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 primeEm;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  int v85;
  struct {
    __int64 v86;
    unsigned __int64 v87;
    char* v88;
  } v86_;

  if (a2 == 0) {
    return *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 40);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 16);
  }
  else {
    v5 = a2 + 1;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
    v86_.v87 = v7;
    v86_.v88 = v8;
    v86_.v86 = v9 | 1;
  }
  else {
    LOBYTE(v86_.v86) = 2 * v6;
    v8 = (char*)&v86_.v86 + 1;
    if (v6 == 0) {
      goto LABEL_14;
    }
  }
  memmove(v8, v5, v7);
LABEL_14:
  v8[v7] = 0;
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 == 0 || *(_QWORD*)(a1 + 24) == 0) {
    v19 = v86_.v87;
    v18 = (__int64)v86_.v88;
    v11 = v86_.v86 & 1;
    v12 = (unsigned __int64)(unsigned __int8)v86_.v86 >> 1;
    goto LABEL_59;
  }
  v11 = v86_.v86 & 1;
  v12 = (unsigned __int64)(unsigned __int8)v86_.v86 >> 1;
  if (v11 != 0) {
    v13 = v86_.v88;
  }
  else {
    v13 = (char*)&v86_.v86 + 1;
  }
  if ((v86_.v86 & 1) != 0) {
    v14 = v86_.v87;
  }
  else {
    v14 = (unsigned __int64)(unsigned __int8)v86_.v86 >> 1;
  }
  v82 = (__int64)v86_.v88;
  v83 = v86_.v87;
  v15 = std___1___hash_memory(v13, v14);
  v16 = v10 - 1;
  v17 = v15;
  if ((v10 & (v10 - 1)) != 0) {
    v2 = v15;
    if (v15 >= v10) {
      v2 = v15 % v10;
    }
  }
  else {
    v2 = v15 & v16;
  }
  v20 = *(__int64***)(*(_QWORD*)a1 + 8 * v2);
  if (v20 == nullptr) {
    v18 = v82;
    v19 = v83;
    goto LABEL_59;
  }
  v21 = *v20;
  if (*v20 == nullptr) {
  LABEL_57:
    v18 = v82;
  LABEL_58:
    v11 = v86_.v86 & 1;
    v19 = v83;
  LABEL_59:
    if (v11 != 0) {
      v31 = (char*)v18;
    }
    else {
      v31 = (char*)&v86_.v86 + 1;
    }
    if (v11 != 0) {
      v12 = v19;
    }
    v32 = std___1___hash_memory(v31, v12);
    v33 = v32;
    v85 = v11;
    v84 = v19;
    if (v10 != 0) {
      v34 = v10 - 1;
      if ((v10 & (v10 - 1)) != 0) {
        v2 = v32;
        if (v32 >= v10) {
          v2 = v32 % v10;
        }
      }
      else {
        v2 = v32 & v34;
      }
      v35 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
      if (v35 != nullptr) {
        v36 = (_QWORD*)*v35;
        if (*v35 != 0) {
          if ((v10 & v34) != 0) {
            v11 = v85;
            while (1) {
              v37 = v36[1];
              if (v37 == v33) {
                v38 = *((unsigned __int8*)v36 + 16);
                v39 = v36[3];
                if ((v38 & 1) == 0) {
                  v39 = v38 >> 1;
                }
                if (v39 == v12) {
                  v40 = (v38 & 1) != 0 ? (_QWORD*)v36[4]
                                       : (_QWORD*)((char*)v36 + 17);
                  if ((unsigned int)memcmp(v40, v31, v12) == 0) {
                    goto LABEL_97;
                  }
                }
              }
              else {
                if (v37 >= v10) {
                  v37 %= v10;
                }
                if (v37 != v2) {
                  goto LABEL_99;
                }
              }
              v36 = (_QWORD*)*v36;
              if (v36 == nullptr) {
                goto LABEL_99;
              }
            }
          }
          do {
            v41 = v36[1];
            if (v41 == v33) {
              v42 = *((unsigned __int8*)v36 + 16);
              v43 = v36[3];
              if ((v42 & 1) == 0) {
                v43 = v42 >> 1;
              }
              if (v43 == v12) {
                v44 = (v42 & 1) != 0 ? (_QWORD*)v36[4]
                                     : (_QWORD*)((char*)v36 + 17);
                if ((unsigned int)memcmp(v44, v31, v12) == 0) {
                LABEL_97:
                  v30 = &fw_memory_g_heap_manager;
                  goto LABEL_140;
                }
              }
            }
            else if ((v41 & v34) != v2) {
              break;
            }
            v36 = (_QWORD*)*v36;
          } while (v36 != nullptr);
        }
      }
      v11 = v85;
    }
  LABEL_99:
    v30 = (__int64*)fw_memory_g_heap_manager_ptr;
    v45 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v36 = v45;
    *v45 = 0;
    v45[1] = v33;
    if (v11 != 0) {
      fw_text_String_CopyTerminated(v45 + 2, v18, v84);
    }
    else {
      v46 = v86_.v87;
      v45[2] = v86_.v86;
      v45[3] = v46;
      v45[4] = v86_.v88;
    }
    v47 = *(_QWORD*)(a1 + 24);
    v48 = *(float*)(a1 + 32);
    v36[5] = 0;
    v49 = (float)(unsigned __int64)(v47 + 1);
    if (v10 == 0 || (float)(v48 * (float)v10) < v49) {
      v50 = v18;
      v51 = v10 < 3 || (v10 & (v10 - 1)) != 0;
      v52 = v51 | (2 * v10);
      v53 = vcvtps_u64_f32(v49 / v48);
      if (v52 <= v53) {
        primeEm = v53;
      }
      else {
        primeEm = v52;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v55 = *(_QWORD*)(a1 + 8);
      if (primeEm > v55) {
        goto LABEL_115;
      }
      if (primeEm < v55) {
        v56 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                             *(float*)(a1 + 32));
        if (v55 < 3 || (v55 & (v55 - 1)) != 0) {
          v56 = std___1___next_prime(v56);
        }
        else {
          v57 = 1LL << -(char)__clz(v56 - 1);
          if (v56 >= 2) {
            v56 = v57;
          }
        }
        if (primeEm <= v56) {
          primeEm = v56;
        }
        if (primeEm < v55) {
        LABEL_115:
          GameRoutine_132c1c0((__int64*)a1, primeEm);
        }
      }
      v10 = *(_QWORD*)(a1 + 8);
      if ((v10 & (v10 - 1)) != 0) {
        v18 = v50;
        if (v33 >= v10) {
          v2 = v33 % v10;
        }
        else {
          v2 = v33;
        }
      }
      else {
        v2 = (v10 - 1) & v33;
        v18 = v50;
      }
    }
    v58 = *(_QWORD*)a1;
    v59 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
    if (v59 != nullptr) {
      *v36 = *v59;
      *v59 = v36;
    }
    else {
      v60 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = v36;
      *v36 = v60;
      *(_QWORD*)(v58 + 8 * v2) = a1 + 16;
      if (*v36 != 0) {
        v61 = *(_QWORD*)(*v36 + 8LL);
        if ((v10 & (v10 - 1)) != 0) {
          if (v61 >= v10) {
            v61 %= v10;
          }
        }
        else {
          v61 &= v10 - 1;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v61) = v36;
      }
    }
    ++*(_QWORD*)(a1 + 24);
  LABEL_140:
    v36[5] = a2;
    v63 = *(_QWORD**)(a1 + 48);
    v62 = *(_QWORD*)(a1 + 56);
    if ((unsigned __int64)v63 >= v62) {
      v65 = v18;
      v66 = *(_QWORD*)(a1 + 40);
      v67 = (char*)v63 - v66;
      v68 = ((__int64)v63 - v66) >> 3;
      v69 = v68 + 1;
      if ((unsigned __int64)(v68 + 1) >> 61 != 0) {
        GameRoutine_8875e0();
      }
      v70 = v62 - v66;
      if (v70 >> 2 > v69) {
        v69 = v70 >> 2;
      }
      if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
        v71 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v71 = v69;
      }
      if (v71 != 0) {
        if (v71 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v72 = fw_memory_HeapManager_Allocate_alt1(*v30, 8 * v71, 16, 0);
      }
      else {
        v72 = 0;
      }
      v73 = v72 + 8 * v71;
      v74 = (char*)v63 - v66;
      v75 = (__int64)&v67[v72 + -8 * v68];
      *(_QWORD*)&v67[v72] = a2;
      v64 = (__int64)&v67[v72 + 8];
      memcpy(v75, v66, v74);
      *(_QWORD*)(a1 + 40) = v75;
      *(_QWORD*)(a1 + 48) = v64;
      *(_QWORD*)(a1 + 56) = v73;
      if (v66 != 0) {
        v76 = 128;
        if (*(_QWORD*)(*v30 + 200) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v30 + v76);
      }
      v18 = v65;
    }
    else {
      *v63 = a2;
      v64 = (__int64)(v63 + 1);
    }
    *(_QWORD*)(a1 + 48) = v64;
    if (*(_QWORD*)(a2 + 120) == 0) {
      v78 = *(__int64**)(a2 + 48);
      v77 = *(__int64**)(a2 + 56);
      while (v78 != v77) {
        v79 = *v78++;
        Spot_132ba80(a1, *(_QWORD*)(v79 + 8));
      }
    }
    if (v85 != 0) {
      goto LABEL_161;
    }
    return *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 40);
  }
  if ((v10 & v16) == 0) {
    do {
      v26 = v21[1];
      if (v26 == v17) {
        v27 = *((unsigned __int8*)v21 + 16);
        v28 = v21[3];
        if ((v27 & 1) == 0) {
          v28 = v27 >> 1;
        }
        if (v28 == v14) {
          v29 = (v27 & 1) != 0 ? (__int64*)v21[4] : (__int64*)((char*)v21 + 17);
          if ((unsigned int)memcmp(v29, v13, v14) == 0) {
            v30 = &fw_memory_g_heap_manager;
            v18 = v82;
            if ((v86_.v86 & 1) != 0) {
              goto LABEL_161;
            }
            return *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 40);
          }
        }
      }
      else if ((v26 & v16) != v2) {
        goto LABEL_57;
      }
      v21 = (__int64*)*v21;
    } while (v21 != nullptr);
    goto LABEL_57;
  }
  v18 = v82;
  while (1) {
    v22 = v21[1];
    if (v22 == v17) {
      break;
    }
    if (v22 >= v10) {
      v22 %= v10;
    }
    if (v22 != v2) {
      goto LABEL_58;
    }
  LABEL_32:
    v21 = (__int64*)*v21;
    if (v21 == nullptr) {
      goto LABEL_58;
    }
  }
  v23 = *((unsigned __int8*)v21 + 16);
  v24 = v21[3];
  if ((v23 & 1) == 0) {
    v24 = v23 >> 1;
  }
  if (v24 != v14) {
    goto LABEL_32;
  }
  v25 = (v23 & 1) != 0 ? (__int64*)v21[4] : (__int64*)((char*)v21 + 17);
  if ((unsigned int)memcmp(v25, v13, v14) != 0) {
    goto LABEL_32;
  }
  v30 = &fw_memory_g_heap_manager;
  if ((v86_.v86 & 1) == 0) {
    return *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 40);
  }
LABEL_161:
  if (v18 != 0) {
    v80 = 128;
    if (*(_QWORD*)(*v30 + 200) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v30 + v80);
  }
  return *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 40);
}

unsigned __int64 Spot_132c460(unsigned __int64 result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64* v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  _BOOL8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64* v47;

  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v4 = result;
  *(_DWORD*)(result + 32) = *(_DWORD*)(a2 + 32);
  v5 = *(_QWORD*)(a2 + 8);
  if (v5 != 1) {
    if ((v5 & (v5 - 1)) != 0) {
      result = std___1___next_prime(v5);
      v6 = *(_QWORD*)(v4 + 8);
      v5 = result;
      v7 = result >= v6;
      if (result > v6) {
        goto LABEL_17;
      }
    }
    else {
      v6 = 0;
      v7 = true;
      if (v5 != 0) {
        goto LABEL_17;
      }
    }
    if (v7) {
      goto LABEL_18;
    }
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                            *(float*)(v4 + 32));
    if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
      v9 = v5;
      result = std___1___next_prime(result);
      v5 = v9;
    }
    else {
      v8 = 1LL << -(char)__clz(result - 1);
      if (result >= 2) {
        result = v8;
      }
    }
    if (v5 <= result) {
      v5 = result;
    }
    if (v5 >= v6) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v5 = 2;
LABEL_17:
  result = GameRoutine_132c1c0_alt1(v4, v5);
LABEL_18:
  v10 = *(_QWORD**)(a2 + 16);
  if (v10 == nullptr) {
    return result;
  }
  v47 = (__int64*)(v4 + 16);
  while (2) {
    while (1) {
      v12 = v10 + 2;
      v11 = *((unsigned __int8*)v10 + 16);
      v13 = (v11 & 1) == 0;
      v14 = v11 >> 1;
      v15 = v13 ? (__int64)v10 + 17 : v10[4];
      v16 = v13 ? v14 : v10[3];
      v17 = std___1___hash_memory(v15, v16);
      v18 = *(_QWORD*)(v4 + 8);
      v19 = v17;
      if (v18 == 0) {
        break;
      }
      v20 = v18 - 1;
      if ((v18 & (v18 - 1)) != 0) {
        v2 = v17;
        if (v17 >= v18) {
          v2 = v17 % v18;
        }
      }
      else {
        v2 = v20 & v17;
      }
      v21 = *(__int64***)(*(_QWORD*)v4 + 8 * v2);
      if (v21 == nullptr) {
        break;
      }
      v22 = *v21;
      if (*v21 == nullptr) {
        break;
      }
      if ((v18 & v20) == 0) {
        while (1) {
          v27 = v22[1];
          if (v27 == v19) {
            v28 = *((unsigned __int8*)v22 + 16);
            v29 = v22[3];
            if ((v28 & 1) == 0) {
              v29 = v28 >> 1;
            }
            if (v29 == v16) {
              v30 = (v28 & 1) != 0 ? (__int64*)v22[4]
                                   : (__int64*)((char*)v22 + 17);
              result = memcmp(v30, v15, v16);
              if ((_DWORD)result == 0) {
                goto LABEL_58;
              }
            }
          }
          else if ((v27 & v20) != v2) {
            goto LABEL_60;
          }
          v22 = (__int64*)*v22;
          if (v22 == nullptr) {
            goto LABEL_60;
          }
        }
      }
      while (1) {
        v23 = v22[1];
        if (v23 == v19) {
          break;
        }
        if (v23 >= v18) {
          v23 %= v18;
        }
        if (v23 != v2) {
          goto LABEL_60;
        }
      LABEL_36:
        v22 = (__int64*)*v22;
        if (v22 == nullptr) {
          goto LABEL_60;
        }
      }
      v24 = *((unsigned __int8*)v22 + 16);
      v25 = v22[3];
      if ((v24 & 1) == 0) {
        v25 = v24 >> 1;
      }
      if (v25 != v16) {
        goto LABEL_36;
      }
      v26 = (v24 & 1) != 0 ? (__int64*)v22[4] : (__int64*)((char*)v22 + 17);
      result = memcmp(v26, v15, v16);
      if ((_DWORD)result != 0) {
        goto LABEL_36;
      }
    LABEL_58:
      v10 = (_QWORD*)*v10;
      if (v10 == nullptr) {
        return result;
      }
    }
  LABEL_60:
    result = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = v19;
    v31 = (_QWORD*)result;
    if ((*(_BYTE*)v12 & 1) != 0) {
      result = fw_text_String_CopyTerminated_alt1(result + 16, v10[4], v10[3]);
    }
    else {
      v32 = *v12;
      v33 = v10[4];
      *(_QWORD*)(result + 24) = v10[3];
      *(_QWORD*)(result + 32) = v33;
      *(_QWORD*)(result + 16) = v32;
    }
    v34 = *(float*)(v4 + 32);
    v31[5] = v10[5];
    v35 = (float)(unsigned __int64)(*(_QWORD*)(v4 + 24) + 1LL);
    if (v18 == 0 || (float)(v34 * (float)v18) < v35) {
      v36 = v35 / v34;
      v37 = (v18 & (v18 - 1)) != 0;
      if (v18 < 3) {
        v37 = true;
      }
      v38 = v37 | (2 * v18);
      v39 = vcvtps_u64_f32(v36);
      if (v38 <= v39) {
        v40 = v39;
      }
      else {
        v40 = v38;
      }
      if (v40 == 1) {
        v40 = 2;
      }
      else if ((v40 & (v40 - 1)) != 0) {
        result = std___1___next_prime(v40);
        v40 = result;
      }
      v41 = *(_QWORD*)(v4 + 8);
      if (v40 > v41) {
        goto LABEL_75;
      }
      if (v40 < v41) {
        result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                                *(float*)(v4 + 32));
        if (v41 < 3 || (v41 & (v41 - 1)) != 0) {
          result = std___1___next_prime(result);
        }
        else {
          v42 = 1LL << -(char)__clz(result - 1);
          if (result >= 2) {
            result = v42;
          }
        }
        if (v40 <= result) {
          v40 = result;
        }
        if (v40 < v41) {
        LABEL_75:
          result = GameRoutine_132c1c0_alt1(v4, v40);
        }
      }
      v18 = *(_QWORD*)(v4 + 8);
      if ((v18 & (v18 - 1)) != 0) {
        if (v19 >= v18) {
          v2 = v19 % v18;
        }
        else {
          v2 = v19;
        }
      }
      else {
        v2 = (v18 - 1) & v19;
      }
    }
    v43 = *(_QWORD*)v4;
    v44 = *(_QWORD**)(*(_QWORD*)v4 + 8 * v2);
    if (v44 != nullptr) {
      *v31 = *v44;
      *v44 = v31;
    }
    else {
      v45 = *v47;
      *v47 = (__int64)v31;
      *v31 = v45;
      *(_QWORD*)(v43 + 8 * v2) = v47;
      if (*v31 != 0) {
        v46 = *(_QWORD*)(*v31 + 8LL);
        if ((v18 & (v18 - 1)) != 0) {
          if (v46 >= v18) {
            v46 %= v18;
          }
        }
        else {
          v46 &= v18 - 1;
        }
        *(_QWORD*)(*(_QWORD*)v4 + 8 * v46) = v31;
      }
    }
    ++*(_QWORD*)(v4 + 24);
    v10 = (_QWORD*)*v10;
    if (v10 != nullptr) {
      continue;
    }
    return result;
  }
}

__int64 Spot_132c920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* i;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 40);
  v2 = (__int64*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 48) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  for (i = (_QWORD*)v2[2]; i != nullptr;
       result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7)) {
    v8 = i;
    i = (_QWORD*)*i;
    if ((v8[2] & 1) != 0 && v8[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v7 = 128;
    }
    else {
      v7 = 56;
    }
  }
  v10 = *v2;
  *v2 = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
  }
  return result;
}

__int64 game_gmap_Spot_CanPopTroop_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;

  if (*(_BYTE*)(a1 + 8) != 1) {
    return 1;
  }
  v2 = *a2;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    if (v5 == v6) {
      v7 = 0;
    }
    else {
      while (1) {
        v8 = *v5++;
        v7 = v8;
        if (*(_DWORD*)(v8 + 84) == v4) {
          break;
        }
        if (v5 == v6) {
          return v2 != 0;
        }
      }
    }
    return v7 != v2;
  }
  if (v5 != v6) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      if (++v5 == v6) {
        return v2 != 0;
      }
    }
    return v7 != v2;
  }
  return v2 != 0;
}

#pragma GCC visibility pop
