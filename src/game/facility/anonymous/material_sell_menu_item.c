#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1704d80(__int64*);
__int64 GameRoutine_1212520(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_157a130(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 ShopMenuItem_Sell_Unknown55(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _BYTE* GameData_2132020;
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_20a8cc0;
extern __int64 GameData_212d690;
extern __int64 GameData_2131c80[42];
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
extern __int64* GameData_212e030[4];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 MaterialSellMenuItem_Unknown55(_QWORD* a1);
__int64 MaterialSellMenuItem_Unknown77(__int64 a1);
__int64 MaterialSellMenuItem_Unknown78(__int64 a1);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06060(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21caa2c;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e038[3];
extern __int64* game_g_empty_item_ptr;
__int64 MaterialSellMenuItem_Unknown3(__int64 a1);
__int64 MaterialSellMenuItem_Unknown4(__int64 a1);
__int64
game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog_closure_Invoke(
    __int64 a1, __int64* a2, int* a3);
__int64
game_facility_anonymous_MaterialSellMenuItem_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 MaterialSellMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  bool v11;
  __int64 v12;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  atomic_ullong* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;

  ShopMenuItem_Sell_Unknown55(a1);
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
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v30 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v30);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  GameRoutine_1212520(v5);
  v6 = ui_LayoutAccessor_FindPane(v4, "T_StockNum");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0);
    if (v7 != 0) {
      GameRoutine_156c910(v7, "%d", 1);
    }
  }
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_13;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v31 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v31);
    if (v10 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if (v10 == nullptr) {
  LABEL_13:
    v10 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_14:
  v11 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0;
  v12 = 72;
  v13 = (char*)GameData_212da30;
  if (!v11) {
    v12 = 36;
  }
  v14 = *(_DWORD*)((char*)GameData_212da30 + v12);
  v15 = ui_LayoutAccessor_FindTextBox(v10, "T_StockNum");
  if (v15 != 0) {
    v16 = Pane_58f8a0(v15);
    if (v16 != 0) {
      *(_DWORD*)(v16 + 12) = v14;
    }
  }
  v17 = a1[7];
  if (v17 == 0) {
    goto LABEL_23;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_23;
  }
  v19 = v18;
  v20 = (atomic_ullong*)(v18 + 8);
  v21 = (__int64*)a1[6];
  if (atomic_fetch_add(v20, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v32 = v21;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    v21 = v32;
    if (v32 != nullptr) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if (v21 == nullptr) {
  LABEL_23:
    v21 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_24:
  v22 = GameRoutine_155fbe0(v21, "L_CostGold");
  v23 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v24 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  GameRoutine_157a130(v22, v23, v24 & 1);
  result = ui_LayoutAccessor_FindPane(v22, "Icon");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v26 = result;
      v11 = ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0;
      v27 = 72;
      if (!v11) {
        v27 = 36;
      }
      v28 = *(_DWORD*)&v13[v27];
      v29 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v26 + 88LL))(v26, 0);
      if (v29 != 0) {
        *(_DWORD*)(v29 + 12) = v28;
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v26, 0, 7,
                                 "IconStock_Gold");
    }
  }
  return result;
}

__int64 MaterialSellMenuItem_Unknown77(__int64 a1)
{
  __int64 v1;
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;

  v10 = *(_QWORD*)(a1 + 8);
  if (v10 == 0) {
    return 0;
  }
  v11 = __dynamic_cast(v10, GameData_212e030[0], &GameData_20a8cc0, 0);
  if (v11 == 0) {
    return 0;
  }
  v12 = (_QWORD*)(v11 + 1064);
  if ((int)((v12[2] - v12[1]) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*v12 + 336LL);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v1 = result;
      v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v3 = GameData_212c878[0];
      v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
      v5 = *(unsigned __int8*)(v4 + 72);
      v6 = *(_DWORD*)(v4 + 336) & 3;
      if (v5 == 15 || v6 != 0) {
        return 0;
      }
      v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(
          v1);
      if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
        return 0;
      }
      else {
        v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v8);
        return ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0 &&
               (*(_BYTE*)(v9 + 336) & 4) == 0;
      }
    }
  }
  return result;
}

__int64 MaterialSellMenuItem_Unknown78(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  *GameData_2132020 = 1;
  if (v2 != 0) {
    v3 = (__int64*)__dynamic_cast(v2, GameData_212e030[0], GameData_2131c80[0],
                                  -2);
    if (v3 != nullptr) {
      GameRoutine_1704d80(v3);
    }
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 80LL))(a1 + 96);
  if (v4 != 0) {
    v5 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1136LL))(v5);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1120LL))(v5);
  }
  return 2;
}

