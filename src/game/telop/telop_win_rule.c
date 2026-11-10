#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 game_telop_TelopWinRule_OnBuild_lambda1_Invoke(__int64 result,
                                                       __int64* a2);

__int64 game_telop_TelopWinRule_OnBuild_lambda1_Invoke(__int64 result,
                                                       __int64* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(result + 8);
  v5 = result;
  v6 = game_util_Format("LoseFaceFrm%d", **(_DWORD**)(result + 16));
  result = LayoutAccessor_155fbe0(v4 + 168, v6);
  if (*(_QWORD*)(result + 16) == 0) {
    return result;
  }
  v7 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_12;
  }
  v8 = *v7;
  if (*v7 != 0) {
    v2 = *(unsigned __int8*)(v8 + 24);
    v9 = v8 + 152;
    if (v2 == 0) {
      v9 = 0;
    }
    v10 = v9 != v7[2];
  }
  else {
    v10 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10) {
    LABEL_12:
      v11 = v7[1];
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        return result;
      }
      goto LABEL_17;
    }
  }
  else {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v12);
    if (v10) {
      goto LABEL_12;
    }
  }
  if ((v2 & 1) == 0) {
    return result;
  }
LABEL_17:
  v13 = ui_LayoutAccessor_FindPane(v7, "Face");
  if (v13 != 0) {
    v13 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1840740(v13, 0, v3, 6, 1);
  ui_LayoutAccessor_SetPaneVisible(v7, "IconStrong", 0);
  result = LayoutAccessor_15730d0(v7, v3);
  ++**(_DWORD**)(v5 + 16);
  return result;
}

#pragma GCC visibility pop
