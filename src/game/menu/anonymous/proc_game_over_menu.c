#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_15636c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 game_g_game_setting_ptr;
__int64 ProcGameOverMenu_Unknown2(__int64 a1, long double a2);
__int64 ProcGameOverMenu_Unknown57(__int64 result, long double a2);
__int64 ProcGameOverMenu_Unknown84(__int64 a1, long double a2);
bool ProcGameOverMenu_Unknown124(__int64 a1, long double a2);
__int64 ProcGameOverMenu_Unknown132(__int64 result);

__int64 ProcGameOverMenu_Unknown2(__int64 a1, long double a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  if (*(_BYTE*)(a1 + 1128) == 1) {
    v3 = (_QWORD*)(a1 + 952);
    if ((GameRoutine_1563280(a1 + 952, "In", 0, a2) & 1) == 0) {
      v4 = *(_QWORD*)(a1 + 960);
      if (v4 != 0) {
        v5 = std___1___shared_weak_count_lock(v4);
        if (v5 != 0) {
          v6 = v5;
          if (*v3 != 0) {
            ControlCreator_13633c0();
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak();
          }
        }
      }
      *(_BYTE*)(a1 + 1128) = 0;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, "A_Help", 1);
      v7 = *(_DWORD*)(a1 + 356);
      *(_BYTE*)(a1 + 648) = 1;
      *(_DWORD*)(a1 + 356) = v7 & 0xFFFFFFF9;
    }
  }
  return GameRoutine_16df7a0(a1);
}

__int64 ProcGameOverMenu_Unknown57(__int64 result, long double a2)
{
  if ((*(_BYTE*)(result + 1116) & 1) == 0) {
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(result + 848, "In", a2);
  }
  return result;
}

__int64 ProcGameOverMenu_Unknown84(__int64 a1, long double a2)
{
  LODWORD(a2) = 1.0;
  GameRoutine_1562680(a1 + 952, "In", a2);
  GameRoutine_15638b0(a1 + 952, "In", 0);
  return GameRoutine_15636c0(a1 + 952, "In", 0);
}

bool ProcGameOverMenu_Unknown124(__int64 a1, long double a2)
{
  return (GameRoutine_1563280(a1 + 848, "In", 0, a2) & 1) == 0;
}

__int64 ProcGameOverMenu_Unknown132(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;
  __int16 v7;
  unsigned __int8* v8;
  unsigned int v9;
  int v10;
  _BYTE v12[200];

  v1 = result;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 1) != 0) {
    GameRoutine_15638b0(result + 848, "In", 0);
    GameRoutine_15636c0(v1 + 848, "In", 0);
    result = snd_fnd_WeakHandle_isValid(v1 + 1096);
    if ((result & 1) != 0) {
      snd_Fade_Fade_10c910(v12, 0);
      snd_stop_ffc40(v1 + 1096, v12);
      snd_Fade_Destroy_Fade(v12);
      result = snd_fnd_WeakHandle_reset(v1 + 1096);
    }
    v8 = *(unsigned __int8**)(v1 + 16);
    if (v8 != nullptr) {
      v9 = *v8;
      v4 = v9 > 0x10;
      v10 = (1 << v9) & 0x1CE00;
      if (!v4 && v10 != 0) {
        v7 = *(_WORD*)(v1 + 136) | 0x80;
      LABEL_19:
        *(_WORD*)(v1 + 136) = v7;
      }
    }
  }
  else {
    if (*(_DWORD*)(result + 616) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 992LL))(result);
      if ((result & 1) == 0) {
        return result;
      }
      v2 = *(unsigned __int8**)(v1 + 16);
      if (v2 != nullptr) {
        v3 = *v2;
        v4 = v3 > 0x10;
        v5 = (1 << v3) & 0x1CE00;
        if (!v4 && v5 != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      v7 = *(_WORD*)(v1 + 136) | 8;
      goto LABEL_19;
    }
    *(_DWORD*)(result + 616) = 1;
  }
  return result;
}

#pragma GCC visibility pop
