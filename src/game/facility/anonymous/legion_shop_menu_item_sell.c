#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_132b100(_QWORD, _QWORD);
__int64 GameRoutine_149e9e0(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_157d280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15823b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16f60e0(_QWORD, _QWORD);
__int64 GameRoutine_16f64c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16f69a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_937de0(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_20fe3a8[])();
extern __int64 (*GameData_20fe428[])();
extern __int64 GameData_212cf80[5];
extern __int64 GameData_2132048;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e030[4];
extern __int64* game_g_empty_item_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char GameData_1a9f09e;
__int64 LegionShopMenuItem_Sell_Unknown55(__int64 a1);
bool LegionShopMenuItem_Sell_Unknown58(__int64 a1);
__int64* LegionShopMenuItem_Sell_Unknown70(__int64 a1);
__int64 LegionShopMenuItem_Sell_Unknown72(__int64 a1);
bool LegionShopMenuItem_Sell_Unknown73(__int64 a1);
__int64 LegionShopMenuItem_Sell_Unknown74(__int64 a1);
__int64 LegionShopMenuItem_Sell_Unknown78(__int64 a1);

__int64 LegionShopMenuItem_Sell_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  const char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  atomic_ullong* v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64* v30;
  __int64* v31;
  __int64* v32;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v30 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v30;
    if (v30 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v7 = GameRoutine_155fbe0(v6, "L_CostGold");
  v8 = *(unsigned int*)(a1 + 40);
  v9 = GameData_212cf80[0];
  v10 = GameData_212ceb0;
  if ((int)v8 >= 0) {
    v11 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                              48LL) +
                   8 * v8);
  }
  else {
    v11 = GameData_212ceb0;
  }
  v12 = GameData_212c998[0];
  v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                   8LL * *(unsigned __int8*)v11);
  GameRoutine_157d280(v7, 4, *(unsigned __int16*)(v13 + 52), 0, 0,
                      *(unsigned __int16*)(v13 + 152) != 0);
  v14 = *(_QWORD*)(a1 + 56);
  if (v14 == 0) {
    goto LABEL_13;
  }
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 == 0) {
    goto LABEL_13;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v31 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
    v18 = v31;
    if (v31 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if (v18 == nullptr) {
  LABEL_13:
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_14:
  v19 = *(unsigned int*)(a1 + 40);
  if ((int)v19 >= 0) {
    v20 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v9 + 8LL) + 48LL) + 8 * v19);
  }
  else {
    v20 = v10;
  }
  if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                           8LL * *(unsigned __int8*)v20) +
                152LL) != 0) {
    v21 = "CostOn";
  }
  else {
    v21 = "CantSell";
  }
  GameRoutine_1562680(v18, v21, 1.0);
  v22 = *(_QWORD*)(a1 + 56);
  if (v22 == 0) {
    goto LABEL_24;
  }
  v23 = std___1___shared_weak_count_lock(v22);
  if (v23 == 0) {
    goto LABEL_24;
  }
  v24 = v23;
  v25 = (atomic_ullong*)(v23 + 8);
  v26 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v26 != nullptr) {
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v32 = v26;
  (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
  std___1___shared_weak_count___release_weak(v24);
  v26 = v32;
  if (v32 == nullptr) {
  LABEL_24:
    v26 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_25:
  v27 = *(unsigned int*)(a1 + 40);
  if ((int)v27 >= 0) {
    v28 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v9 + 8LL) + 48LL) + 8 * v27);
  }
  else {
    v28 = v10;
  }
  return GameRoutine_15823b0(
      v26, v28, 1,
      *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                           8LL * *(unsigned __int8*)v28) +
                152LL) != 0);
}

bool LegionShopMenuItem_Sell_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    v2 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v1);
  }
  else {
    v2 = GameData_212ceb0;
  }
  return *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8LL * *(unsigned __int8*)v2) +
                              152LL) != 0;
}

__int64* LegionShopMenuItem_Sell_Unknown70(__int64 a1)
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

