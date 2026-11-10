#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15748c0(__int64, unsigned __int16*, char);
__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 EquipMenuItem_UnitItem_Unknown58(_QWORD* a1);
bool EquipMenuItem_UnitItem_Unknown60(__int64 a1);
__int64* EquipMenuItem_UnitItem_Unknown70(__int64 a1);
__int64 GameRoutine_15de630(_QWORD);
__int64 GameRoutine_996d60(_QWORD, _QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 UnitItem_6e91b0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 (*GameData_20587d8[])();
extern __int64 (*game_menu_SubMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubEquipMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubOpenMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_SubUseMenuItem_vtable[])();
extern __int64 GameData_2058740;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_game_setting;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 EquipMenuItem_UnitItem_15cc1a0(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4, int a5);
__int64 EquipMenuItem_UnitItem_15cc380(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4, int a5);
__int64 EquipMenuItem_UnitItem_15cc5d0(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4, int a5);
__int64 game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure_Invoke_15cc8e0(
    __int64 a1, _QWORD* a2);
bool game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure_Invoke_15ccc00(
    __int64 a1, __int64* a2);
__int64
game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure0_Invoke(__int64 a1);

__int64 EquipMenuItem_UnitItem_Unknown58(_QWORD* a1)
{
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int16* v5;
  unsigned __int16* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;

  if (*(_WORD*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1) == 0) {
    return 0;
  }
  v2 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v3 = GameData_212c878[0];
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *v2) +
                            72LL) -
          5 <=
      1) {
    v4 = a1[11];
    v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    return (GameRoutine_15748c0(v4, v5, 1) & 0x100000000LL) != 0;
  }
  v7 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  if (((*((_BYTE*)v7 + 3) & 0x10) != 0 ||
       (*(_BYTE*)((v8 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v7)) + 336) &
        4) != 0 ||
       ((1LL << *(_BYTE*)(v8 + 72)) & 0xE01F) == 0) &&
      (unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                       8LL *
                                           *(unsigned __int16*)(*(__int64 (**)(
                                               _QWORD*))(*a1 + 560LL))(a1)) +
                            72LL) -
              5 >=
          2) {
    v9 = a1[11];
    v10 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    if ((GameRoutine_6e8bc0(v10, v9) & 1) == 0) {
      return 0;
    }
  }
  v11 = a1[11];
  v12 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  return GameRoutine_157b5c0(v11, v12);
}

bool EquipMenuItem_UnitItem_Unknown60(__int64 a1)
{
  return *(_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) == 0;
}

__int64* EquipMenuItem_UnitItem_Unknown70(__int64 a1)
{
  __int64 v1;

  v1 = *(int*)(a1 + 40);
  if ((_DWORD)v1 == -1) {
    return &game_g_empty_item;
  }
  else {
    return (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
}

__int64 EquipMenuItem_UnitItem_15cc1a0(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4, int a5)
{
  __int64 v9;
  __int64 v10;
  unsigned __int16* v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 result;

  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_menu_SubMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v9 = *(_QWORD*)(a2 + 32);
  if (v9 != 0) {
    if (v9 == a2) {
      *(_QWORD*)(a1 + 128) = a1 + 96;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32), a1 + 96);
    }
    else {
      *(_QWORD*)(a1 + 128) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    *(_QWORD*)(a1 + 128) = 0;
  }
  *(_QWORD*)(a1 + 144) = a3;
  *(_QWORD*)(a1 + 152) = a4;
  *(_DWORD*)(a1 + 40) = a5;
  *(_BYTE*)(a1 + 160) = 0;
  *(_QWORD*)a1 = game_menu_anonymous_SubEquipMenuItem_vtable;
  v10 = a4 + 8LL * a5;
  if (a4 != 0) {
    *(_BYTE*)(a1 + 160) = (*(_BYTE*)(v10 + 831) & 1) == 0;
    v11 = (unsigned __int16*)(v10 + 828);
    if ((*(_BYTE*)(v10 + 831) & 0x20) != 0) {
      goto LABEL_18;
    }
  }
  else {
    v12 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
    *(_BYTE*)(a1 + 160) =
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * a5 + 7) &
         1) == 0;
    v11 = (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v12 + 8) + 8LL) +
                              12LL * a5 + 4);
    if ((*((_BYTE*)v11 + 3) & 0x20) != 0) {
      goto LABEL_18;
    }
  }
  v13 =
      *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v11);
  if ((v13[336] & 8) != 0 ||
      ((v14 = v13[72], v15 = (1LL << v13[73]) & 0x7DC, v14 <= 7)
           ? (v16 = v15 == 0)
           : (v16 = true),
       !v16)) {
  LABEL_18:
    *(_BYTE*)(a1 + 81) = 0;
    if (a4 != 0) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  *(_BYTE*)(a1 + 81) = ((1LL << v14) & 0x20FF) != 0;
  if (a4 != 0) {
  LABEL_19:
    v17 = v10 + 828;
    goto LABEL_20;
  }
LABEL_17:
  v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * a5 + 4;
LABEL_20:
  result = UnitItem_6e8bc0(v17, a3);
  *(_BYTE*)(a1 + 82) = result & 1;
  return result;
}

