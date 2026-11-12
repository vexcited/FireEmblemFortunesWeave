#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_936f60(PSEUDO_X8, _QWORD);
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
__int64 ObeliskDepositoryLegionMenuItem_Unknown10(__int64 a1);
_DWORD* Util_15823b0(__int64*, unsigned __int8*, char, char, __int64);
_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
_QWORD* game_menu_ExchangeNumDialog_CreateBindExchange(__int64, int, int, int,
                                                       __int64, const char*,
                                                       __int64, __int64,
                                                       __int64, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 Util_157d280(__int64*, int, unsigned int, char, char, char);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_211e6e8[])();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212e038[3];
extern __int64* game_g_empty_item_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_6e3b50(__int64, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ObeliskDepositoryLegionMenuItem_Unknown55(__int64 a1);
__int64 ObeliskDepositoryLegionMenuItem_Unknown72(__int64 a1);
_QWORD* game_facility_anonymous_ObeliskDepositoryLegionMenuItem_CreateDialog(
    __int64 a1, __int64 a2, __int64 a3);
void ObeliskDepositoryLegionMenuItem_Unknown76(__int64 a1, __int64 a2);
void game_facility_anonymous_ObeliskDepositoryLegionMenuItem_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3);

__int64 ObeliskDepositoryLegionMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int8* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  char v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  atomic_ullong* v28;
  __int64* v29;
  __int64 v30;
  __int64* v31;
  const char* v32;
  __int64 v34;
  __int64* v35;
  __int64* v36;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v34 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v34);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = *(unsigned int*)(a1 + 40);
  v6 = GameData_212cf80[0];
  v7 = GameData_212ceb0;
  if ((int)v5 >= 0) {
    v8 =
        (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                                 8LL) +
                                      48LL) +
                           8 * v5);
  }
  else {
    v8 = (unsigned __int8*)GameData_212ceb0;
  }
  v9 = ObeliskDepositoryLegionMenuItem_Unknown72(a1);
  Util_15823b0(v4, v8, 1, v9 & 1, 0);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v35 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
    v14 = v35;
    if (v35 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if (v14 == nullptr) {
  LABEL_13:
    v14 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_14:
  v15 = LayoutAccessor_155fbe0(v14, "L_CostGold");
  v16 = *(unsigned int*)(a1 + 40);
  v17 = v15;
  if ((int)v16 >= 0) {
    v18 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 8LL) + 48LL) + 8 * v16);
  }
  else {
    v18 = v7;
  }
  v19 = GameData_212c998[0];
  v20 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998
                                                                 [0] +
                                                             64) +
                                                  8LL *
                                                      *(unsigned __int8*)v18) +
                                       51LL));
  if (v20 != 0) {
    v21 = *(unsigned __int16*)(v20 + 32);
  }
  else {
    v21 = 0;
  }
  v22 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v22 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  if (v20 != 0) {
    LODWORD(v20) = *(unsigned __int16*)(v20 + 32);
  }
  v23 = v22 < (int)v20;
  v24 = ObeliskDepositoryLegionMenuItem_Unknown72(a1);
  Util_157d280(v17, 3, v21, v23, 0, v24 & 1);
  v25 = *(_QWORD*)(a1 + 56);
  if (v25 == 0) {
    goto LABEL_28;
  }
  v26 = std___1___shared_weak_count_lock(v25);
  if (v26 == 0) {
    goto LABEL_28;
  }
  v27 = v26;
  v28 = (atomic_ullong*)(v26 + 8);
  v29 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v29 != nullptr) {
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  v36 = v29;
  (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
  std___1___shared_weak_count___release_weak(v27);
  v29 = v36;
  if (v36 == nullptr) {
  LABEL_28:
    v29 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_29:
  v30 = *(unsigned int*)(a1 + 40);
  if ((int)v30 >= 0) {
    v31 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 8LL) + 48LL) + 8 * v30);
  }
  else {
    v31 = v7;
  }
  if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v19 + 64) +
                           8LL * *(unsigned __int8*)v31) +
                152LL) != 0) {
    v32 = "CostOn";
  }
  else {
    v32 = "CantSell";
  }
  return GameHr_1562680((__int64)v29, v32, 0x1.0000000000000p+0f);
}

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

