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

__int64 ObeliskDepositoryRideMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_ullong* v4;
  __int64* v5;
  unsigned __int8* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64* v14;

  GameRoutine_18607b0();
  if (a1[7] == 0) {
    goto LABEL_5;
  }
  v2 = std___1___shared_weak_count_lock();
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = v2;
  v4 = (atomic_ullong*)(v2 + 8);
  v5 = (__int64*)a1[6];
  if (atomic_fetch_add(v4, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v14 = v5;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v3);
  v5 = v14;
  if (v14 == nullptr) {
  LABEL_5:
    v5 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  GameRoutine_1562680(v5, "CostOn", 1.0);
  v6 = (unsigned __int8*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v7 = GameData_212c8a0;
  v8 = GameData_212cd68[0];
  v9 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                             64) +
                                                  8LL * *v6) +
                                       110LL));
  if (v9 != 0) {
    v10 = *(unsigned __int16*)(v9 + 32);
  }
  else {
    v10 = 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v11 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  }
  else {
    v11 = 0;
  }
  v12 = *(
      _QWORD*)(*(_QWORD*)(*v8 + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) +
                                                  8LL * *(unsigned __int8*)(*(
                                                            __int64 (**)(
                                                                _QWORD*))(
                                                            *a1 + 560LL))(a1)) +
                                       110LL));
  if (v12 != 0) {
    LODWORD(v12) = *(unsigned __int16*)(v12 + 32);
  }
  return GameRoutine_16eb610(a1, 3, "L_Cost", "Icon", "T_Num", v10,
                             v11 < (int)v12);
}

#pragma GCC visibility pop