__int64 EquipMenuItem_UnitItem_15cc380(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4, int a5)
{
  __int64 v9;
  unsigned __int16* v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  unsigned __int16* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_menu_SubMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v9 = *(_QWORD*)(a2 + 32);
  if (v9 != 0) {
    if (v9 == a2) {
      *(_QWORD*)(a1 + 128) = a1 + 96;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32), a1 + 96);
    }
    else {
      *(_QWORD*)(a1 + 128) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    *(_QWORD*)(a1 + 128) = 0;
  }
  *(_QWORD*)(a1 + 144) = a3;
  *(_QWORD*)(a1 + 152) = a4;
  *(_DWORD*)(a1 + 40) = a5;
  *(_QWORD*)a1 = game_menu_anonymous_SubOpenMenuItem_vtable;
  if (a4 != 0) {
    v10 = (unsigned __int16*)(a4 + 8LL * a5 + 828);
  }
  else {
    v10 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * a5 + 4);
  }
  v11 = GameData_212c878[0];
  v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v10);
  if (*(_BYTE*)(v12 + 72) != 14) {
  LABEL_19:
    LOBYTE(v14) = 0;
    goto LABEL_25;
  }
  v13 = *(unsigned __int8*)(v12 + 73);
  LOBYTE(v14) = 0;
  if (v13 > 0x11) {
    goto LABEL_25;
  }
  if (((1 << v13) & 0x800C) != 0) {
    LODWORD(v14) =
        *(unsigned __int8*)(v12 + 88) >> ((*((_BYTE*)v10 + 3) & 8) != 0);
    if ((_DWORD)v14 == 0) {
      goto LABEL_25;
    }
    goto LABEL_21;
  }
  if (((1 << v13) & 0x10030) != 0) {
  LABEL_21:
    if (a4 != 0) {
      v14 = (unsigned __int16*)(a4 + 8LL * a5 + 828);
    }
    else {
      v14 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * a5 + 4);
    }
    LOBYTE(v14) =
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8LL * *v14) + 73LL) == 17;
    goto LABEL_25;
  }
  if (v13 != 17) {
    goto LABEL_25;
  }
  v15 = *(_QWORD*)(v12 + 376);
  if (v15 == 0) {
    goto LABEL_19;
  }
  v16 = *((_DWORD*)v10 + 1);
  if ((v16 & 0x3FF0) == 0) {
    goto LABEL_19;
  }
  v17 = GameRoutine_996d60(v15, ((v16 >> 4) & 0x3FF) - 1, 1000);
  if (v17 == 0) {
    a5 = *(_DWORD*)(a1 + 40);
    a4 = *(_QWORD*)(a1 + 152);
    LOBYTE(v14) = 0;
    goto LABEL_25;
  }
  v14 = *(unsigned __int16**)(v17 + 40);
  a5 = *(_DWORD*)(a1 + 40);
  a4 = *(_QWORD*)(a1 + 152);
  if (v14 != nullptr) {
    goto LABEL_21;
  }
