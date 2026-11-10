#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) IProcFacilitySceneCombat_DeletingDestructor()
{
  __udf(0x8002u);
};
__int64 ActionWaitAttack_10d49d0(_QWORD);
__int64 GameRoutine_1495240(void);
extern __int64 GameData_21ec7b0;
extern __int64 game_ProcGameSkipView_instance_;
__int64 IProcFacilitySceneCombat_14951c0();
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_2043b48[])();
extern __int64 GameData_21f4000;
__n128
game_facility_IProcFacilitySceneCombat_CopyCombatCameraProperty(__n128 result);

__int64 IProcFacilitySceneCombat_14951c0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;

  result = GameRoutine_1495240();
  if (GameData_21ec7b0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v1 != 0 && (*(_BYTE*)(v1 + 113) & 8) != 0 &&
        game_ProcGameSkipView_instance_ != 0 &&
        (*(_BYTE*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0) {
      result = ActionWaitAttack_10d49d0(result);
      if ((result & 1) != 0) {
        v2 = game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
          *(_DWORD*)(v2 + 156) &= ~2u;
        }
      }
    }
  }
  return result;
}

__n128

game_facility_IProcFacilitySceneCombat_CopyCombatCameraProperty(__n128 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  if (GameData_21ec7b0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v1 != 0) {
      v2 = *(_QWORD*)(GameData_21f4000 + 256);
      v3 = *(_QWORD*)(GameData_21f4000 + 264);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                                memory_order_relaxed);
      v4 = std___1___shared_weak_count_lock(v3);
      result = std___1___shared_weak_count___release_weak();
      if (v4 != 0) {
        if (v2 == 0) {
          goto LABEL_15;
        }
        v7_.v7[0] = GameData_2043b48;
        v7_.v8 = v7_.v7;
        v9_.v10 = v9_.v9;
        v9_.v9[0] = GameData_2043b48;
        GameRoutine_14514d0(v9_.v9, (_QWORD*)(v2 + 272));
        if (v9_.v10 == v9_.v9) {
          v5 = 32;
        }
        else {
          if (v9_.v10 == nullptr) {
            goto LABEL_10;
          }
          v5 = 40;
        }
        (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
      LABEL_10:
        if (v7_.v8 == v7_.v7) {
          v6 = 32;
        }
        else {
          if (v7_.v8 == nullptr) {
            goto LABEL_15;
          }
          v6 = 40;
        }
        (*(void (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
      LABEL_15:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
              v4, *(long double*)&result);
          return std___1___shared_weak_count___release_weak();
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
