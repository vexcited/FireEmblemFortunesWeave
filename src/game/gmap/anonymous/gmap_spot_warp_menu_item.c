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
__int64 GmapSpotWarpMenuItem_Unknown70_alt1(__int64 a1) __asm__(
    "GmapSpotWarpMenuItem_Unknown70");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GmapSpotWarpMenuItem_Unknown70(__int64 a1);

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

void GmapSpotWarpMenuItem_Unknown70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

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
  v8 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak_alt1(v8);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                               &GameData_1a9f09e, 0);
  if (v5 != nullptr) {
    v6 = (__int64)v5;
    v7 = ui_LayoutAccessor_FindTextBox_alt1(v4, (__int64)"T_Help");
    if (v7 != 0) {
      GameRoutine_156c5d0_alt1(v7, v6, 0);
    }
  }
}

#pragma GCC visibility pop
