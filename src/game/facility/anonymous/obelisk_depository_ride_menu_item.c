#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_16eb610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18607b0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212cd68[26];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 ObeliskDepositoryRideMenuItem_Unknown55(_QWORD* a1);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16eb610(_QWORD*, unsigned int, _BYTE*, __int64, __int64,
                       unsigned int, int);
__int64 GameRoutine_18607b0_alt1(_QWORD*) __asm__("GameRoutine_18607b0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
__int64* game_820d50(int);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_9d1500(__int64, __int64, const char*, __int64, __int64,
                           __int64);
__int64 RidePool_93cd60(_QWORD*, __int64);
__int64 RidePool_93e660(_QWORD*, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
bool GameRoutine_822320(unsigned int);
extern __int64 (*GameData_1fb7be8[])();
extern __int64 (*GameData_1fb7c68[])();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e090[13];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_history_g_ride_pool_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_6e3b50(__int64, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_anonymous_ObeliskDepositoryRideMenuItem_ACall(_QWORD* a1);
_BYTE* game_facility_anonymous_9d0bc0(_BYTE*);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64, unsigned __int8*, __int64, char);
extern __int64 GameData_212cd68_alt1[26] __asm__("GameData_212cd68");
__int64
game_facility_anonymous_ObeliskDepositoryRideMenuItem_ACall_closure_Invoke(
    __int64 a1);

__int64 game_facility_anonymous_ObeliskDepositoryRideMenuItem_ACall(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _BYTE* v17;
  _QWORD* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _BYTE v38[20];
  struct {
    __int64 v39;
    _BYTE* v40;
  } v39_;
  _QWORD** v41;
  struct {
    _QWORD* v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    _BYTE* v46;
    __int64 v47;
    int v48;
  } v42_;
  struct {
    _QWORD v49[4];
    _QWORD* v50;
  } v49_;
  struct {
    _QWORD v51[4];
    _QWORD* v52;
  } v51_;

  v2 = game_820d50(6);
  if ((game_GameModeData_instance_ == 0 ||
       (v3 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v2)) == 0 ||
       *(_DWORD*)(v3 + 32) == 0) &&
      GameRoutine_822320(1u)) {
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 80);
    }
    else {
      v4 = 0;
    }
    v11 = (unsigned __int8*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    v12 = GameData_212c8a0;
    v13 = GameData_212cd68[0];
    v14 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                               64) +
                                                    8LL * *v11) +
                                         110LL));
    if (v14 != 0) {
      LODWORD(v14) = *(unsigned __int16*)(v14 + 32);
    }
    if (v4 < (int)v14) {
      return 1;
    }
    v15 = game_map_history_g_ride_pool_ptr[0];
    v16 = *game_map_history_g_ride_pool_ptr[0];
    v17 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    if (*v17 != 0) {
      v18 = *(_QWORD**)(v16 + 16);
      v19 = v17;
      if ((RidePool_93cd60(v18, (__int64)v17) & 0x80000000) == 0 ||
          (RidePool_93e660(v18, v19) & 0x80000000) == 0) {
        v20 = a1[1];
        if (*(_QWORD*)(v20 + 152) != 0) {
          v6 = *(_QWORD*)(v20 + 152);
        }
        else {
          v6 = a1[1];
        }
        v7 = "MID_DepositoryMenu_Overlap_Animal_Message";
        goto LABEL_11;
      }
    }
    v21 = *v15;
    v22 = *(unsigned __int8*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    v6 = a1[1];
    if (v22 == 0 || *(int*)(*(_QWORD*)(v21 + 16) + 144LL) >= 200) {
      v7 = "MID_DepositoryMenu_FullItem_Animal_Message";
      goto LABEL_11;
    }
    if (v6 != 0) {
      v6 = __dynamic_cast(v6, GameData_212e030[0], GameData_212e090[0], 0);
    }
    *(_QWORD*)v38 = GameData_1fb7be8;
    *(_QWORD*)&v38[8] = a1;
    v51_.v52 = v51_.v51;
    v49_.v50 = v49_.v49;
    v39_.v40 = v38;
    v51_.v51[0] = GameData_1fb7c68;
    v49_.v49[0] = GameData_1fb7c68;
    v23 = GameRoutine_9d1500(v6, (__int64)"MID_DepositoryMenu_Confirm",
                             "MID_Shop_Consumption", (__int64)v38,
                             (__int64)v51_.v51, (__int64)v49_.v49);
    if (v49_.v50 == v49_.v49) {
      v24 = 32;
    }
    else {
      if (v49_.v50 == nullptr) {
        goto LABEL_41;
      }
      v24 = 40;
    }
    (*(void (**)(__int64))(*v49_.v50 + v24))((__int64)v49_.v50);
  LABEL_41:
    if (v51_.v52 == v51_.v51) {
      v25 = 32;
    }
    else {
      if (v51_.v52 == nullptr) {
        goto LABEL_46;
      }
      v25 = 40;
    }
    (*(void (**)(__int64))(*v51_.v52 + v25))((__int64)v51_.v52);
  LABEL_46:
    if (v39_.v40 == v38) {
      v26 = 32;
    }
    else {
      if (v39_.v40 == nullptr) {
      LABEL_51:
        v27 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        *(_DWORD*)v38 = 8;
        v28 = game_g_empty_item_ptr;
        *(_QWORD*)&v38[4] = *game_g_empty_item_ptr;
        v29 = GameData_212ceb0;
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v30 = *GameData_212ceb0;
        }
        else {
          v30 = 0;
        }
        *(_QWORD*)&v38[12] = v30;
        WORD1(v39_.v39) = 0;
        HIDWORD(v39_.v39) = 0;
        v42_.v43 = 0;
        v42_.v44 = 0;
        v42_.v45 = 0;
        v42_.v46 = nullptr;
        v41 = &v42_.v42;
        v42_.v42 = nullptr;
        GameRoutine_930b90((__int64)&v39_.v39, v27);
        v42_.v48 = 0;
        v42_.v47 = 0x100000000LL;
        ObeliskDestinyMenuItem_1a06060((_QWORD*)(v23 + 1520), (int*)v38, 0);
        LODWORD(v39_.v40) = 0;
        v39_.v39 = 0;
        if ((v42_.v44 & 1) != 0) {
          *v42_.v46 = 0;
          v42_.v45 = 0;
        }
        else {
          LOWORD(v42_.v44) = 0;
        }
        GameRoutine_6e3b50((__int64)&v41, v42_.v42);
        v42_.v42 = nullptr;
        v42_.v43 = 0;
        v41 = &v42_.v42;
        if ((v42_.v44 & 1) != 0) {
          v31 = v42_.v46;
          if (v42_.v46 != nullptr) {
            v32 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v32 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                (__int64)v42_.v46);
            v31 = v42_.v42;
          }
        }
        else {
          v31 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v41, v31);
        v33 = *(
            _QWORD*)(*(_QWORD*)(*v13 + 64) +
                     8LL *
                         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                                        8LL *
                                                            *(unsigned __int8*)(*(
                                                                __int64 (**)(
                                                                    _QWORD*))(
                                                                *a1 + 560LL))(
                                                                a1)) +
                                             110LL));
        if (v33 != 0) {
          v34 = *(unsigned __int16*)(v33 + 32);
        }
        else {
          v34 = 0;
        }
        *(_DWORD*)v38 = 3;
        *(_QWORD*)&v38[4] = *v28;
        if (*(_BYTE*)v29 != 0) {
          v35 = *v29;
        }
        else {
          v35 = 0;
        }
        *(_QWORD*)&v38[12] = v35;
        WORD1(v39_.v39) = 0;
        HIDWORD(v39_.v39) = 0;
        v42_.v43 = 0;
        v42_.v44 = 0;
        v42_.v45 = 0;
        v42_.v46 = nullptr;
        v41 = &v42_.v42;
        v42_.v42 = nullptr;
        GameRoutine_930b90((__int64)&v39_.v39, (__int64)GameData_212c8b0[0]);
        LODWORD(v42_.v47) = 0;
        HIDWORD(v42_.v47) = v34;
        v42_.v48 = 0;
        ObeliskDestinyMenuItem_1a06060((_QWORD*)(v23 + 1544), (int*)v38, 0);
        LODWORD(v39_.v40) = 0;
        v39_.v39 = 0;
        if ((v42_.v44 & 1) != 0) {
          *v42_.v46 = 0;
          v42_.v45 = 0;
        }
        else {
          LOWORD(v42_.v44) = 0;
        }
        GameRoutine_6e3b50((__int64)&v41, v42_.v42);
        v42_.v42 = nullptr;
        v42_.v43 = 0;
        v41 = &v42_.v42;
        if ((v42_.v44 & 1) != 0) {
          v36 = v42_.v46;
          if (v42_.v46 != nullptr) {
            v37 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                (__int64)v42_.v46);
            v36 = v42_.v42;
          }
        }
        else {
          v36 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v41, v36);
        return 12;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39_.v40 + v26))((__int64)v39_.v40);
    goto LABEL_51;
  }
  v5 = a1[1];
  if (*(_QWORD*)(v5 + 152) != 0) {
    v6 = *(_QWORD*)(v5 + 152);
  }
  else {
    v6 = a1[1];
  }
  v7 = "MID_DepositoryMenu_Need_KAI_Message";
