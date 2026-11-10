#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 EquipMenuItem_ItemExchange_Unknown58(__int64 a1);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20577e0;
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 EquipMenuItem_ItemExchange_15c9400(_QWORD* a1, _QWORD* a2, __int64 a3);
bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure0_Invoke(
    __int64 a1, __int64 a2);
bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure1_Invoke(
    __int64 a1, __int64 a2);

__int64 EquipMenuItem_ItemExchange_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  if ((_DWORD)v1 == -1) {
    v3 = &game_g_empty_item;
  }
  else {
    v3 = (__int64*)(v2 + 8 * v1 + 828);
  }
  if ((*((_BYTE*)v3 + 3) & 0x10) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v3);
  if ((*(_BYTE*)(v4 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v4 + 72)) & 0xE01F) == 0) {
    return 0;
  }
  else {
    return GameRoutine_157b5c0(v2, (unsigned __int16*)v3);
  }
}

__int64 EquipMenuItem_ItemExchange_15c9400(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;

  if (a1 == a2) {
    return 0;
  }
  v5 = a1;
  v6 = GameData_212e008[0];
  while (1) {
    if (*v5 != 0) {
      v7 = __dynamic_cast(*v5, v6, &GameData_20577e0, 0);
      if (v7 != 0) {
        v9 = v7;
        v10 = *(_QWORD*)(a3 + 32);
        v12 = v9;
        if (v10 == 0) {
          GameRoutine_60a310(0, v8);
        }
        if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10,
                                                                        &v12) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == a2) {
      return 0;
    }
  }
  return v9;
}

bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;

  v2 = *(int*)(*(_QWORD*)a2 + 40LL);
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 8 * v2 + 828);
  if ((_DWORD)v2 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  return *(unsigned __int16*)v3 == 0;
}

bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure0_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;

  v2 = *(int*)(*(_QWORD*)a2 + 40LL);
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 8 * v2 + 828);
  if ((_DWORD)v2 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  return *(unsigned __int16*)v3 != 0;
}

bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure1_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;

  v2 = *(int*)(*(_QWORD*)a2 + 40LL);
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 8 * v2 + 828);
  if ((_DWORD)v2 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  return *(unsigned __int16*)v3 == 0;
}

#pragma GCC visibility pop
