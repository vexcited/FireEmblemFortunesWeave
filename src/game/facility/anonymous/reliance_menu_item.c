#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_ffc660(_QWORD, _QWORD);
__int64 RelianceUnitSelectMenu_184f060(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 RelianceMenuItem_Unknown25(__int64 a1);
__int64 RelianceMenuItem_Unknown55_15f4e70(__int64 a1);
__int64 RelianceMenuItem_Unknown73(__int64 a1);

__int64 RelianceMenuItem_Unknown25(__int64 a1)
{
  RelianceUnitSelectMenu_184f060(*(_QWORD*)(a1 + 8), 0);
  return 9;
}

__int64 RelianceMenuItem_Unknown55_15f4e70(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5;

  GameRoutine_16ed000();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v5 = GameRoutine_ffc660(6, 0);
        result = ui_LayoutAccessor_SetPaneVisible(v3, "IconNew", v5 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 RelianceMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[168];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v2 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1112LL))(v2);
  }
  else {
    v3 = v1 + 848;
  }
  GameRoutine_16ee370(v5, v3, "MID_HotelMenu_Reliance_Help");
  return GameRoutine_16ee520(v5);
}

#pragma GCC visibility pop
