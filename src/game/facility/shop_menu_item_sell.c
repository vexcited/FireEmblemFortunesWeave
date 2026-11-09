#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1581060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15de9d0(_QWORD, _QWORD);
__int64 GameRoutine_15dea90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16eb610(_QWORD*, unsigned int, _BYTE*, __int64, __int64,
                            unsigned int, int);
__int64 GameRoutine_1704ae0(_QWORD, _QWORD);
__int64 GameRoutine_1704d80(_QWORD);
__int64 GameRoutine_1873150(void);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_89b900(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_RemoveItem(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _BYTE* GameData_2132020;
extern __int64 (*GameData_20a73c0[])();
extern __int64 (*game_facility_anonymous_ProcItemSellMenu_vtable[])();
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_map_UnitFlags_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
extern __int64* game_g_empty_item_ptr;
__int64 ShopMenuItem_Sell_Unknown76(__int64 a1);
__int64 ShopMenuItem_Sell_Unknown55(_QWORD* a1);
__int64 ShopMenuItem_Sell_Unknown77(__int64 a1);
__int64 ShopMenuItem_Sell_1703e20(__int64 a1);
__int64 ShopMenuItem_Sell_Unknown80(__int64 result, __int64 a2);
__int64 ShopMenuItem_Sell_Unknown78(__int64 a1);
bool ShopMenuItem_Sell_17051a0(__int64 a1);

__int64 ShopMenuItem_Sell_Unknown76(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  _BOOL4 v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  unsigned __int16* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v4 = GameData_212c878[0];
  v5 = *GameData_212c878[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)result);
  v7 = *(_DWORD*)(v6 + 80);
  if (v7 != 0) {
    v8 = *(unsigned __int8*)(v6 + 87);
    v9 = (v8 - *(unsigned __int8*)(result + 2)) &
         ~((int)(v8 - *(unsigned __int8*)(result + 2)) >> 31);
    if (v9 < v8) {
      v7 = (int)(v9 * v7) / (int)v8;
    }
    if (v7 <= 1) {
      v7 = 1;
    }
  }
  else {
    v7 = 1;
  }
  if (game_GameModeData_instance_ != 0) {
    v10 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + v7) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) + v7) >> 31);
    if (v10 >= 9999999) {
      v10 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v10;
  }
  if (*(_QWORD*)(a1 + 104) != 0) {
    v11 = (*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) + 3) &
           1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                         8LL * *(unsigned __int16*)(*(
                                                   __int64 (**)(__int64))(
                                                   *(_QWORD*)a1 + 560LL))(a1)) +
                              72LL) < 8u;
    v19 = (*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) + 3) &
           1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                         8LL * *(unsigned __int16*)(*(
                                                   __int64 (**)(__int64))(
                                                   *(_QWORD*)a1 + 560LL))(a1)) +
                              72LL) == 13;
    v20 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v21 = *(_QWORD*)(a1 + 104);
    v22 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * *v20) +
                              73LL);
    result = game_Unit_RemoveItem(v21, *(unsigned int*)(a1 + 40));
    if ((result & 1) != 0) {
      result = game_Unit_Unknown6c4610(v21);
      *(_WORD*)(v21 + 20) |= 1u;
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        v23 = *(_QWORD*)(v21 + 440);
        if (v23 != 0 && *(unsigned __int8*)(v23 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v24 = *(unsigned __int8*)(v21 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v24) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v24) |= 2u;
          }
        }
      }
    }
    if (v11) {
      return GameRoutine_15de9d0(*(_QWORD*)(a1 + 104), 1);
    }
    else if (v19) {
      return GameRoutine_15dea90(*(_QWORD*)(a1 + 104), v22, 1);
    }
  }
  else {
    v12 = *(_DWORD*)(a1 + 40);
    if ((v12 & 0x80000000) == 0) {
      result = *(
          _QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
      v13 = *(_QWORD*)(result + 8) + 12LL * v12;
      if (*(_WORD*)(v13 + 4) != 0) {
        v14 = *(unsigned __int16*)(v13 + 2);
        v15 = *(_QWORD*)(*(_QWORD*)(v5 + 64) +
                         8LL * *(unsigned __int16*)(v13 + 4));
        if ((((0x10000000000LL << *(_BYTE*)(v15 + 72)) |
              (1LL << *(_BYTE*)(v15 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          v16 = 1;
        }
        else {
          v16 = 999;
        }
        if (v16 >= v14 - 1) {
          LOWORD(v16) = v14 - 1;
        }
        if (*(_WORD*)(v13 + 2) == 0) {
          LOWORD(v16) = 0;
        }
        *(_WORD*)(v13 + 2) = v16;
        if ((_WORD)v16 == 0) {
          v17 = *(_QWORD*)(result + 8) + 12LL * v12;
          v18 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                           8LL * *(unsigned __int16*)(v17 + 4));
          if ((((0x10000000000LL << *(_BYTE*)(v18 + 72)) |
                (1LL << *(_BYTE*)(v18 + 73))) &
               0xFFBFFFFFFFA39FFFLL) != 0) {
            *(_QWORD*)(v17 + 4) = 0;
          }
          *(_WORD*)(v17 + 2) = 0;
          return GameRoutine_89b900(result, v3);
        }
      }
    }
  }
  return result;
}

__int64 ShopMenuItem_Sell_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  char v8;
  unsigned int v9;
  unsigned __int16* v10;
  __int64* v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  int v20;
  int v21;
  const char* v23;
  unsigned __int16* v24;
  __int64 v25;
  __int64 v28;
  __int64 v29;

  GameRoutine_1873150();
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v28 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v28);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = a1[13];
  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v7 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1);
  v9 = 1;
  GameRoutine_1581060(v4, v5, v6, v7 & 1, 1, v8 & 1);
  v10 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v11 = GameData_212c878[0];
  v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v10);
  v13 = *(_DWORD*)(v12 + 80);
  if (v13 != 0) {
    v14 = *(unsigned __int8*)(v12 + 87);
    v15 = (v14 - *((unsigned __int8*)v10 + 2)) &
          ~((int)(v14 - *((unsigned __int8*)v10 + 2)) >> 31);
    if (v15 < v14) {
      v13 = (int)(v15 * v13) / (int)v14;
    }
    if (v13 <= 1) {
      v9 = 1;
    }
    else {
      v9 = v13;
    }
  }
  GameRoutine_16eb610(a1, 0, "L_CostGold", (__int64)"Icon", (__int64)"T_Num",
                      v9, 0);
  v16 = a1[7];
  if (v16 == 0) {
    goto LABEL_16;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_16;
  }
  v18 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v18 != nullptr) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v29 = v17;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  std___1___shared_weak_count___release_weak(v29);
  if (v18 == nullptr) {
  LABEL_16:
    v18 = &ui_LayoutAccessor_empty_;
  }

