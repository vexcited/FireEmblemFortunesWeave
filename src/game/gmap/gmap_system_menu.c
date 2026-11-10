#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_158a7c0(unsigned __int8);
__int64 GameRoutine_1840e20(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_1592690(__int64, _BYTE*, _BYTE*, char*);
__n128 std___1___shared_weak_count___release_weak();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 game_GameModeData_instance_;
__n128 GmapSystemMenu_Unknown85(__int64 a1);

__n128 GmapSystemMenu_Unknown85(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 result;
  __int64 v6;
  __int64* v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;
  __int64 v14;
  struct {
    __int64* v21;
    __int64 v22;
  } v21_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v21_.v21), (__int64*)(a1 + 848),
                         (__int64)"L_Chapter"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v21_.v22 != 0) {
    v6 = std___1___shared_weak_count_lock(v21_.v22),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v7 = v21_.v21;
    if (v21_.v22 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v6 == 0 || v7 == nullptr) {
      if (v6 == 0) {
        return result;
      }
      goto LABEL_20;
    }
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v9 != 0) {
        LOBYTE(v21_.v21) = *(_BYTE*)(*(_QWORD*)(v9 + 24) + 33LL);
        GameRoutine_1592690((__int64)v7, &v21_.v21, (_BYTE*)(v9 + 88),
                            (char*)(v9 + 89)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    v10 = ui_LayoutAccessor_FindPane(v7, (__int64)"BgStory"),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
      LABEL_16:
        v13 = *(_BYTE*)(v12 + 15);
      LABEL_19:
        v14 = GameRoutine_158a7c0(v13),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_1840e20(v11, v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        ui_LayoutAccessor_SetPaneVisible((__int64)v7, (__int64)"N_Spot", 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(
              v6, *(long double*)&result),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          return std___1___shared_weak_count___release_weak();
        }
        return result;
      }
    }
    else {
      v11 = 0;
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_16;
      }
    }
    v13 = 0;
    goto LABEL_19;
  }
  return result;
}

#pragma GCC visibility pop
