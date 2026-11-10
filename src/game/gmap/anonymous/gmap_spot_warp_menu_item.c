#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1328300(_QWORD);
__int64 GameRoutine_1328460(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ae0560(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 GameData_21ca080;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char GameData_1a9f09e;
__int64 GmapSpotWarpMenuItem_IsActive(__int64 a1);
__int64 GmapSpotWarpMenuItem_Unknown70(__int64 a1);

__int64 GmapSpotWarpMenuItem_IsActive(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 88);
  if ((unsigned __int8)GameRoutine_13261c0(v1) == 2) {
    goto LABEL_2;
  }
  v3 = *(_QWORD*)(v1 + 120);
  if (v3 != GameRoutine_ae0560()) {
    if (*(_QWORD*)(v1 + 120) == 0 ||
        (unsigned __int8)GameRoutine_13261c0(v1) != 2 &&
            (unsigned __int8)GameRoutine_13261c0(v1) != 0) {
      return 0;
    }
    v4 = *(__int64**)(GameData_21ca080 + 64);
    v5 = *(__int64**)(GameData_21ca080 + 72);
    if (v4 == v5) {
      return 0;
    }
    while (1) {
      v6 = *v4++;
      if (*(_QWORD*)(v1 + 120) == *(_QWORD*)(v6 + 192)) {
        break;
      }
      if (v4 == v5) {
        return 0;
      }
    }
  LABEL_2:
    if (((*(_BYTE*)(v1 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) &&
        (GameRoutine_1328300(v1) & 1) != 0) {
      return GameRoutine_1328460(v1);
    }
    return 0;
  }
  return 1;
}

__int64 GmapSpotWarpMenuItem_Unknown70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
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
  v8 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v8);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
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
  result = GameRoutine_a4dbe0(v5, &GameData_1a9f09e, 0, v9);
  if (result != 0) {
    v7 = result;
    result = ui_LayoutAccessor_FindTextBox(v4, "T_Help");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v7, 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