__int64 LegionShopMenuItem_Sell_Unknown72(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  char* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  int v25;
  __int64 v26;
  _BYTE* v27;
  __int64 v28;
  _BYTE v29[20];
  __int64 v30;
  _BYTE* v31;
  _QWORD* v32;
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  int v38;
  int v39;
  int v40;
  _QWORD v41[4];
  _QWORD* v42;

  v1 = *(unsigned int*)(a1 + 40);
  v3 = GameData_212cf80[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v5 = GameData_212ceb0;
  if ((int)v1 >= 0) {
    v6 = (__int64*)(v4 + 8LL * (unsigned int)v1);
  }
  else {
    v6 = GameData_212ceb0;
  }
  v7 = GameData_212c998[0];
  if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                           8LL * *(unsigned __int8*)v6) +
                152LL) == 0) {
    return 1;
  }
  *(_QWORD*)v29 = GameData_20fe3a8;
  *(_QWORD*)&v29[8] = a1;
  v42 = v41;
  v31 = v29;
  v41[0] = GameData_20fe428;
  v9 = *((unsigned __int8*)v6 + 1);
  v8 = (char*)v6 + 1;
  if (v9 != 0) {
    v10 = game_UnitPool_Get(v8);
    v1 = *(unsigned int*)(a1 + 40);
    if (v10 != 0) {
      v11 = *(_QWORD*)(a1 + 8);
      if (*(_QWORD*)(v11 + 152) != 0) {
        v12 = *(_QWORD*)(v11 + 152);
      }
      else {
        v12 = *(_QWORD*)(a1 + 8);
      }
      v13 = GameRoutine_16f69a0(v12, "MID_LegionSellMenu_Owner_Confirm", v1,
                                v29, v41);
      goto LABEL_21;
    }
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 48LL);
  }
  v16 = *(_QWORD*)(a1 + 8);
  v17 = (__int64*)(v4 + 8 * v1);
  if ((int)v1 < 0) {
    v17 = v5;
  }
  v18 = *((_DWORD*)v17 + 1);
  if (*(_QWORD*)(v16 + 152) != 0) {
    v19 = *(_QWORD*)(v16 + 152);
  }
  else {
    v19 = *(_QWORD*)(a1 + 8);
  }
  if (v18 != 0) {
    v13 = GameRoutine_16f64c0(v19, "MID_LegionSellMenu_Dispatch_Confirm", v1,
                              v29, v41);
  }
  else {
    v13 = GameRoutine_16f60e0(v19, "MID_LegionSellMenu_Confirm");
  }

LABEL_21:
  v20 = v13;
  if (v42 == v41) {
    v21 = 32;
  }
  else {
    if (v42 == nullptr) {
      goto LABEL_26;
    }
    v21 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v42 + v21))(v42, v14);

LABEL_26:
  if (v31 == v29) {
    v22 = 32;
    goto LABEL_30;
  }
  if (v31 != nullptr) {
    v22 = 40;
  LABEL_30:
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v31 + v22))(v31, v14);
  }
  v23 = *(unsigned int*)(a1 + 40);
  if ((int)v23 >= 0) {
    v24 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 48LL) + 8 * v23);
  }
  else {
    v24 = v5;
  }
  v25 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) +
                                        8LL * *(unsigned __int8*)v24) +
                             52LL);
  *(_DWORD*)v29 = 4;
  *(_QWORD*)&v29[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)v5 != 0) {
    v26 = *v5;
  }
  else {
    v26 = 0;
  }
  *(_QWORD*)&v29[12] = v26;
  WORD1(v30) = 0;
  HIDWORD(v30) = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = nullptr;
  v32 = &v33;
  v33 = nullptr;
  GameRoutine_930b90(&v30, GameData_212c8b0[0]);
  v38 = 0;
  v39 = v25;
  v40 = 0;
  GameRoutine_1a06060(v20 + 1544, v29, 0);
  LODWORD(v31) = 0;
  v30 = 0;
  if ((v35 & 1) != 0) {
    *v37 = 0;
    v36 = 0;
  }
  else {
    LOWORD(v35) = 0;
  }
  GameRoutine_6e3b50(&v32, v33);
  v33 = nullptr;
  v34 = 0;
  v32 = &v33;
  if ((v35 & 1) != 0) {
    v27 = v37;
    if (v37 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v28);
      v27 = v33;
    }
  }
  else {
    v27 = nullptr;
  }
  GameRoutine_6e3b50(&v32, v27);
  return 12;
}

