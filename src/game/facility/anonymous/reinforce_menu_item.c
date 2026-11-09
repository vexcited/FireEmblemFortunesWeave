#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16d9240(_QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* game_kNoUnitListFlags_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
bool ReinforceMenuItem_Unknown83(__int64 a1);
__int64 ReinforceMenuItem_Unknown25(_QWORD* a1);
__int64 ReinforceMenuItem_Unknown73(__int64 a1);

bool ReinforceMenuItem_Unknown83(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int16* v6;
  __int16 v7;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0 || (v2 = *(_QWORD*)(game_UnitListSet_instance_ +
                                  8LL * *(unsigned __int8*)(a1 + 96)),
                  v3 = *(_QWORD**)v2, v4 = *(_QWORD**)(v2 + 8), v3 == v4)) {
  LABEL_5:
    v5 = nullptr;
  }
  else {
    while (1) {
      v5 = (_QWORD*)*v3;
      if (*(_QWORD*)*v3 == v1) {
        break;
      }
      v3 += 2;
      if (v3 == v4) {
        goto LABEL_5;
      }
    }
    v9 = v3[1];
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v6 = (__int16*)(v5 + 6);
  if (v5 == nullptr) {
    v6 = (__int16*)game_kNoUnitListFlags_ptr;
  }
  v7 = *v6;
  return (v7 & 8) == 0 && (v7 & 0x3B) != 0;
}

__int64 ReinforceMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_16d9240(v3);
  return 9;
}

__int64 ReinforceMenuItem_Unknown73(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD v8[2];
  char v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  _BYTE v14[168];

  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 8) + 848LL, "N_HelpDetail",
                                   0);
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v2 + 848;
  }
  GameRoutine_16ee370(v14, v4, "MID_TempleMenu_Reinforce_Help");
  v5 = *(unsigned int*)(a1 + 84);
  v13 = 0;
  GameRoutine_15e7650(v14, v5, v8);
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v12 = 0;
  v13 = 0;
  v8[0] = "Tutorial";
  v8[1] = "MID_KeyHelp_Tutorial";
  v9 = 1;
  v10 = 10;
  v11 = v6;
  GameRoutine_16ef210(v14, v8);
  return GameRoutine_16ee520(v14);
}

#pragma GCC visibility pop
