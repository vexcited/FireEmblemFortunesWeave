#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212d670[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
void GameHr_157e0f0(__int64*, const char*, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void InfoMenuItem_Unknown17(_QWORD* a1);
__int64 InfoMenuItem_DrawText(__int64 a1);

void InfoMenuItem_Unknown17(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v19;
    if (v19 != nullptr) {
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
  LayoutAccessor_1560520((__int64*)(a1[1] + 952LL), "L_MenuItem_Info",
                         "MenuItemList", *(const char**)(a1[11] + 8LL));
  LayoutAccessor_1560070((void*)(&v22_.v22), (__int64*)(a1[1] + 952LL),
                         *(const char**)(a1[11] + 8LL));
  v8 = v22_.v22;
  v7 = v22_.v23;
  v9 = a1[7];
  v22_.v22 = 0;
  v22_.v23 = 0;
  a1[6] = v8;
  a1[7] = v7;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak(v22_.v23);
    }
    v7 = a1[7];
  }
  if (v7 == 0) {
    goto LABEL_14;
  }
  v10 = std___1___shared_weak_count_lock(v7);
  if (v10 == 0) {
    goto LABEL_14;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = (__int64*)a1[6];
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v20 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  v13 = v20;
  if (v20 == nullptr) {
  LABEL_14:
    v13 = &ui_LayoutAccessor_empty_;
  }
LABEL_15:
  LayoutAccessor_155e830((__int64)v13, 1);
  v14 = a1[7];
  if (v14 == 0) {
    goto LABEL_19;
  }
  v15 = std___1___shared_weak_count_lock(v14);
  if (v15 == 0) {
    goto LABEL_19;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = (__int64*)a1[6];
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v21 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
    v18 = v21;
    if (v21 != nullptr) {
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if (v18 == nullptr) {
  LABEL_19:
    v18 = &ui_LayoutAccessor_empty_;
  }
LABEL_20:
  GameHr_157e0f0(v18, *(const char**)(a1[11] + 8LL), nullptr);
}

__int64 InfoMenuItem_DrawText(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  const char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char v12;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 != nullptr) {
        LayoutAccessor_1562cf0(*(_QWORD*)(a1 + 48), (unsigned int*)"Info");
        v5 = "MID_Sys_HonorLv";
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v5 = "MID_Sys_HonorLV_Part3";
        }
        v6 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v5, 0);
        if (v6 != nullptr) {
          v7 = (__int64)v6;
          v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Lv");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        v9 = *(_DWORD*)(a1 + 84);
        v10 = ui_LayoutAccessor_FindPane(v3, "T_Num");
        if (v10 != 0) {
          v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d690, 0);
          if (v11 != 0) {
            GameRoutine_156c910(v11, "%d", 1, v9);
          }
        }
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
        result =
            ui_LayoutAccessor_SetPaneVisible((__int64)v3, "IconState", v12 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