LABEL_25:
  *(_BYTE*)(a1 + 81) = (_BYTE)v14;
  if (a4 != 0) {
    v18 = a4 + 8LL * a5 + 828;
  }
  else {
    v18 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * a5 + 4;
  }
  result = UnitItem_6e91b0(v18);
  *(_BYTE*)(a1 + 82) = result & 1;
  return result;
}

__int64 EquipMenuItem_UnitItem_15cc5d0(__int64 a1, __int64 a2, __int64 a3,
                                       __int64 a4, int a5)
{
  __int64 v9;
  unsigned __int16* v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  unsigned __int16* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  *(_WORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_menu_SubMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v9 = *(_QWORD*)(a2 + 32);
  if (v9 != 0) {
    if (v9 == a2) {
      *(_QWORD*)(a1 + 128) = a1 + 96;
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 32) + 24LL))(
          *(_QWORD*)(a2 + 32), a1 + 96);
    }
    else {
      *(_QWORD*)(a1 + 128) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    *(_QWORD*)(a1 + 128) = 0;
  }
  *(_QWORD*)(a1 + 144) = a3;
  *(_QWORD*)(a1 + 152) = a4;
  *(_DWORD*)(a1 + 40) = a5;
  *(_QWORD*)a1 = game_menu_anonymous_SubUseMenuItem_vtable;
  if (a4 != 0) {
    v10 = (unsigned __int16*)(a4 + 8LL * a5 + 828);
  }
  else {
    v10 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * a5 + 4);
  }
  v11 = GameData_212c878[0];
  v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v10);
  if (*(_BYTE*)(v12 + 72) != 14) {
  LABEL_19:
    LOBYTE(v14) = 0;
    goto LABEL_25;
  }
  v13 = *(unsigned __int8*)(v12 + 73);
  LOBYTE(v14) = 0;
  if (v13 > 0x11) {
    goto LABEL_25;
  }
  if (((1 << v13) & 0x800C) != 0) {
    LODWORD(v14) =
        *(unsigned __int8*)(v12 + 88) >> ((*((_BYTE*)v10 + 3) & 8) != 0);
    if ((_DWORD)v14 == 0) {
      goto LABEL_25;
    }
    goto LABEL_21;
  }
  if (((1 << v13) & 0x10030) != 0) {
  LABEL_21:
    if (a4 != 0) {
      v14 = (unsigned __int16*)(a4 + 8LL * a5 + 828);
    }
    else {
      v14 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * a5 + 4);
    }
    LOBYTE(v14) =
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8LL * *v14) + 73LL) != 17;
    goto LABEL_25;
  }
  if (v13 != 17) {
    goto LABEL_25;
  }
  v15 = *(_QWORD*)(v12 + 376);
  if (v15 == 0) {
    goto LABEL_19;
  }
  v16 = *((_DWORD*)v10 + 1);
  if ((v16 & 0x3FF0) == 0) {
    goto LABEL_19;
  }
  v17 = GameRoutine_996d60(v15, ((v16 >> 4) & 0x3FF) - 1, 1000);
  if (v17 == 0) {
    a5 = *(_DWORD*)(a1 + 40);
    a4 = *(_QWORD*)(a1 + 152);
    LOBYTE(v14) = 0;
    goto LABEL_25;
  }
  v14 = *(unsigned __int16**)(v17 + 40);
  a5 = *(_DWORD*)(a1 + 40);
  a4 = *(_QWORD*)(a1 + 152);
  if (v14 != nullptr) {
    goto LABEL_21;
  }
LABEL_25:
  *(_BYTE*)(a1 + 81) = (_BYTE)v14;
  if (a4 != 0) {
    v18 = a4 + 8LL * a5 + 828;
  }
  else {
    v18 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * a5 + 4;
  }
  result = UnitItem_6e91b0(v18);
  *(_BYTE*)(a1 + 82) = result & 1;
  return result;
}