LABEL_17:
  v19 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                   8LL * *(unsigned __int16*)(*(__int64 (**)(_QWORD*))(
                             *a1 + 560LL))(a1));
  v20 = *(unsigned __int8*)(v19 + 72);
  v21 = *(_DWORD*)(v19 + 336) & 3;
  if (v20 != 15 && v21 == 0) {
    v24 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    v23 = "CantSell";
    if ((*((_BYTE*)v24 + 3) & 0x10) == 0) {
      v25 = *(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8LL * *v24);
      if (((1LL << *(_BYTE*)(v25 + 72)) & 0xE01F) != 0 &&
          (*(_DWORD*)(v25 + 336) & 4) == 0) {
        v23 = "CanSell";
      }
    }
  }
  else {
    v23 = "CantSell";
  }
  return GameRoutine_1562cf0(v18, v23);
}

__int64 ShopMenuItem_Sell_Unknown77(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  unsigned __int16* v4;
  __int64* v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int16* v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
    return 0;
  }
  if (*(__int64 (***)())v1 != game_facility_anonymous_ProcItemSellMenu_vtable) {
    return 0;
  }
  if ((int)((*(_QWORD*)(v1 + 1104) - *(_QWORD*)(v1 + 1096)) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*(_QWORD*)(v1 + 1088) + 336LL);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v3 = result;
      v4 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v5 = GameData_212c878[0];
      v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
      v7 = *(unsigned __int8*)(v6 + 72);
      v8 = *(_DWORD*)(v6 + 336) & 3;
      if (v7 == 15 || v8 != 0) {
        return 0;
      }
      v10 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(
          v3);
      if ((*((_BYTE*)v10 + 3) & 0x10) != 0) {
        return 0;
      }
      v11 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *v10);
      return ((1LL << *(_BYTE*)(v11 + 72)) & 0xE01F) != 0 &&
             (*(_BYTE*)(v11 + 336) & 4) == 0;
    }
  }
  return result;
}

