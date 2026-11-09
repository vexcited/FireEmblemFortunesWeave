#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788420(_QWORD, _QWORD);
__int64 GameRoutine_1788690(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2057e80;
extern __int64 GameData_2057ec8;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64* game_g_empty_item_ptr;
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 TransporterPoolMenu_Unknown88(__int64 a1);
__int64 TransporterPoolMenu_Unknown139(_QWORD* a1);
__int64 TransporterPoolMenu_Unknown144(__int64 a1, char a2);
__int64 TransporterPoolMenu_Unknown145(__int64 a1, char a2);
bool TransporterPoolMenu_Unknown147(__int64 a1);

__int64 TransporterPoolMenu_Unknown88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  _BYTE* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v17;
  _QWORD v18[8];

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_2057ec8, 0);
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v18[2] = v18[4];
    v18[3] = v18[5];
    v18[7] = v18[6];
    v1 = result;
    v2 = __dynamic_cast(v17, GameData_212e008[0], &GameData_2057e80, 0);
    v3 = game_g_empty_item_ptr;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2);
      v5 = *(_BYTE*)(v4 + 2);
      *(_WORD*)(v1 + 380) = *(_WORD*)v4;
      *(_BYTE*)(v1 + 382) = v5;
      v6 = (_BYTE*)(v4 + 3);
      v7 = (_DWORD*)(v4 + 4);
    }
    else {
      v6 = (char*)game_g_empty_item_ptr + 3;
      *(_WORD*)(v1 + 380) = *(_WORD*)game_g_empty_item_ptr;
      *(_BYTE*)(v1 + 382) = *((_BYTE*)v3 + 2);
      v7 = (_DWORD*)v3 + 1;
    }
    v8 = v1 + 380;
    *(_BYTE*)(v1 + 383) = *v6;
    v9 = *v3;
    *(_DWORD*)(v1 + 384) = *v7;
    if (*(_QWORD*)(v1 + 380) == v9) {
      v10 = true;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
      v10 = *(unsigned __int8*)(v11 + 72) >= 8u &&
            (unsigned __int64)(*(_BYTE*)(v11 + 73) != 16);
    }
    GameRoutine_1567590("StatusChange", v10);
    *(struct PseudoSret*)(v18) = GameRoutine_1560070(v1 + 200, "L_ItemDetail");
    result = v18[1];
    v12 = *(_BYTE*)(v1 + 389) != 0 ? *(_QWORD*)(v1 + 360) : 0LL;
    if (v18[1] != 0) {
      v13 = std___1___shared_weak_count_lock(v18[1]);
      if (v13 != 0) {
        v14 = v13;
        if (v18[0] != 0) {
          GameRoutine_15d2540(v18[0], v8, v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      result = v18[1];
      if (v18[1] != 0) {
        return std___1___shared_weak_count___release_weak(v18[1]);
      }
    }
  }
  return result;
}

__int64 TransporterPoolMenu_Unknown139(_QWORD* a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(__dynamic_cast(a1[132], GameData_21319e8[0],
                                 &GameData_2057ec8, 0) +
                  304);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 240LL))(v2, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 248LL))(v2, 1);
  (*(void (**)(_QWORD*, __int64))(*a1 + 240LL))(a1, 1);
  return (*(__int64 (**)(_QWORD*, __int64))(*a1 + 248LL))(a1, 1);
}

__int64 TransporterPoolMenu_Unknown144(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1176LL))(a1) & 1) != 0) {
    return GameRoutine_1788420(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 TransporterPoolMenu_Unknown145(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1184LL))(a1) & 1) != 0) {
    return GameRoutine_1788690(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

bool TransporterPoolMenu_Unknown147(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 |
          *(_DWORD*)(a1 + 660)) == 0;
}

#pragma GCC visibility pop
