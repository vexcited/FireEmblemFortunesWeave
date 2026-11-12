#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupImage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*GameData_20f7640[])();
extern __int64 (*GameData_20f77c0[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_20f7088;
extern __int64* GameData_212e008[9];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20f7830[12];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ItemShopSelectMenu_1873c90_alt1(_BYTE* a1) __asm__(
    "ItemShopSelectMenu_1873c90");
__int64 ItemShopSelectMenu_1873d80(_QWORD* a1);
__int64 ItemShopSelectMenu_1873eb0_alt1(__int64 a1) __asm__(
    "ItemShopSelectMenu_1873eb0");
__int64 ItemShopSelectMenu_18742d0_alt1(
    __int64 a1, __int64 a2, __int64 a3) __asm__("ItemShopSelectMenu_18742d0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64
game_menu_PageTab_SetupImage_alt1(int*, __int64, __int64, int, int,
                                  int) __asm__("game_menu_PageTab_SetupImage");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
bool GameRoutine_19ef8e0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_19ef8e0");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 ItemShopSelectMenu_1873c90(int* a1);
void ItemShopSelectMenu_1873eb0(__int64* a1);
bool ItemShopSelectMenu_18742d0(__int64 a1, __int64 a2, __int64 a3);

__int64 ItemShopSelectMenu_1873c90(int* a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  if (((*(__int64 (**)(int*))(*(_QWORD*)a1 + 1200LL))(a1) & 1) == 0) {
    goto LABEL_9;
  }
  LayoutAccessor_1560070((void*)(&v8_.v8), (__int64*)a1 + 119, "L_PageTab");
  v6_.v6[0] = GameData_20f7640;
  v6_.v6[1] = a1;
  v2 = *(_QWORD*)a1;
  v6_.v7 = v6_.v6;
  v3 = (*(__int64 (**)(int*))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage_alt1(a1 + 164, (__int64)&v8_.v8, (__int64)v6_.v6,
                                    v3, 14, 15);
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_7;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
LABEL_7:
  if (v8_.v9 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v8_.v9);
  }
LABEL_9:
  *((_BYTE*)a1 + 1080) = ItemShopSelectMenu_1873d80(a1) & 1;
  return (*(__int64 (**)(int*, _QWORD*))(*(_QWORD*)a1 + 1256LL))(
      a1, (_QWORD*)a1 + 134);
}

__int64 ItemShopSelectMenu_1873d80(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  char v15;
  __int64 v16;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (((*(__int64 (**)(_QWORD*))(*a1 + 1264LL))(a1) & 1) != 0) {
    v3 = 0;
    return v3 & 1;
  }
  v5 = a1[29];
  v4 = a1[30];
  v6 = v13_.v13;
  v15 = 0;
  v13_.v13[0] = GameData_20f77c0;
  v13_.v13[1] = &v15;
  v13_.v14 = v13_.v13;
  if (v4 == v5) {
    goto LABEL_14;
  }
  v7 = 0;
  v8 = GameData_212e008[0];
  do {
    v9 = *(_QWORD*)(v5 + 8 * v7);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v8, &GameData_20f7088, 0),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v10 == 0) {
        goto LABEL_5;
      }
      v16 = v10;
      if (v13_.v14 == nullptr) {
        GameRoutine_60a310_alt1(),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v13_.v14 + 48LL))(v13_.v14,
                                                                  &v16) &
           1) != 0) {
        break;
      }
      v5 = a1[29];
      v4 = a1[30];
    }
  LABEL_5:
    ++v7;
  } while (v7 < (v4 - v5) >> 3);
  v6 = v13_.v14;
  if (v13_.v14 != v13_.v13) {
    if (v13_.v14 != nullptr) {
      v11 = 40;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_14:
  v11 = 32;
LABEL_15:
  (*(void (**)(_QWORD*, __int64))(*v6 + v11))(v6, v2),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_16:
  v3 = v15;
  return v3 & 1;
}

void ItemShopSelectMenu_1873eb0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8 v4;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(__int64*))(*a1 + 1200))(a1) & 1) != 0) {
    v2 = *((unsigned int*)a1 + 165);
    v3 = a1[84];
    if ((int)v2 < (unsigned __int64)((a1[85] - v3) >> 2)) {
      v2 = *(unsigned int*)(v3 + 4LL * (int)v2);
    }
    v4 = (*(__int64 (**)(__int64*, __int64))(*a1 + 1240))(a1, v2) - 1;
    if (v4 > 6u) {
      v5 = "MID_Menu_All";
    }
    else {
      v5 = GameData_20f7830[v4];
    }
  }
  else {
    v5 = "MID_Menu_Detail";
  }
  v6 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v5, 0);
  if (v6 != nullptr) {
    v7 = (__int64)v6;
    v8 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119, (__int64)"Menu_T_Type");
    if (v8 != 0) {
      GameRoutine_156c5d0_alt1(v8, v7, 0);
    }
  }
}

bool ItemShopSelectMenu_18742d0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  struct {
    _QWORD v6[3];
    char v7;
  } v6_;
  struct {
    _QWORD v8[3];
    char v9;
  } v8_;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 560LL))(a2);
  v6_.v6[0] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 560LL))(a3);
  v6_.v6[1] = 0;
  v8_.v8[0] = v4;
  v8_.v8[1] = 0;
  v8_.v8[2] = 0;
  v8_.v9 = 0;
  v6_.v6[2] = 0;
  v6_.v7 = 0;
  return GameRoutine_19ef8e0_alt1(v8_.v8, v6_.v6);
}

#pragma GCC visibility pop