__int64 ShopMenuItem_Sell_1703e20(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  unsigned __int16* v4;
  __int64* v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int16* v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 - 88);
  if (v1 == 0) {
    return 0;
  }
  if (*(__int64 (***)())v1 != game_facility_anonymous_ProcItemSellMenu_vtable) {
    return 0;
  }
  if ((int)((*(_QWORD*)(v1 + 1104) - *(_QWORD*)(v1 + 1096)) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*(_QWORD*)(v1 + 1088) + 336LL);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v3 = result;
      v4 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v5 = GameData_212c878[0];
      v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v4);
      v7 = *(unsigned __int8*)(v6 + 72);
      v8 = *(_DWORD*)(v6 + 336) & 3;
      if (v7 == 15 || v8 != 0) {
        return 0;
      }
      v10 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(
          v3);
      if ((*((_BYTE*)v10 + 3) & 0x10) != 0) {
        return 0;
      }
      v11 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *v10);
      return ((1LL << *(_BYTE*)(v11 + 72)) & 0xE01F) != 0 &&
             (*(_BYTE*)(v11 + 336) & 4) == 0;
    }
  }
  return result;
}

__int64 ShopMenuItem_Sell_Unknown80(__int64 result, __int64 a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int16* v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned __int16* v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  _BYTE v28[20];
  __int64 v29;
  _BYTE* v30;
  _QWORD* v31;
  _BYTE* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE* v36;
  int v37;
  int v38;
  int v39;
  _QWORD v40[4];
  _QWORD* v41;
  __int64 v42;

  v2 = *(_QWORD*)(result + 8);
  v42 = a2;
  if (v2 == 0 ||
      *(__int64 (***)())v2 != game_facility_anonymous_ProcItemSellMenu_vtable) {
    return result;
  }
  v3 = (_DWORD*)result;
  v40[0] = GameData_20a73c0;
  v40[1] = &v42;
  v41 = v40;
  v30 = v28;
  *(_QWORD*)v28 = GameData_20a73c0;
  *(_QWORD*)&v28[8] = &v42;
  GameRoutine_1704ae0(v2 + 1088, v28);
  if (v30 == v28) {
    v4 = 32;
  }
  else {
    if (v30 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v30 + v4))();

LABEL_8:
  if (v41 == v40) {
    v5 = 32;
    goto LABEL_12;
  }
  if (v41 != nullptr) {
    v5 = 40;
  LABEL_12:
    (*(void (**)(void))(*v41 + v5))();
  }
  v6 = *(char**)(v2 + 1104);
  v7 = *(char**)(v2 + 1096);
  v8 = v42;
  if ((int)((unsigned __int64)(v6 - v7) >> 3) < 1) {
    v20 =
        (unsigned __int16*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 560LL))(v3);
    v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v20);
    v22 = *(_DWORD*)(v21 + 80);
    if (v22 != 0) {
      v23 = *(unsigned __int8*)(v21 + 87);
      v24 = (v23 - *((unsigned __int8*)v20 + 2)) &
            ~((int)(v23 - *((unsigned __int8*)v20 + 2)) >> 31);
      if (v24 < v23) {
        v22 = (int)(v24 * v22) / (int)v23;
      }
      if (v22 <= 1) {
        v22 = 1;
      }
    }
    else {
      v22 = 1;
    }
    v9 = v3[21] * v22;
  }
  else if (v7 == v6) {
    v9 = 0;
  }
  else {
    v9 = 0;
    v10 = GameData_212e008[0];
    v11 = GameData_212e010[0];
    v12 = GameData_212c878[0];
    do {
      if (*(_QWORD*)v7 != 0) {
        v14 = __dynamic_cast(*(_QWORD*)v7, v10, v11, 0);
        if (v14 != 0) {
          v15 = v14;
          v16 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 +
                                                             560LL))(v14);
          v17 = *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * *v16);
          v13 = *(_DWORD*)(v17 + 80);
          if (v13 != 0) {
            v18 = *(unsigned __int8*)(v17 + 87);
            v19 = (v18 - *((unsigned __int8*)v16 + 2)) &
                  ~((int)(v18 - *((unsigned __int8*)v16 + 2)) >> 31);
            if (v19 < v18) {
              v13 = (int)(v19 * v13) / (int)v18;
            }
            if (v13 <= 1) {
              v13 = 1;
            }
          }
          else {
            v13 = 1;
          }
          v9 += *(_DWORD*)(v15 + 84) * v13;
        }
      }
      v7 += 8;
    } while (v7 != v6);
  }
  *(_DWORD*)v28 = 0;
  *(_QWORD*)&v28[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v25 = *GameData_212ceb0;
  }
  else {
    v25 = 0;
  }
  *(_QWORD*)&v28[12] = v25;
  WORD1(v29) = 0;
  HIDWORD(v29) = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = nullptr;
  v31 = &v32;
  v32 = nullptr;
  GameRoutine_930b90(&v29, GameData_212c8b0[0]);
  v37 = 0;
  v38 = v9;
  v39 = 0;
  GameRoutine_1a06060(v8 + 1544, v28, 0);
  LODWORD(v30) = 0;
  v29 = 0;
  if ((v34 & 1) != 0) {
    *v36 = 0;
    v35 = 0;
  }
  else {
    LOWORD(v34) = 0;
  }
  GameRoutine_6e3b50(&v31, v32);
  v32 = nullptr;
  v33 = 0;
  v31 = &v32;
  if ((v34 & 1) != 0) {
    v26 = v36;
    if (v36 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v36);
      v26 = v32;
    }
  }
  else {
    v26 = nullptr;
  }
  return GameRoutine_6e3b50(&v31, v26);
}

__int64 ShopMenuItem_Sell_Unknown78(__int64 a1)
{
  __int64 (***v1)();
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *GameData_2132020 = 1;
  v1 = *(__int64 (****)())(a1 + 8);
  if (v1 != nullptr && *v1 == game_facility_anonymous_ProcItemSellMenu_vtable) {
    v2 = a1;
    GameRoutine_1704d80(v1 + 136);
    a1 = v2;
  }
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v3 != 0) {
    v4 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 1128LL))(v3);
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1136LL))(v4);
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1120LL))(v4);
  }
  return 2;
}

bool ShopMenuItem_Sell_17051a0(__int64 a1)
{
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int16* v8;
  __int64 v9;

  v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v3 = GameData_212c878[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
  v5 = *(unsigned __int8*)(v4 + 72);
  v6 = *(_DWORD*)(v4 + 336) & 3;
  if (v5 == 15 || v6 != 0) {
    return false;
  }
  v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
    return false;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v8);
  return ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0 &&
         (*(_BYTE*)(v9 + 336) & 4) == 0;
}

#pragma GCC visibility pop
