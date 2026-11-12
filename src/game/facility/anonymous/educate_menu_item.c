#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16dac80(_QWORD);
__int64 EducateMenuItem_ACall(_QWORD* a1);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 game_facility_anonymous_EducateMenuItem_UpdateHelp_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern __int64 (*GameData_2111db8[])();
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520(__int64);
void GameRoutine_16ef210(_QWORD*, _QWORD*);
void game_facility_anonymous_EducateMenuItem_UpdateHelp(__int64 a1);
__attribute__((swiftcall)) void FacilityUnitList_145eea0(PSEUDO_X8, __int64,
                                                         __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* game_kNoUnitListFlags_ptr;
extern _UNKNOWN GameData_1aed6ab;
extern __int64 game_UnitListSet_instance_;
bool EducateMenuItem_Unknown83(__int64 a1);

bool EducateMenuItem_Unknown83(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int16* v9;
  __int16 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  FacilityUnitList_145eea0((void*)(&v13_.v13),
                           *(_QWORD*)(game_UnitListSet_instance_ + 40),
                           (__int64)&GameData_1aed6ab);
  if (v13_.v13 != nullptr && (v13_.v13[6] & 0x21) == 0) {
    v2 = *v13_.v13;
    v3 = v13_.v14;
    if (v13_.v14 == 0) {
      goto LABEL_8;
    }
  }
  else {
    v2 = 0;
    v3 = v13_.v14;
    if (v13_.v14 == 0) {
      goto LABEL_8;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
LABEL_8:
  v4 = *(_QWORD*)(a1 + 88);
  if (v2 == v4) {
    return true;
  }
  if (v4 == 0 || (v5 = *(_QWORD*)(game_UnitListSet_instance_ +
                                  8LL * *(unsigned __int8*)(a1 + 96)),
                  v6 = *(_QWORD**)v5, v7 = *(_QWORD**)(v5 + 8), v6 == v7)) {
  LABEL_13:
    v8 = nullptr;
  }
  else {
    while (1) {
      v8 = (_QWORD*)*v6;
      if (*(_QWORD*)*v6 == v4) {
        break;
      }
      v6 += 2;
      if (v6 == v7) {
        goto LABEL_13;
      }
    }
    v12 = v6[1];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
  }
  v9 = (__int16*)(v8 + 6);
  if (v8 == nullptr) {
    v9 = (__int16*)game_kNoUnitListFlags_ptr;
  }
  v10 = *v9;
  return (v10 & 0x3B) != 0 && (v10 & 8) == 0;
}

__int64 EducateMenuItem_ACall(_QWORD* a1)
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
  GameRoutine_16dac80(v3);
  return 9;
}

void game_facility_anonymous_EducateMenuItem_UpdateHelp(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  struct {
    _QWORD v8[2];
    char v9;
    char gap17_[3];
    int v10;
    int v11;
    char v12;
    char gap29_[3];
    _QWORD* v13;
  } v8_;
  _QWORD v14[21];

  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 8) + 848LL,
                                   (__int64)"N_HelpDetail", 0);
  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v2 + 848;
  }
  GameHr_16ee370((__int64)v14, v4, "MID_TempleMenu_Educate_Help");
  v5 = *(_DWORD*)(a1 + 84);
  v8_.v8[0] = GameData_2111db8;
  v8_.v13 = v8_.v8;
  game_facility_15e7650(v14, v5, (__int64)v8_.v8);
  if (v8_.v13 == v8_.v8) {
    v6 = 32;
    goto LABEL_9;
  }
  if (v8_.v13 != nullptr) {
    v6 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v8_.v13 + v6))((__int64)v8_.v13);
  }
  v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v8_.v12 = 0;
  v8_.v13 = nullptr;
  v8_.v8[0] = "Tutorial";
  v8_.v8[1] = "MID_KeyHelp_Tutorial";
  v8_.v9 = 1;
  v8_.v10 = 10;
  v8_.v11 = v7;
  GameRoutine_16ef210(v14, v8_.v8);
  GameRoutine_16ee520((__int64)v14);
}

__int64 game_facility_anonymous_EducateMenuItem_UpdateHelp_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if ((*(_BYTE*)(a3 + 1) & 0x10) != 0) {
    return GameRoutine_16ef100(a2, "MID_Menu_Cause_NotHero_Educate");
  }
  return result;
}

#pragma GCC visibility pop
