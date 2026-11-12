#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157af40(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 UnitUtil_1212520(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
__int64 DeliveryMaterialMenuItem_DrawText_alt1(__int64 a1) __asm__(
    "DeliveryMaterialMenuItem_DrawText");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 UnitUtil_1212520_alt1(unsigned __int16*) __asm__("UnitUtil_1212520");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameHr_157af40(__int64*, unsigned int);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void DeliveryMaterialMenuItem_DrawText(__int64 a1);

void DeliveryMaterialMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  char* v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int16* v23;
  int v24;
  char* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v27 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt1(v4);
  v6 = v27;
  if (v27 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  GameHr_157af40(v6, *(_DWORD*)(a1 + 40));
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v28 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak_alt1(v9);
  v11 = v28;
  if (v28 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  LayoutAccessor_1562cf0_alt1((__int64)v11, (unsigned int*)"NumEndurance");
  v12 = *(_QWORD*)(a1 + 56);
  if (v12 == 0) {
    goto LABEL_15;
  }
  v13 = std___1___shared_weak_count_lock_alt1(v12);
  if (v13 == 0) {
    goto LABEL_15;
  }
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v29 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v29);
    if (v14 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if (v14 == nullptr) {
  LABEL_15:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  v15 = game_util_Format_alt1("%d", *(_DWORD*)(a1 + 100));
  v16 = ui_LayoutAccessor_FindTextBox_alt1(v14, "T_Num");
  if (v16 != 0) {
    GameRoutine_156c5d0_alt1(v16, (__int64)v15, 0);
  }
  v18 = *(_QWORD*)(a1 + 56);
  if (v18 == 0) {
    goto LABEL_22;
  }
  v19 = std___1___shared_weak_count_lock_alt1(v18);
  if (v19 == 0) {
    goto LABEL_22;
  }
  v20 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20 != nullptr) {
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  v30 = v19;
  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
  std___1___shared_weak_count___release_weak_alt1(v30);
  if (v20 == nullptr) {
  LABEL_22:
    v20 = &ui_LayoutAccessor_empty_;
  }
LABEL_23:
  v21 = *(int*)(a1 + 40);
  v22 = *(_QWORD*)(a1 + 88);
  if (v22 != 0) {
    v23 = (unsigned __int16*)(v22 + 8 * v21 + 828);
  }
  else {
    v23 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v21 + 4);
  }
  v24 = UnitUtil_1212520_alt1(v23);
  v25 = game_util_Format_alt1("%d", v24);
  v26 = ui_LayoutAccessor_FindTextBox_alt1(v20, "T_MaxNum");
  if (v26 != 0) {
    GameRoutine_156c5d0_alt1(v26, (__int64)v25, 0);
  }
}

#pragma GCC visibility pop