__int64 MaterialSellMenuItem_Unknown3(__int64 a1)
{
  __int64 v1;
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;

  v10 = *(_QWORD*)(a1 - 88);
  if (v10 == 0) {
    return 0;
  }
  v11 = __dynamic_cast(v10, GameData_212e030[0], &GameData_20a8cc0, 0);
  if (v11 == 0) {
    return 0;
  }
  v12 = (_QWORD*)(v11 + 1064);
  if ((int)((v12[2] - v12[1]) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*v12 + 336LL);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v1 = result;
      v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v3 = GameData_212c878[0];
      v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
      v5 = *(unsigned __int8*)(v4 + 72);
      v6 = *(_DWORD*)(v4 + 336) & 3;
      if (v5 == 15 || v6 != 0) {
        return 0;
      }
      v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(
          v1);
      if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
        return 0;
      }
      else {
        v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v8);
        return ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0 &&
               (*(_BYTE*)(v9 + 336) & 4) == 0;
      }
    }
  }
  return result;
}

__int64 MaterialSellMenuItem_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  *GameData_2132020 = 1;
  v2 = *(_QWORD*)(a1 - 88);
  if (v2 != 0) {
    v3 = (__int64*)__dynamic_cast(v2, GameData_212e030[0], GameData_2131c80[0],
                                  -2);
    if (v3 != nullptr) {
      GameRoutine_1704d80(v3);
    }
  }
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if (v4 != 0) {
    v5 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1136LL))(v5);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1120LL))(v5);
  }
  return 2;
}

__int64

game_facility_anonymous_MaterialSellMenuItem_OnOpenDialog_closure_Invoke(
    __int64 a1, __int64* a2, int* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  int v20;
  int v21;
  int v22;

  v3 = *a3;
  v4 = **(_QWORD**)(a1 + 8);
  v9 = 8;
  v10 = *a2;
  if ((_BYTE)GameData_21caa2c != 0) {
    v5 = GameData_21caa2c;
  }
  else {
    v5 = 0;
  }
  v11 = v5;
  WORD1(v12) = 0;
  HIDWORD(v12) = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = nullptr;
  v14 = &v15;
  v15 = nullptr;
  GameRoutine_930b90(&v12, GameData_212c8b0[0]);
  v20 = 0;
  v21 = v3;
  v22 = -1;
  ObeliskDestinyMenuItem_1a06060(v4 + 1520, &v9, 0);
  v13 = 0;
  v12 = 0;
  if ((v17 & 1) != 0) {
    *v19 = 0;
    v18 = 0;
  }
  else {
    LOWORD(v17) = 0;
  }
  GameRoutine_6e3b50(&v14, v15);
  v15 = nullptr;
  v16 = 0;
  v14 = &v15;
  if ((v17 & 1) != 0) {
    v6 = v19;
    if (v19 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v19);
      v6 = v15;
    }
  }
  else {
    v6 = nullptr;
  }
  return GameRoutine_6e3b50(&v14, v6);
}

__int64

game_facility_anonymous_MaterialSellMenuItem_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3)
{
  __int64 result;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _QWORD* v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;
  int v30;
  int v31;
  int v32;

  result = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (result != 0) {
    v5 = *a3;
    v6 = *(__int64**)(a1 + 8);
    result =
        __dynamic_cast(result, GameData_212e030[0], GameData_212e038[0], 0);
    if (result != 0) {
      v7 = *v6;
      *((_DWORD*)v6 + 21) = v5;
      v8 = result;
      v9 = (unsigned __int16*)(*(__int64 (**)(__int64*))(v7 + 560))(v6);
      v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v9);
      v11 = *(_DWORD*)(v10 + 80);
      if (v11 != 0) {
        v12 = *(unsigned __int8*)(v10 + 87);
        v13 = (v12 - *((unsigned __int8*)v9 + 2)) &
              ~((int)(v12 - *((unsigned __int8*)v9 + 2)) >> 31);
        if (v13 < v12) {
          v11 = (int)(v13 * v11) / (int)v12;
        }
        if (v11 <= 1) {
          v11 = 1;
        }
      }
      else {
        v11 = 1;
      }
      v14 = *((_DWORD*)v6 + 21);
      v19 = 0;
      v15 = v14 * v11;
      v20 = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v16 = *GameData_212ceb0;
      }
      else {
        v16 = 0;
      }
      v21 = v16;
      WORD1(v22) = 0;
      HIDWORD(v22) = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = nullptr;
      v24 = &v25;
      v25 = nullptr;
      GameRoutine_930b90(&v22, GameData_212c8b0[0]);
      v30 = 0;
      v31 = v15;
      v32 = 0;
      (*(void (**)(__int64, _QWORD, int*))(*(_QWORD*)v8 + 1088LL))(v8, 0, &v19);
      v23 = 0;
      v22 = 0;
      if ((v27 & 1) != 0) {
        *v29 = 0;
        v28 = 0;
      }
      else {
        LOWORD(v27) = 0;
      }
      GameRoutine_6e3b50(&v24, v25);
      v25 = nullptr;
      v26 = 0;
      v24 = &v25;
      if ((v27 & 1) != 0) {
        v17 = v29;
        if (v29 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
          v17 = v25;
        }
      }
      else {
        v17 = nullptr;
      }
      return GameRoutine_6e3b50(&v24, v17);
    }
  }
  return result;
}

#pragma GCC visibility pop
