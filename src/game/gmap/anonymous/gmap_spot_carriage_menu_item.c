#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157d280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1679510(void);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 GmapSpotCarriageMenuItem_DrawText(__int64 a1);
__int64 GmapSpotCarriageMenuItem_Unknown70(__int64 result);

__int64 GmapSpotCarriageMenuItem_DrawText(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  result = GameRoutine_1679510();
  if (*(_DWORD*)(a1 + 296) != 4) {
    return result;
  }
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_6;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_6;
  }
  v5 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != nullptr) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v8 = v4;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v8);
  if (v5 == nullptr) {
  LABEL_6:
    v5 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_7:
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v9[0] = GameData_212e348 + 2;
  v9[1] = 0xFFFF0001FFFF0000LL;
  v9[2] = 0xFFFF0004FFFF0002LL;
  v9[3] = 0xFFFF0006FFFF0005LL;
  v24 = 8;
  v10 = -65529;
  v11 = -65528;
  result = GameRoutine_a4dbe0(v6, "MID_Sys_Unknown", 0, v9);
  if (result != 0) {
    v7 = result;
    result = ui_LayoutAccessor_FindTextBox(v5, "T_Txt");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v7, 0);
    }
  }
  return result;
}

__int64 GmapSpotCarriageMenuItem_Unknown70(__int64 result)
{
  __int64 v1;
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
  unsigned int v13;
  int v14;
  int v15;
  __int64* v16;
  __int64* v17;

  if (*(_DWORD*)(result + 296) > 1u) {
    return result;
  }
  v1 = result;
  v2 = *(_QWORD*)(result + 56);
  if (v2 == 0) {
    goto LABEL_6;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_6;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(v1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v16 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v16;
  if (v16 == nullptr) {
  LABEL_6:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_7:
  GameRoutine_1562cf0(v6, "Info_Cost");
  v7 = *(_QWORD*)(v1 + 56);
  if (v7 == 0) {
    goto LABEL_11;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_11;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = *(__int64**)(v1 + 48);
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    v11 = v17;
    if (v17 != nullptr) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if (v11 == nullptr) {
  LABEL_11:
    v11 = &ui_LayoutAccessor_empty_;
  }

LABEL_12:
  v12 = GameRoutine_155fbe0(v11, "L_CostGold");
  v13 =
      GameRoutine_9db9e0(23, *(unsigned __int16*)(*(_QWORD*)(v1 + 288) + 64LL));
  if (game_GameModeData_instance_ != 0) {
    v14 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  else {
    v14 = 0;
  }
  v15 =
      GameRoutine_9db9e0(23, *(unsigned __int16*)(*(_QWORD*)(v1 + 288) + 64LL));
  return GameRoutine_157d280(v12, 0, v13, v14 < v15, 0,
                             *(_DWORD*)(v1 + 296) == 0);
}

#pragma GCC visibility pop
