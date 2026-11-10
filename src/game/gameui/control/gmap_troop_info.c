#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001710[])();
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_gameui_control_GmapTroopInfo_SetInfoEnemy(__int64 a1, __int64 a2,
                                                       char a3);
__int64 GmapTroopInfo_1010590(_QWORD* a1);

_QWORD* game_gameui_control_GmapTroopInfo_SetInfoEnemy(__int64 a1, __int64 a2,
                                                       char a3)
{
  float v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;
  char v21;
  int v22;

  v21 = a3;
  LayoutAccessor_1562680(a1 + 88, "Enemy", 1.0);
  v5 = 0.0;
  v6 = LayoutAccessor_1563280(a1 + 88, "In", 1);
  if ((v6 & 1) != 0) {
    v5 = LayoutAccessor_15637c0(a1 + 88, "In", 1);
    LayoutAccessor_1563030(a1 + 88, "In", 1);
  }
  v7 = ui_LayoutAccessor_FindPane(a1 + 88, "N_Type");
  v10 = v7;
  if (v7 != 0) {
    v11 = *(_BYTE*)(v7 + 89);
    v12 = *(_BYTE*)(v7 + 88) & 1;
    *(_BYTE*)(v7 + 88) |= 1u;
    *(_BYTE*)(v7 + 89) = -1;
  }
  else {
    v11 = 0;
    v12 = 0;
  }
  result = v18;
  v18[0] = GameData_2001710;
  v18[1] = a1;
  v19 = v18;
  v18[2] = &v21;
  if (*(int*)(a2 + 96) < 1) {
    goto LABEL_13;
  }
  v14 = 0;
  v15 = a2;
  do {
    v22 = v14;
    v20 = v15;
    if (v19 == nullptr) {
      GameRoutine_60a310(0, v8);
    }
    (*(void (**)(_QWORD*, int*, __int64*))(*v19 + 48LL))(v19, &v22, &v20);
    ++v14;
    v15 += 16;
  } while (v14 < *(int*)(a2 + 96));
  result = v19;
  if (v19 == v18) {
  LABEL_13:
    v16 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_15;
    }
    v16 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v16))(
      result, v8, v9);
LABEL_15:
  if ((v6 & 1) != 0) {
    LayoutAccessor_1562680(a1 + 88, "In", 1.0);
    result = (_QWORD*)LayoutAccessor_15636c0(a1 + 88, "In", 1, v5);
  }
  if (v10 != 0) {
    v17 = *(_BYTE*)(v10 + 88);
    *(_BYTE*)(v10 + 89) = v11;
    *(_BYTE*)(v10 + 88) = v17 & 0xFE | v12;
  }
  return result;
}

__int64 GmapTroopInfo_1010590(_QWORD* a1)
{
  int v1;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = ui_LayoutAccessor_FindPane(a1 + 11, "N_Type");
  if (v3 == 0 || a1[13] == 0 || a1[12] == 0) {
    return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
  }
  v4 = *(_BYTE*)(v3 + 89);
  v5 = std___1___shared_weak_count_lock(a1[12]);
  if (v5 == 0) {
    goto LABEL_12;
  }
  v6 = a1[11];
  if (v6 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != a1[13];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_12:
      v9 = a1[12];
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
      }
      goto LABEL_17;
    }
  }
  else {
    v10 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v10);
    if (v8) {
      goto LABEL_12;
    }
  }
  if ((v1 & 1) == 0) {
    return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
  }
LABEL_17:
  v11 = a1[13];
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 != 0) {
      *(_BYTE*)(v12 + 89) = v4;
    }
  }
  return LayoutAccessor_1562680(a1 + 11, "Out", 1.0f);
}

#pragma GCC visibility pop
