#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6fc510(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_SkillList_CountActive(_QWORD, _QWORD);
extern __int64 (*GameData_1fa0500[])();
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_UnitSkill_GetEquipSortKey(_DWORD* a1, __int64 a2);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__int64 GameRoutine_6fc510_alt1(__int64) __asm__("GameRoutine_6fc510");
__int64 game_Unit_SkillList_CountActive_alt1(__int64, _QWORD*) __asm__(
    "game_Unit_SkillList_CountActive");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 game_UnitSkill_GetEquipSortKey(_DWORD* a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64* v6;
  char v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _WORD* v12;
  __int64 i;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  char v27;

  if (a2 == 0) {
    return 0;
  }
  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a1 & 0xFFF));
  if (v4 == 0) {
    return 0;
  }
  v6 = *(__int64**)(*(_QWORD*)(a2 + 392) + 24LL);
  v7 = *(_WORD*)(v4 + 16);
  v8 = ((unsigned __int64)*(unsigned __int16*)(v4 + 16) >> 5) & 0x7F;
  v9 = v6[24];
  if (v8 + 1 <= (v6[25] - v9) >> 2) {
    if ((*(_DWORD*)(v9 +
                    4 * (((unsigned __int64)*(unsigned __int16*)(v4 + 16) >>
                          5) &
                         0x7F)) &
         (1 << v7)) != 0) {
      v10 = 0x8000000;
    }
    else {
      v10 = 0;
    }
  }
  else {
    v10 = 0;
  }
  v11 = *v6;
  if (v8 + 1 <=
          (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 392) + 24LL) + 8LL) - v11) >>
          2 &&
      (*(_DWORD*)(v11 +
                  4 * (((unsigned __int64)*(unsigned __int16*)(v4 + 16) >> 5) &
                       0x7F)) &
       (1 << v7)) != 0) {
    v10 |= 0x4000000u;
  }
  if ((*a1 & 0xFFF) != 0 && (GameRoutine_6fc510_alt1(v4) & 1) == 0) {
    if (*(_BYTE*)(v4 + 273) == 0 ||
        ((v15 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * (*a1 & 0xFFFLL)),
          v16 = *(unsigned __int8*)(v15 + 104),
          v17 = *(unsigned __int8*)(v15 + 273), (unsigned int)(v16 - 5) >= 2)
             ? (v18 = 0)
             : (v18 = (*a1 >> 19) & 0x1F),
         v18 - ((*a1 >> 12) & 0x7F) + v17 >= 1)) {
      v19 = *(_QWORD*)(v4 + 24);
      if (*(_BYTE*)(v19 + 1122) != 1) {
        goto LABEL_40;
      }
      v20 = *(_QWORD*)(v19 + 896);
      v21 = *(_QWORD*)(v19 + 904);
      if (v21 != v20) {
        while ((unsigned int)game_Unit_SkillList_CountActive_alt1(
                   v20, (_QWORD*)(a2 + 1744)) !=
               (unsigned int)((*(_QWORD*)(v20 + 40) - *(_QWORD*)(v20 + 32)) >>
                              2)) {
          v20 += 96;
          if (v20 == v21) {
            goto LABEL_13;
          }
        }
      }
      v23 = *(_QWORD*)(v19 + 920);
      v24 = *(_QWORD*)(v19 + 928);
      if (v24 == v23) {
      LABEL_40:
        v10 |= 0x2000000u;
        return v10 | *(unsigned __int16*)(v4 + 16) |
               (*(unsigned __int8*)(v4 + 111) << 16);
      }
      while (
          (unsigned int)game_Unit_SkillList_CountActive_alt1(
              v23, (_QWORD*)(a2 + 1744)) !=
          (unsigned int)((*(_QWORD*)(v23 + 40) - *(_QWORD*)(v23 + 32)) >> 2)) {
        v23 += 96;
        if (v23 == v24) {
          goto LABEL_40;
        }
      }
    }
  }
LABEL_13:
  v27 = 0;
  v25_.v25[0] = GameData_1fa0500;
  v25_.v25[1] = a1;
  v25_.v25[2] = a2;
  v25_.v25[3] = &v27;
  v25_.v26 = v25_.v25;
  game_UnitItemList_EachItem_alt1((_WORD*)(a2 + 828), (__int64)v25_.v25);
  v12 = (_WORD*)(a2 + 876);
  for (i = 24; i != 0; --i) {
    if (*v12 != 0) {
      if (v25_.v26 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, _WORD*))(*v25_.v26 + 48LL))(v25_.v26, v12);
    }
    v12 += 4;
  }
  if (v25_.v26 == v25_.v25) {
    v14 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_33;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v14))((__int64)v25_.v26);
LABEL_33:
  if ((v27 & 1) == 0) {
    if (v10 != 0) {
      return v10 | *(unsigned __int16*)(v4 + 16) |
             (*(unsigned __int8*)(v4 + 111) << 16);
    }
    return 0;
  }
  v10 |= 0x1000000u;
  return v10 | *(unsigned __int16*)(v4 + 16) |
         (*(unsigned __int8*)(v4 + 111) << 16);
}

#pragma GCC visibility pop
