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
_QWORD* GameRoutine_166a010(__int64, __int64, __int64, int, __int64);
_QWORD* GameRoutine_166a500(__int64, char*, int, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, char, _QWORD*, __int64,
                     __int64, char);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_2058b60[])();
extern __int64 (*GameData_20596e0[])();
extern __int64 ui_LayoutAccessor_empty_;
__n128 EquipMenuItem_UnitItem_Unknown55(_QWORD* a1);
__int64
game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure0_Invoke_15ccf90(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure3_Invoke(__int64 a1,
                                                                 _QWORD* a2);
bool EquipMenuItem_UnitItem_Unknown5(__int64 a1);
__int64 GameRoutine_15de630_alt1(char, __int64,
                                 unsigned int) __asm__("GameRoutine_15de630");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

bool EquipMenuItem_UnitItem_Unknown5(__int64 a1)
{
  int v3;
  bool v4;
  int v5;

  if (*(_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) != 0) {
    return true;
  }
  v3 = *(_DWORD*)(a1 + 40);
  v4 = __OFSUB__(v3, 1);
  v5 = v3 - 1;
  return v5 < 0 != v4 ||
         *(unsigned __int16*)(*(_QWORD*)(a1 + 88) + 8LL * (unsigned int)v5 +
                              828) != 0;
}

__n128 EquipMenuItem_UnitItem_Unknown55(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int16* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __n128 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = (_QWORD*)a1[11];
  v7 = (unsigned __int16*)v5;
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  Util_15792c0(v4, v7, 0, 1, v6, (__int64)"L_Icon", (__int64)"T_Txt", v8 & 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v9 = a1[7];
  if (v9 == 0) {
    goto LABEL_10;
  }
  v10 = std___1___shared_weak_count_lock(v9),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v10 == 0) {
    goto LABEL_10;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = (__int64*)a1[6];
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v20 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = v20;
  if (v20 == nullptr) {
  LABEL_10:
    v13 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  LayoutAccessor_1560070((void*)(&v21_.v21), v13, (__int64)"L_Icon"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v21_.v22 == 0) {
    return result;
  }
  v15 = std___1___shared_weak_count_lock(v21_.v22),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v16 = v21_.v21;
  if (v21_.v22 != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if (v15 != 0 && v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v17 = (*(__int64 (**)(_QWORD*, long double))(*a1 + 560LL))(
        a1, *(long double*)&result),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v18 = std___1___shared_weak_count_lock(v15),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v18 != 0) {
      v19 = v18;
      ui_LayoutAccessor_SetPaneVisible(v16, (__int64)"IconLock",
                                       (*(_BYTE*)(v17 + 3) & 0x10) != 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    result = std___1___shared_weak_count___release_weak();
  }
  else if (v15 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
        v15, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

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
  __int64 v2;
  __int64 v3;
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
  struct {
    __int64 (**v19)();
    int v20;
    char gap12_[20];
    __int64 (***v21)();
  } v19_;
  __int64 v22;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((GameRoutine_15de630_alt1((*(_BYTE*)(v3 + 3) & 1) == 0,
                                *(_QWORD*)(v2 + 88), *(_DWORD*)(v2 + 40)) &
       1) == 0) {
    game_menu_BasicMenu_Unknown16dd9a0_alt1(
        *(_QWORD*)(*(_QWORD*)(v2 + 96) + 304LL)),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return 2;
  }
  v5 = (_BYTE*)(*(_QWORD*)(v2 + 88) + 847LL);
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
  v9 = *(_QWORD*)(v2 + 96);
  v10 = &v19_.v19;
  v19_.v20 = v6;
  v19_.v21 = &v19_.v19;
  v11 = *(_QWORD*)(v9 + 304);
  v19_.v19 = GameData_20587d8;
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
      v17 = __dynamic_cast(v16, v15, &GameData_2058740, 0),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v17 == 0) {
        goto LABEL_21;
      }
      v22 = v17;
      if (v19_.v21 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v19_.v21)[6])(
               v19_.v21, &v22) &
           1) != 0) {
        break;
      }
      v13 = *(_QWORD*)(v11 + 232);
      v12 = *(_QWORD*)(v11 + 240);
    }
  LABEL_21:
    ++v14;
  } while (v14 < (v12 - v13) >> 3);
  v10 = v19_.v21;
  if (v19_.v21 != &v19_.v19) {
    if (v19_.v21 != nullptr) {
      v18 = 5;
      goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_30:
  v18 = 4;
LABEL_31:
  ((void (*)(__int64 (***)(void), __int64))(*v10)[v18])(v10, v4),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_32:
  (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(v2 + 96) + 304LL) + 1080LL))(
      *(_QWORD*)(*(_QWORD*)(v2 + 96) + 304LL)),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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

game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure0_Invoke_15ccf90(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v2 + 8);
  v5 = *(_QWORD*)(v3 + 88);
  v6 = *(_DWORD*)(v3 + 40);
  v7 = *(_QWORD*)(v4 + 152);
  v11_.v12 = v11_.v11;
  if (v7 != 0) {
    v8 = v7;
  }
  else {
    v8 = v4;
  }
  v11_.v11[0] = GameData_2058b60;
  v11_.v11[1] = v3;
  GameRoutine_166a010(v8, v5, v5, v6, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v9 = 32;
    goto LABEL_10;
  }
  if (v11_.v12 != nullptr) {
    v9 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v11_.v12 + v9))((__int64)v11_.v12);
  }
  return 12;
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

__int64

game_menu_anonymous_EquipMenuItem_UnitItem_ACall_closure3_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  char* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) == 0) {
    return 1;
  }
  v5 = *(char**)(v3 + 88);
  v6 = *(_QWORD*)(v2 + 8);
  v7 = *(_DWORD*)(v3 + 40);
  v11_.v11[2] = *(unsigned __int16*)(a1 + 16) |
                ((unsigned __int64)*(unsigned __int8*)(a1 + 18) << 16);
  v11_.v12 = v11_.v11;
  if (*(_QWORD*)(v6 + 152) != 0) {
    v8 = *(_QWORD*)(v6 + 152);
  }
  else {
    v8 = v6;
  }
  v11_.v11[0] = GameData_20596e0;
  v11_.v11[1] = v3;
  GameRoutine_166a500(v8, v5, v7, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v9 = 32;
    goto LABEL_10;
  }
  if (v11_.v12 != nullptr) {
    v9 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v11_.v12 + v9))((__int64)v11_.v12);
  }
  return 12;
}

#pragma GCC visibility pop
