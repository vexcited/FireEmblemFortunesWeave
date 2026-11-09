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

__int64 SkillMenuItem_15bee60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  char v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

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
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v19 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v19);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = *(unsigned __int8*)(a1 + 88);
  v6 = MapUnitCommandSkillMenu_15bdea0();
  GameRoutine_157e3a0(v4, (unsigned int*)(a1 + 84), v5, v6);
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock(v7);
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
  v20 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v20);
  if (v9 == nullptr) {
  LABEL_10:
    v9 = &ui_LayoutAccessor_empty_;
  }

LABEL_11:
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v11 = MapUnitCommandSkillMenu_15bdea0();
  v12 = GameRoutine_159d390(v11, (_DWORD*)(a1 + 84), *(_BYTE*)(a1 + 88));
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
  result = ui_LayoutAccessor_FindTextBox(v9, "T_Cost");
  if (result != 0) {
    result = Pane_58f8a0(result, v17, v18);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v15;
    }
  }
  return result;
}

#pragma GCC visibility pop