__int64 game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure_Invoke_15cc8e0(
    __int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  _BOOL8 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 (***v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (**v19)();
  int v20;
  __int64 (***v21)();
  __int64 v22;

  v2 = *(_QWORD**)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v3 = (*(_BYTE*)((*(__int64 (**)(_QWORD*))(*v2 + 560LL))(v2) + 3) & 1) == 0;
  if ((GameRoutine_15de630(v3) & 1) == 0) {
    game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2[12] + 304LL));
    return 2;
  }
  v5 = (_BYTE*)(v2[11] + 847LL);
  v6 = 2;
  v7 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v5 - 19) != 0 && (*(v5 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v5 - 19)) +
                            72LL) < 8u) {
      LODWORD(v6) = v6 - 2;
      goto LABEL_19;
    }
    if (*(_WORD*)(v5 - 11) != 0 && (*(v5 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v5 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v5 - 3) != 0 && (*v5 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v5 - 3)) +
                            72LL) < 8u) {
      goto LABEL_19;
    }
    v6 += 3;
    v5 += 24;
    if (v6 == 32) {
      goto LABEL_32;
    }
  }
  LODWORD(v6) = v6 - 1;
LABEL_19:
  v9 = v2[12];
  v10 = &v19;
  v20 = v6;
  v21 = &v19;
  v11 = *(_QWORD*)(v9 + 304);
  v19 = GameData_20587d8;
  v13 = *(_QWORD*)(v11 + 232);
  v12 = *(_QWORD*)(v11 + 240);
  if (v12 == v13) {
    goto LABEL_30;
  }
  v14 = 0;
  v15 = GameData_212e008[0];
  do {
    v16 = *(_QWORD*)(v13 + 8 * v14);
    if (v16 != 0) {
      v17 = __dynamic_cast(v16, v15, &GameData_2058740, 0);
      if (v17 == 0) {
        goto LABEL_21;
      }
      v22 = v17;
      if (v21 == nullptr) {
        GameRoutine_60a310(0, v4);
      }
      if ((((__int64 (*)(__int64 (***)(), __int64*))(*v21)[6])(v21, &v22) &
           1) != 0) {
        break;
      }
      v13 = *(_QWORD*)(v11 + 232);
      v12 = *(_QWORD*)(v11 + 240);
    }
  LABEL_21:
    ++v14;
  } while (v14 < (v12 - v13) >> 3);
  v10 = v21;
  if (v21 != &v19) {
    if (v21 != nullptr) {
      v18 = 5;
      goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_30:
  v18 = 4;
LABEL_31:
  ((void (*)(__int64 (***)(), __int64))(*v10)[v18])(v10, v4);
LABEL_32:
  (*(void (**)(_QWORD))(**(_QWORD**)(v2[12] + 304LL) + 1080LL))(
      *(_QWORD*)(v2[12] + 304LL));
  return 2;
}

bool game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure_Invoke_15ccc00(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = *(_DWORD*)(a1 + 8);
  v4 = *(_DWORD*)(*a2 + 40);
  if (v4 == v3) {
    v5 = *(_QWORD*)(v2 + 8);
    v6 = *(_QWORD*)(v5 + 336);
    if (v6 != v2) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v5 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1, 0);
      v7 = *(_QWORD*)(v5 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_12:
        *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v8;
        return v4 == v3;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v6 = *(_QWORD*)(v5 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_12;
  }
  return v4 == v3;
}

__int64

game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 != 0) {
    game_Unit_Unknown6c4610(*(_QWORD*)(v1 + 88));
    *(_WORD*)(v2 + 20) |= 1u;
  }
  v3 = *(_QWORD**)(v1 + 96);
  v4 = v3[38];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 1080LL))(v4);
  }
  v5 = v3[39];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 1080LL))(v5);
  }
  result = v3[40];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
