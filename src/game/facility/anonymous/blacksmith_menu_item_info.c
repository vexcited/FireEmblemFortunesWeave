#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BlacksmithMenuItem_Info_Unknown3(__int64 a1);
_QWORD* LayoutAccessor_1560520(__int64*, __int64, const char*, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_157a130(__int64*, unsigned __int16*, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 ui_LayoutAccessor_empty_;
extern __int64 ui_Manager_instance_;
void GameHr_157e0f0(__int64*, __int64, _BYTE*);
void game_menu_GameMenuItem_DrawText(_QWORD*);
__int64 BlacksmithMenuItem_Info_Unknown55(__int64 a1);
void BlacksmithMenuItem_Info_Unknown17(__int64 a1);

__int64 BlacksmithMenuItem_Info_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  const char* v8;
  void (**v9)(__int64);
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  unsigned __int16* v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  __int64 result;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  struct {
    __int64* v31;
    __int64 v32;
  } v31_;

  game_menu_GameMenuItem_DrawText((_QWORD*)a1);
  if (*(_BYTE*)(a1 + 88) != 1) {
    if (*(_BYTE*)(a1 + 79) == 1) {
      v9 = (void (**)(__int64))(*(_QWORD*)a1 + 520LL);
    }
    else {
      v9 = (void (**)(__int64))(*(_QWORD*)a1 + 504LL);
      if (*(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1) {
        v9 = (void (**)(__int64))(*(_QWORD*)a1 + 512LL);
      }
    }
    (*v9)(a1);
    v10 = *(_QWORD*)(a1 + 56);
    if (v10 == 0) {
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  v2 = *(_QWORD*)(a1 + 56);
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL);
  if (v2 == 0) {
    goto LABEL_15;
  }
  v4 = std___1___shared_weak_count_lock(v2);
  if (v4 == 0) {
    goto LABEL_15;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_6;
    }
  LABEL_15:
    v7 = ui_LayoutAccessor_empty__ptr[0];
    if (v3 != a1) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
  v11 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v11;
  if (v11 == nullptr) {
    goto LABEL_15;
  }
LABEL_6:
  if (v3 != a1) {
  LABEL_7:
    v8 = "MultipleDefault";
    goto LABEL_17;
  }
LABEL_16:
  v8 = "MultipleSelect";
LABEL_17:
  GameHr_1562680((__int64)v7, v8, 0x1.0000000000000p+0f);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_21;
  }
LABEL_18:
  v12 = std___1___shared_weak_count_lock(v10);
  if (v12 == 0) {
    goto LABEL_21;
  }
  v13 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v29 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak(v29);
  if (v13 == nullptr) {
  LABEL_21:
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_22:
  v14 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  GameRoutine_157a130(v13, v14, v15 & 1);
  v16 = *(_QWORD*)(a1 + 56);
  if (v16 == 0) {
    goto LABEL_26;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_26;
  }
  v18 = v17;
  v19 = (atomic_ullong*)(v17 + 8);
  v20 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20 != nullptr) {
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v30 = v20;
  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
  std___1___shared_weak_count___release_weak(v18);
  v20 = v30;
  if (v30 == nullptr) {
  LABEL_26:
    v20 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_27:
  LayoutAccessor_1560070((void*)(&v31_.v31), v20, "L_CostGold");
  result = v31_.v32;
  if (v31_.v32 == 0) {
    return result;
  }
  v22 = std___1___shared_weak_count_lock(v31_.v32);
  v23 = v31_.v31;
  result = v31_.v32;
  if (v31_.v32 != 0) {
    result = std___1___shared_weak_count___release_weak(v31_.v32);
  }
  if (v22 != 0 && v23 != nullptr) {
    result = ui_LayoutAccessor_FindPane(v23, (__int64)"Icon");
    if (result != 0) {
      result =
          __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
      if (result != 0) {
        v24 = result;
        v25 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
        v26 = 72;
        if (!v25) {
          v26 = 36;
        }
        v27 = *(_DWORD*)((char*)GameData_212da30 + v26);
        v28 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v24 + 88LL))(v24, 0);
        if (v28 != 0) {
          *(_DWORD*)(v28 + 12) = v27;
        }
        result = Manager_136a920(ui_Manager_instance_ + 1264, v24, 0, 7u,
                                 "IconStock_Gold");
      }
    }
  }
  else if (v22 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    return std___1___shared_weak_count___release_weak(v22);
  }
  return result;
}

__int64 BlacksmithMenuItem_Info_Unknown3(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    return *(_QWORD*)(a1 + 112);
  }
  else {
    return a1 + 97;
  }
}

void BlacksmithMenuItem_Info_Unknown17(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  _BYTE* v26;
  _BYTE* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;

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
    v28 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v28;
    if (v28 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830((__int64)v6, 0);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 112);
  }
  else {
    v7 = a1 + 97;
  }
  LayoutAccessor_1560520((__int64*)(*(_QWORD*)(a1 + 8) + 952LL),
                         (__int64)"L_MenuItem_Info", "MenuItemList", v7);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v8 = *(const char**)(a1 + 112);
  }
  else {
    v8 = (const char*)(a1 + 97);
  }
  LayoutAccessor_1560070((void*)(&v31_.v31),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 952LL), v8);
  v10 = v31_.v31;
  v9 = v31_.v32;
  v11 = *(_QWORD*)(a1 + 56);
  v31_.v31 = 0;
  v31_.v32 = 0;
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v9;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
    if (v31_.v32 != 0) {
      std___1___shared_weak_count___release_weak(v31_.v32);
    }
    v9 = *(_QWORD*)(a1 + 56);
  }
  if (v9 == 0) {
    goto LABEL_20;
  }
  v12 = std___1___shared_weak_count_lock(v9);
  if (v12 == 0) {
    goto LABEL_20;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v29 = v15;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak(v13);
  v15 = v29;
  if (v29 == nullptr) {
  LABEL_20:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  LayoutAccessor_155e830((__int64)v15, 1);
  v16 = *(_QWORD*)(a1 + 56);
  if (v16 == 0) {
    goto LABEL_25;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_25;
  }
  v18 = v17;
  v19 = (atomic_ullong*)(v17 + 8);
  v20 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20 != nullptr) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v30 = v20;
  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
  std___1___shared_weak_count___release_weak(v18);
  v20 = v30;
  if (v30 == nullptr) {
  LABEL_25:
    v20 = &ui_LayoutAccessor_empty_;
  }
LABEL_26:
  v21 = *(unsigned __int8*)(a1 + 120);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 112);
  }
  else {
    v22 = a1 + 97;
  }
  v23 = v21 >> 1;
  v24 = (v21 & 1) == 0;
  v25 = *(_QWORD*)(a1 + 128);
  if (v24) {
    v25 = v23;
  }
  v26 = (_BYTE*)(a1 + 121);
  if (!v24) {
    v26 = *(_BYTE**)(a1 + 136);
  }
  if (v25 != 0) {
    v27 = v26;
  }
  else {
    v27 = nullptr;
  }
  GameHr_157e0f0(v20, v22, v27);
}

#pragma GCC visibility pop