LABEL_11:
  v51_.v51[0] = v7;
  v8 = game_menu_Dialog__CreateBind_game_menu_Dialog(v6, (__int64)v51_.v51);
  if (v8 != 0) {
    v39_.v40 = nullptr;
    GameRoutine_6680e0(v38, (_QWORD*)(v8 + 1248));
    if (v39_.v40 == v38) {
      v9 = 32;
      goto LABEL_16;
    }
    if (v39_.v40 != nullptr) {
      v9 = 40;
    LABEL_16:
      (*(void (**)(__int64))(*(_QWORD*)v39_.v40 + v9))((__int64)v39_.v40);
    }
  }
  return 12;
}

__int64 ObeliskDepositoryRideMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  unsigned __int8* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64* v15;

  GameRoutine_18607b0_alt1(a1);
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v15 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt1(v4);
  v6 = v15;
  if (v15 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  GameHr_1562680((__int64)v6, "CostOn", 0x1.0000000000000p+0f);
  v7 = (unsigned __int8*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v8 = GameData_212c8a0;
  v9 = GameData_212cd68[0];
  v10 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                             64) +
                                                  8LL * *v7) +
                                       110LL));
  if (v10 != 0) {
    v11 = *(unsigned __int16*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v12 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  else {
    v12 = 0;
  }
  v13 = *(
      _QWORD*)(*(_QWORD*)(*v9 + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                  8LL * *(unsigned __int8*)(*(
                                                            __int64 (**)(
                                                                _QWORD*))(
                                                            *a1 + 560LL))(a1)) +
                                       110LL));
  if (v13 != 0) {
    LODWORD(v13) = *(unsigned __int16*)(v13 + 32);
  }
  return GameHr_16eb610(a1, 3u, "L_Cost", (__int64)"Icon", (__int64)"T_Num",
                        v11, v12 < (int)v13);
}

