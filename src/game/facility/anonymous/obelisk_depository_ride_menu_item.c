#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_16eb610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18607b0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212cd68[26];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 ObeliskDepositoryRideMenuItem_Unknown55(_QWORD* a1);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_16eb610(_QWORD*, unsigned int, _BYTE*, __int64, __int64,
                       unsigned int, int);
__int64 GameRoutine_18607b0_alt1(_QWORD*) __asm__("GameRoutine_18607b0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");

__int64 ObeliskDepositoryRideMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  unsigned __int8* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64* v15;

  GameRoutine_18607b0_alt1(a1);
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v15 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt1(v4);
  v6 = v15;
  if (v15 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  GameHr_1562680((__int64)v6, "CostOn", 0x1.0000000000000p+0f);
  v7 = (unsigned __int8*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v8 = GameData_212c8a0;
  v9 = GameData_212cd68[0];
  v10 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                             64) +
                                                  8LL * *v7) +
                                       110LL));
  if (v10 != 0) {
    v11 = *(unsigned __int16*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v12 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  else {
    v12 = 0;
  }
  v13 = *(
      _QWORD*)(*(_QWORD*)(*v9 + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                  8LL * *(unsigned __int8*)(*(
                                                            __int64 (**)(
                                                                _QWORD*))(
                                                            *a1 + 560LL))(a1)) +
                                       110LL));
  if (v13 != 0) {
    LODWORD(v13) = *(unsigned __int16*)(v13 + 32);
  }
  return GameHr_16eb610(a1, 3u, "L_Cost", (__int64)"Icon", (__int64)"T_Num",
                        v11, v12 < (int)v13);
}

#pragma GCC visibility pop