__int64 ObeliskDepositoryLegionMenuItem_Unknown72(__int64 a1)
{
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64* v16;
  __int64* v17;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  else {
    v2 = 0;
  }
  v3 = *(unsigned int*)(a1 + 40);
  v4 = GameData_212cf80[0];
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v6 = GameData_212ceb0;
  v7 = (__int64*)(v5 + 8LL * (unsigned int)v3);
  if ((int)v3 < 0) {
    v7 = GameData_212ceb0;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                  8LL * *(unsigned __int8*)v7);
  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                  8LL * *(unsigned __int8*)(v8 + 51));
  if (v9 != 0) {
    LODWORD(v9) = *(unsigned __int16*)(v9 + 32);
  }
  if (v2 < (int)v9) {
    return 0;
  }
  v11 = *(unsigned __int8*)(v8 + 154);
  if (*(_BYTE*)(v8 + 154) == 0) {
    goto LABEL_21;
  }
  if (game_GameModeData_instance_ != 0) {
    v12 = a1;
    v13 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(*(_QWORD*)(v8 + 24) + 24LL));
    if (v13 != 0) {
      v1 = *(_DWORD*)(v13 + 32);
    }
    else {
      v1 = 0;
    }
    a1 = v12;
  }
  v14 = v11 - v1;
  v15 = *(unsigned __int8*)(v8 + 154);
  v10 = 0;
  if (v14 < v15) {
    v15 = v14;
  }
  if ((v14 & 0x80000000) == 0 && v15 != 0) {
    v3 = *(unsigned int*)(a1 + 40);
    v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL);
  LABEL_21:
    v16 = (__int64*)(v5 + 8 * v3);
    if ((int)v3 >= 0) {
      v17 = v16;
    }
    else {
      v17 = v6;
    }
    return *(_BYTE*)v17 != 0 &&
           (signed __int32)*(
               _DWORD*)(*(_QWORD*)(*game_map_history_g_legion_pool_ptr[0] +
                                   16) +
                        72LL) < 300;
  }
  return v10;
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
        GameRoutine_936f60((void*)&v20, *(_QWORD*)(*v8 + 16));
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
      (*(void (**)(void*))(*(_QWORD*)v13 + v11))((void*)v13);
    }
  }
  return 12;
}

_QWORD* game_facility_anonymous_ObeliskDepositoryLegionMenuItem_CreateDialog(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v17;
  _QWORD* v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v3 = *(unsigned int*)(a1 + 40);
  if ((int)v3 >= 0) {
    v4 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v3);
  }
  else {
    v4 = GameData_212ceb0;
  }
  v5 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998
                                                                 [0] +
                                                             64) +
                                                  8LL * *(unsigned __int8*)v4) +
                                       51LL));
  if (v5 == 0) {
    return nullptr;
  }
  v6 = *(unsigned __int16*)(v5 + 32);
  if (v6 == 0) {
    return nullptr;
  }
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  v8 = v7 / v6;
  if (300 - *(_DWORD*)(*(_QWORD*)(*game_map_history_g_legion_pool_ptr[0] + 16) +
                       72LL) <
      v8) {
    v8 = 300 -
         *(_DWORD*)(*(_QWORD*)(*game_map_history_g_legion_pool_ptr[0] + 16) +
                    72LL);
  }
  v9 = v8 >= 999 ? 999 : v8;
  if (v8 < 1) {
    return nullptr;
  }
  *(_DWORD*)(a1 + 84) = 1;
  if (*(_QWORD*)(a1 + 8) != 0) {
    v11 = a1;
    v12 = a3;
    v13 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                         GameData_2132048, 0);
    a3 = v12;
    v14 = v13;
    a1 = v11;
  }
  else {
    v14 = 0;
  }
  v19_.v19[0] = GameData_211e6e8;
  v19_.v19[1] = a1;
  v19_.v20 = v19_.v19;
  v15 = game_menu_ExchangeNumDialog_CreateBindExchange(
      v14, 1, 1, v9, (__int64)"MID_DepositoryMenu_Confirm",
      "MID_Shop_Consumption", (__int64)v19_.v19, a2, a3, a3);
  if (v19_.v20 == v19_.v19) {
    v18 = v15;
    v17 = 32;
    goto LABEL_23;
  }
  if (v19_.v20 != nullptr) {
    v17 = 40;
    v18 = v15;
  LABEL_23:
    (*(void (**)(__int64))(*v19_.v20 + v17))((__int64)v19_.v20);
    return v18;
  }
  return v15;
}