__int64

game_facility_anonymous_ObeliskDepositoryRideMenuItem_ACall_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  _BYTE v9[8];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *game_map_history_g_ride_pool_ptr[0];
  v3 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(v1);
  RidePool_93c6a0((void*)((__int64)v9), *(_QWORD*)(v2 + 16), v3, 0, 1);
  v4 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cd68_alt1[0] + 64LL) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                             64) +
                                                  8LL * *(unsigned __int8*)(*(
                                                            __int64 (**)(
                                                                __int64))(
                                                            *(_QWORD*)v1 +
                                                            560LL))(v1)) +
                                       110LL));
  if (v4 != 0) {
    LODWORD(v4) = *(unsigned __int16*)(v4 + 32);
  }
  if (game_GameModeData_instance_ != 0) {
    v5 = (*(int*)(game_GameModeData_instance_ + 80) - v4) &
         ~((*(int*)(game_GameModeData_instance_ + 80) - (int)v4) >> 31);
    if (v5 >= 99999) {
      v5 = 99999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 80) = v5;
  }
  game_facility_anonymous_9d0bc0((_BYTE*)v1);
  v6 = *(_QWORD*)(v1 + 8);
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212e030[0], GameData_212e090[0], 0);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 1112LL))(v7);
    }
  }
  return 2;
}

#pragma GCC visibility pop
