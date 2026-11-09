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

#pragma GCC visibility pop