void ObeliskDepositoryLegionMenuItem_Unknown76(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64* v6;
  int v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    int v24;
  } v23_;
  _QWORD** v25;
  struct {
    _QWORD* v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    _BYTE* v30;
    int v31;
    int v32;
    int v33;
  } v26_;

  v2 = *(unsigned int*)(a1 + 40);
  v5 = GameData_212cf80[0];
  v6 = GameData_212ceb0;
  v7 = *(_DWORD*)(a1 + 84);
  if ((int)v2 >= 0) {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v2);
  }
  else {
    v8 = GameData_212ceb0;
  }
  v20 = 8;
  v9 = game_g_empty_item_ptr;
  v21 = *game_g_empty_item_ptr;
  if (*(_BYTE*)v8 != 0) {
    v10 = *v8;
  }
  else {
    v10 = 0;
  }
  v22 = v10;
  WORD1(v23_.v23) = 0;
  HIDWORD(v23_.v23) = 0;
  v26_.v27 = 0;
  v26_.v28 = 0;
  v26_.v29 = 0;
  v26_.v30 = nullptr;
  v25 = &v26_.v26;
  v26_.v26 = nullptr;
  GameRoutine_930b90((__int64)&v23_.v23, (__int64)GameData_212c8b0[0]);
  v26_.v31 = 0;
  v26_.v32 = v7;
  v26_.v33 = 0;
  ObeliskDestinyMenuItem_1a06060((_QWORD*)(a2 + 1520), &v20, 0);
  v23_.v24 = 0;
  v23_.v23 = 0;
  if ((v26_.v28 & 1) != 0) {
    *v26_.v30 = 0;
    v26_.v29 = 0;
  }
  else {
    LOWORD(v26_.v28) = 0;
  }
  GameRoutine_6e3b50((__int64)&v25, v26_.v26);
  v26_.v26 = nullptr;
  v26_.v27 = 0;
  v25 = &v26_.v26;
  if ((v26_.v28 & 1) != 0) {
    v11 = v26_.v30;
    if (v26_.v30 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v26_.v30);
      v11 = v26_.v26;
    }
  }
  else {
    v11 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&v25, v11);
  v13 = *(unsigned int*)(a1 + 40);
  if ((int)v13 >= 0) {
    v14 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 8LL) + 48LL) + 8 * v13);
  }
  else {
    v14 = v6;
  }
  v15 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998
                                                                 [0] +
                                                             64) +
                                                  8LL *
                                                      *(unsigned __int8*)v14) +
                                       51LL));
  if (v15 != 0) {
    LODWORD(v15) = *(unsigned __int16*)(v15 + 32);
  }
  v16 = *(_DWORD*)(a1 + 84) * v15;
  v20 = 3;
  v21 = *v9;
  if (*(_BYTE*)v6 != 0) {
    v17 = *v6;
  }
  else {
    v17 = 0;
  }
  v22 = v17;
  WORD1(v23_.v23) = 0;
  HIDWORD(v23_.v23) = 0;
  v26_.v27 = 0;
  v26_.v28 = 0;
  v26_.v29 = 0;
  v26_.v30 = nullptr;
  v25 = &v26_.v26;
  v26_.v26 = nullptr;
  GameRoutine_930b90((__int64)&v23_.v23, (__int64)GameData_212c8b0[0]);
  v26_.v31 = 0;
  v26_.v32 = v16;
  v26_.v33 = 0;
  ObeliskDestinyMenuItem_1a06060((_QWORD*)(a2 + 1544), &v20, 0);
  v23_.v24 = 0;
  v23_.v23 = 0;
  if ((v26_.v28 & 1) != 0) {
    *v26_.v30 = 0;
    v26_.v29 = 0;
  }
  else {
    LOWORD(v26_.v28) = 0;
  }
  GameRoutine_6e3b50((__int64)&v25, v26_.v26);
  v26_.v26 = nullptr;
  v26_.v27 = 0;
  v25 = &v26_.v26;
  if ((v26_.v28 & 1) != 0) {
    v18 = v26_.v30;
    if (v26_.v30 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v26_.v30);
      v18 = v26_.v26;
    }
  }
  else {
    v18 = nullptr;
  }
  GameRoutine_6e3b50((__int64)&v25, v18);
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

