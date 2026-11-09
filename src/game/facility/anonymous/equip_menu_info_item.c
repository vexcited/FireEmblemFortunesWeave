#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_157b5c0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_g_empty_item;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* game_g_empty_item_ptr;
__int64 EquipMenuInfo_Item_Unknown58(__int64 a1);
__int64 EquipMenuInfo_Item_Unknown55(__int64 a1);

__int64 EquipMenuInfo_Item_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  if ((_DWORD)v1 == -1) {
    v3 = &game_g_empty_item;
  }
  else {
    v3 = (__int64*)(v2 + 8 * v1 + 828);
  }
  return GameRoutine_157b5c0(v2, v3);
}

__int64 EquipMenuInfo_Item_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64 v15;
  __int64* v16;

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
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v15);
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
  v5 = *(int*)(a1 + 40);
  v6 = *(_QWORD*)(a1 + 88);
  if ((_DWORD)v5 == -1) {
    v7 = game_g_empty_item_ptr;
  }
  else {
    v7 = (__int64*)(v6 + 8 * v5 + 828);
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  GameRoutine_15792c0(v4, v7, 0, 1, v6, "L_Icon", "T_Txt", v8 & 1);
  v9 = *(_QWORD*)(a1 + 56);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
    v13 = v16;
    if (v16 != nullptr) {
      return GameRoutine_1562cf0(v13, "Info");
    }
    goto LABEL_13;
  }
  if (v13 == nullptr) {
  LABEL_13:
    v13 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562cf0(v13, "Info");
}

#pragma GCC visibility pop
