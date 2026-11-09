#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14d0010(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TalkEventMenuItem_Unknown55(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 TalkOtherClanMenuItem_Unknown25(__int64 a1);
__int64 TalkOtherClanMenuItem_Unknown55(_QWORD* a1);

__int64 TalkOtherClanMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  GameRoutine_155e830(*(_QWORD*)(a1 + 8) + 848LL, 0);
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_14d0010(v3, *(_QWORD*)(a1 + 88), a1);
  return 10;
}

__int64 TalkOtherClanMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;

  result = TalkEventMenuItem_Unknown55();
  if (a1[11] == 0) {
    return result;
  }
  v3 = a1[7];
  if (v3 == 0) {
    goto LABEL_6;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_6;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = (__int64*)a1[6];
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v14 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v14;
  if (v14 == nullptr) {
  LABEL_6:
    v7 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_7:
  ui_LayoutAccessor_SetPaneVisible(v7, "Face", 1);
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_11;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_11;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v12 = v15;
    if (v15 != nullptr) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if (v12 == nullptr) {
  LABEL_11:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_12:
  v13 = ui_LayoutAccessor_FindPane(v12, "Face");
  if (v13 != 0) {
    v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameRoutine_1840a20(v13, 0, a1[11], 6, 1);
}

#pragma GCC visibility pop