__int64 ObeliskDepositoryLegionMenuItem_Unknown10(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 - 80);
  if (result != 0) {
    return __dynamic_cast(result, GameData_212e030[0], GameData_2132048, 0);
  }
  return result;
}

void game_facility_anonymous_ObeliskDepositoryLegionMenuItem_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    int v21;
  } v20_;
  _QWORD** v22;
  struct {
    _QWORD* v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    _BYTE* v27;
    int v28;
    int v29;
    int v30;
  } v23_;

  v4 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v4 != 0) {
    v5 = *a3;
    v6 = *(_QWORD*)(a1 + 8);
    v7 = __dynamic_cast(v4, GameData_212e030[0], GameData_212e038[0], 0);
    if (v7 != 0) {
      *(_DWORD*)(v6 + 84) = v5;
      v8 = *(unsigned int*)(v6 + 40);
      v9 = v7;
      if ((int)v8 >= 0) {
        v10 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] +
                                               8LL) +
                                    48LL) +
                         8 * v8);
      }
      else {
        v10 = GameData_212ceb0;
      }
      v11 = *(
          _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                   8LL *
                       *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998
                                                                     [0] +
                                                                 64) +
                                                      8LL * *(unsigned __int8*)
                                                                v10) +
                                           51LL));
      if (v11 != 0) {
        LODWORD(v11) = *(unsigned __int16*)(v11 + 32);
      }
      if (game_GameModeData_instance_ != 0) {
        v12 = *(_DWORD*)(game_GameModeData_instance_ + 80);
      }
      else {
        v12 = 0;
      }
      v13 = v11 * v5;
      v17 = 3;
      v18 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v14 = *GameData_212ceb0;
      }
      else {
        v14 = 0;
      }
      v19 = v14;
      WORD1(v20_.v20) = 0;
      HIDWORD(v20_.v20) = 0;
      v23_.v24 = 0;
      v23_.v25 = 0;
      v23_.v26 = 0;
      v23_.v27 = nullptr;
      v22 = &v23_.v23;
      v23_.v23 = nullptr;
      GameRoutine_930b90((__int64)&v20_.v20, (__int64)GameData_212c8b0[0]);
      v23_.v28 = 0;
      v23_.v29 = v13;
      v23_.v30 = v12;
      (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v9 + 1088LL))(v9, 0, &v17);
      v20_.v21 = 0;
      v20_.v20 = 0;
      if ((v23_.v25 & 1) != 0) {
        *v23_.v27 = 0;
        v23_.v26 = 0;
      }
      else {
        LOWORD(v23_.v25) = 0;
      }
      GameRoutine_6e3b50((__int64)&v22, v23_.v23);
      v23_.v23 = nullptr;
      v23_.v24 = 0;
      v22 = &v23_.v23;
      if ((v23_.v25 & 1) != 0) {
        v15 = v23_.v27;
        if (v23_.v27 != nullptr) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v23_.v27);
          v15 = v23_.v23;
        }
      }
      else {
        v15 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v22, v15);
    }
  }
}

#pragma GCC visibility pop
