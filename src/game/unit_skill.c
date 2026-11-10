#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6fc510(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_SkillList_CountActive(_QWORD, _QWORD);
extern __int64 (*GameData_1fa0500[])();
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_UnitSkill_GetEquipSortKey(_DWORD* a1, __int64 a2);

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
  __int64 v12;
  _WORD* v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  _QWORD v26[4];
  _QWORD* v27;
  char v28;

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
  if ((*a1 & 0xFFF) != 0 && (GameRoutine_6fc510(v4) & 1) == 0) {
    if (*(_BYTE*)(v4 + 273) == 0 ||
        ((v16 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * (*a1 & 0xFFFLL)),
          v17 = *(unsigned __int8*)(v16 + 104),
          v18 = *(unsigned __int8*)(v16 + 273), (unsigned int)(v17 - 5) >= 2)
             ? (v19 = 0)
             : (v19 = (*a1 >> 19) & 0x1F),
         v19 - ((*a1 >> 12) & 0x7F) + v18 >= 1)) {
      v20 = *(_QWORD*)(v4 + 24);
      if (*(_BYTE*)(v20 + 1122) != 1) {
        goto LABEL_40;
      }
      v21 = *(_QWORD*)(v20 + 896);
      v22 = *(_QWORD*)(v20 + 904);
      if (v22 != v21) {
        while ((unsigned int)game_Unit_SkillList_CountActive(v21, a2 + 1744) !=
               (unsigned int)((*(_QWORD*)(v21 + 40) - *(_QWORD*)(v21 + 32)) >>
                              2)) {
          v21 += 96;
          if (v21 == v22) {
            goto LABEL_13;
          }
        }
      }
      v24 = *(_QWORD*)(v20 + 920);
      v25 = *(_QWORD*)(v20 + 928);
      if (v25 == v24) {
      LABEL_40:
        v10 |= 0x2000000u;
        return v10 | *(unsigned __int16*)(v4 + 16) |
               (*(unsigned __int8*)(v4 + 111) << 16);
      }
      while (
          (unsigned int)game_Unit_SkillList_CountActive(v24, a2 + 1744) !=
          (unsigned int)((*(_QWORD*)(v24 + 40) - *(_QWORD*)(v24 + 32)) >> 2)) {
        v24 += 96;
        if (v24 == v25) {
          goto LABEL_40;
        }
      }
    }
  }
LABEL_13:
  v28 = 0;
  v26[0] = GameData_1fa0500;
  v26[1] = a1;
  v26[2] = a2;
  v26[3] = &v28;
  v27 = v26;
  game_UnitItemList_EachItem(a2 + 828, v26);
  v13 = (_WORD*)(a2 + 876);
  for (i = 24; i != 0; --i) {
    if (*v13 != 0) {
      if (v27 == nullptr) {
        GameRoutine_60a310(0, v12);
      }
      (*(void (**)(_QWORD*, _WORD*))(*v27 + 48LL))(v27, v13);
    }
    v13 += 4;
  }
  if (v27 == v26) {
    v15 = 32;
  }
  else {
    if (v27 == nullptr) {
      goto LABEL_33;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v27 + v15))((__int64)v27);
LABEL_33:
  if ((v28 & 1) == 0) {
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
