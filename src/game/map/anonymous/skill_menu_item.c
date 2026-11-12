#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157e3a0(__int64*, unsigned int*, unsigned int, __int64);
__int64 GameRoutine_159d390(__int64, _DWORD*, char);
__int64 MapUnitCommandSkillMenu_15bdea0();
__int64 Pane_58f8a0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_22593b0;
extern __int64 ui_LayoutAccessor_empty_;
__int64 SkillMenuItem_15bee60(__int64 a1);
__int64 game_map_ITarget_EachSelectable(__int64, __int64);
extern __int64 (*GameData_1f97c90[])();
__int64 game_map_anonymous_SkillMenuItem_CheckEnable_closure_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64* MapUnitCommandSkillMenu_15bdea0_alt1() __asm__(
    "MapUnitCommandSkillMenu_15bdea0");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 game_159d390(__int64, _DWORD*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
void Util_157e3a0(__int64*, unsigned int*, unsigned int, __int64);

__int64 SkillMenuItem_15bee60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  char v10;
  __int64* v11;
  char v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 result;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v17 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak_alt1(v17);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = *(unsigned __int8*)(a1 + 88);
  v6 = MapUnitCommandSkillMenu_15bdea0_alt1();
  Util_157e3a0(v4, (unsigned int*)(a1 + 84), v5, (__int64)v6);
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v18 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak_alt1(v18);
  if (v9 == nullptr) {
  LABEL_10:
    v9 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v11 = MapUnitCommandSkillMenu_15bdea0_alt1();
  v12 = game_159d390((__int64)v11, (_DWORD*)(a1 + 84), *(_BYTE*)(a1 + 88));
  v13 = 64;
  if ((v10 & 1) != 0) {
    v13 = 60;
  }
  v14 = 72;
  if ((v10 & 1) != 0) {
    v14 = 36;
  }
  if ((v12 & 1) == 0) {
    v13 = v14;
  }
  v15 = *(_DWORD*)((char*)&GameData_22593b0 + v13);
  result = ui_LayoutAccessor_FindTextBox_alt1(v9, (__int64)"T_Cost");
  if (result != 0) {
    result = Pane_58f8a0_alt1(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v15;
    }
  }
  return result;
}

__int64 game_map_anonymous_SkillMenuItem_CheckEnable_closure_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  unsigned __int8 v6;

  v6 = 0;
  v4_.v4[0] = GameData_1f97c90;
  v4_.v4[1] = &v6;
  v4_.v5 = v4_.v4;
  game_map_ITarget_EachSelectable(a2, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return v6;
}

#pragma GCC visibility pop