bool LegionShopMenuItem_Sell_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    v2 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v1);
  }
  else {
    v2 = GameData_212ceb0;
  }
  return *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8LL * *(unsigned __int8*)v2) +
                              152LL) != 0;
}

__int64 LegionShopMenuItem_Sell_Unknown74(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v24[2];

  v1 = *(unsigned int*)(a1 + 40);
  v3 = GameData_212cf80[0];
  v4 = *(_QWORD*)GameData_212cf80[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
  v6 = GameData_212ceb0;
  v7 = (__int64*)(*(_QWORD*)(v5 + 48) + 8 * v1);
  if ((int)v1 < 0) {
    v7 = GameData_212ceb0;
  }
  v8 = *((_DWORD*)v7 + 1);
  if (v8 != 0) {
    v24[0] = v8;
    v24[1] = &GameData_1a9f09e;
    v9 = SpotMgr_132ffa0(v24);
    GameRoutine_132b100(v9, 0);
    v4 = *(_QWORD*)v3;
    LODWORD(v1) = *(_DWORD*)(a1 + 40);
    v5 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
  }
  v10 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if ((int)v1 >= 0) {
      v11 = (__int64*)(*(_QWORD*)(v5 + 48) + 8LL * (unsigned int)v1);
    }
    else {
      v11 = v6;
    }
    v12 =
        *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                        8LL * *(unsigned __int8*)v11) +
                             52LL);
    v13 = (*(_DWORD*)(game_GameModeData_instance_ + 84) + v12) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 84) + v12) >> 31);
    v14 = (*(_DWORD*)(game_GameModeData_instance_ + 88) + v12) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 88) + v12) >> 31);
    if (v13 >= 99999) {
      v13 = 99999;
    }
    if (v14 >= 99999) {
      v14 = 99999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 84) = v13;
    *(_DWORD*)(v10 + 88) = v14;
    LODWORD(v1) = *(_DWORD*)(a1 + 40);
    v5 = *(_QWORD*)(v4 + 8);
  }
  if ((v1 & 0x80000000) == 0) {
    v15 = *(_QWORD*)(v5 + 48) + 8LL * (unsigned int)v1;
    if (*(_BYTE*)v15 != 0) {
      if (*(_BYTE*)(v15 + 1) != 0) {
        v16 = game_UnitPool_Get(v15 + 1);
      }
      else {
        v16 = 0;
      }
      GameRoutine_937de0(v5, v16);
      *(_QWORD*)v15 = 0;
      v17 = 300;
      v18 = 0;
      *(_DWORD*)(v5 + 72) = 0;
      v19 = (_BYTE*)(*(_QWORD*)(v5 + 48) + 24LL);
      do {
        if (*(v19 - 24) != 0) {
          *(_DWORD*)(v5 + 72) = ++v18;
        }
        if (*(v19 - 16) != 0) {
          *(_DWORD*)(v5 + 72) = ++v18;
        }
        if (*(v19 - 8) != 0) {
          *(_DWORD*)(v5 + 72) = ++v18;
        }
        if (*v19 != 0) {
          *(_DWORD*)(v5 + 72) = ++v18;
        }
        if (v19[8] != 0) {
          *(_DWORD*)(v5 + 72) = ++v18;
        }
        if (v19[16] != 0) {
          *(_DWORD*)(v5 + 72) = ++v18;
        }
        v17 -= 6;
        v19 += 48;
      } while (v17 != 0);
    }
  }
  v20 = GameRoutine_149e9e0(8);
  if (game_GameModeData_instance_ != 0) {
    GameRoutine_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v20, 1);
  }
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 88) + 80LL))(a1 + 88);
  if (v21 != 0) {
    v22 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 1128LL))(v21);
    (*(void (**)(__int64))(*(_QWORD*)v22 + 1136LL))(v22);
    (*(void (**)(__int64))(*(_QWORD*)v22 + 1120LL))(v22);
  }
  return 2;
}

__int64 LegionShopMenuItem_Sell_Unknown78(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return __dynamic_cast(result, GameData_212e030[0], GameData_2132048, 0);
  }
  return result;
}

#pragma GCC visibility pop
